import 'dart:async';
import 'dart:io';

import 'package:flutter/material.dart';
import 'package:flutter_blue_plus/flutter_blue_plus.dart';

import 'device_screen.dart';
import 'basic_control_screen.dart';
import 'gps_control_screen.dart';
import '../utils/snackbar.dart';
import '../widgets/system_device_tile.dart';
import '../widgets/scan_result_tile.dart';
import '../utils/extra.dart';

class ScanScreen extends StatefulWidget {
  const ScanScreen({Key? key}) : super(key: key);

  @override
  State<ScanScreen> createState() => _ScanScreenState();
}

class _ScanScreenState extends State<ScanScreen> {
  List<BluetoothDevice> _systemDevices = [];
  List<ScanResult> _scanResults = [];
  bool _isScanning = false;
  late StreamSubscription<List<ScanResult>> _scanResultsSubscription;
  late StreamSubscription<bool> _isScanningSubscription;
  
  BluetoothDevice? connectedDevice;

  @override
  void initState() {
    super.initState();

    _scanResultsSubscription = FlutterBluePlus.scanResults.listen((results) {
      _scanResults = results;
      if (mounted) {
        setState(() {});
      }
    }, onError: (e) {
      Snackbar.show(ABC.b, prettyException("Scan Error:", e), success: false);
    });

    _isScanningSubscription = FlutterBluePlus.isScanning.listen((state) {
      _isScanning = state;
      if (mounted) {
        setState(() {});
      }
    });
  }

  @override
  void dispose() {
    _scanResultsSubscription.cancel();
    _isScanningSubscription.cancel();
    super.dispose();
  }

  Future onScanPressed() async {
    try {
      _systemDevices = await FlutterBluePlus.systemDevices;
    } catch (e) {
      Snackbar.show(ABC.b, prettyException("System Devices Error:", e), success: false);
    }
    try {
      // android is slow when asking for all advertisments,
      // so instead we only ask for 1/8 of them
      int divisor = Platform.isAndroid ? 8 : 1;
      await FlutterBluePlus.startScan(
          timeout: const Duration(seconds: 15), continuousUpdates: true, continuousDivisor: divisor);
    } catch (e) {
      Snackbar.show(ABC.b, prettyException("Start Scan Error:", e), success: false);
    }
    if (mounted) {
      setState(() {});
    }
  }

  Future onStopPressed() async {
    try {
      FlutterBluePlus.stopScan();
    } catch (e) {
      Snackbar.show(ABC.b, prettyException("Stop Scan Error:", e), success: false);
    }
  }

  void onConnectPressed(BluetoothDevice device) {
    device.connectAndUpdateStream().catchError((e) {
      Snackbar.show(ABC.c, prettyException("Connect Error:", e), success: false);
    }).then((_) {
    setState(() {
      connectedDevice = device;
    });
    MaterialPageRoute route = MaterialPageRoute(
        builder: (context) => DeviceScreen(device: device), settings: RouteSettings(name: '/DeviceScreen'));
    Navigator.of(context).push(route);
    });
  }

  Future onRefresh() {
    if (_isScanning == false) {
      FlutterBluePlus.startScan(timeout: const Duration(seconds: 15));
    }
    if (mounted) {
      setState(() {});
    }
    return Future.delayed(Duration(milliseconds: 500));
  }

  Widget buildScanButton(BuildContext context) {
    if (FlutterBluePlus.isScanningNow) {
      return FloatingActionButton(
        child: const Icon(Icons.stop, color: Colors.white),
        onPressed: onStopPressed,
        backgroundColor: Colors.blue,
      );
    } else {
      return FloatingActionButton(
              child: const Icon(Icons.search, color: Colors.white),
              onPressed: onScanPressed,
              backgroundColor: Colors.blue,
      );
    }
  }

  Widget buildDrawer(BuildContext context) {
    return Drawer(
      shadowColor: Colors.white,
      surfaceTintColor: Colors.white,
      child: ListView(
        padding: EdgeInsets.zero,
        children: <Widget>[
          UserAccountsDrawerHeader(
            currentAccountPicture: const CircleAvatar(
              minRadius: 50.0,
              backgroundImage: AssetImage('assets/images/profile.png'),
              backgroundColor: Colors.white,
            ),
            otherAccountsPictures: const <Widget>[
              CircleAvatar(
                minRadius: 25.0,
                backgroundImage: AssetImage('assets/images/other_profile1.png'),
                backgroundColor: Colors.white,
              ),
              CircleAvatar(
                minRadius: 25.0,
                backgroundImage: AssetImage('assets/images/other_profile2.png'),
                backgroundColor: Colors.white,
              ),
            ],
            
            accountName: 
                const Text(
                  "Tester",
                  style: TextStyle(fontSize: 20.0),
                ),
              
            accountEmail: const Text(
              "Select one of the below menus",
              style: TextStyle(fontSize: 16.0),
              ),
            onDetailsPressed: (){
              
            },
            decoration: BoxDecoration(
              color: Colors.blueAccent,
              border: Border.all(color: Colors.transparent),
              borderRadius: const BorderRadius.only(
                bottomLeft: Radius.circular(30.0),
                bottomRight: Radius.circular(30.0),
              )
            ),
          ),
          ListTile(
            leading: Icon(Icons.arrow_circle_up,
            color: Colors.grey[850],
            ),
            title: Text('Basic Control'),
            onTap: () {
              Navigator.of(context).pop(); 

              if (connectedDevice != null) {
                Navigator.of(context).push(
                  MaterialPageRoute(
                    builder: (context) => BasicControlScreen(device: connectedDevice!),
                    settings: RouteSettings(name: '/Control'),
                  ),
                );
              } else {
                Future.delayed(Duration(milliseconds: 300), () {
                  Snackbar.show(ABC.b, prettyException("No device connected", ''), success: false);
                });
              }
            },
            trailing: Icon(Icons.arrow_right_rounded),
          ),
          ListTile(
            leading: Icon(Icons.gps_fixed_rounded,
            color: Colors.grey[850],
            ),
            title: Text('GPS Control'),
            onTap: (){
              Navigator.of(context).pop(); 

              if (connectedDevice != null) {
                Navigator.of(context).push(
                  MaterialPageRoute(
                    builder: (context) => GeolocatorWidget(device: connectedDevice!),
                    settings: RouteSettings(name: '/Control'),
                  ),
                );
              } else {
                Future.delayed(Duration(milliseconds: 300), () {
                  Snackbar.show(ABC.b, prettyException("No device connected", ''), success: false);
                });
              }
            },
            trailing: Icon(Icons.arrow_right_rounded),
          ),
          // ListTile(
          //   leading: Icon(Icons.people_rounded,
          //   color: Colors.grey[850],
          //   ),
          //   title: Text('People Traking'),
          //   onTap: (){
          //     print('Home is clicked');
          //   },
          //   trailing: Icon(Icons.arrow_right_rounded),
          //   ),
        ],
      ),
    );
  }

  List<Widget> _buildSystemDeviceTiles(BuildContext context) {
    return _systemDevices
        .map(
          (d) => SystemDeviceTile(
            device: d,
            onOpen: () => Navigator.of(context).push(
              MaterialPageRoute(
                builder: (context) => DeviceScreen(device: d),
                settings: RouteSettings(name: '/DeviceScreen'),
              ),
            ),
            onConnect: () => onConnectPressed(d),
          ),
        )
        .toList();
  }

  List<Widget> _buildScanResultTiles(BuildContext context) {
    return _scanResults
        .map(
          (r) => ScanResultTile(
            result: r,
            onTap: () => onConnectPressed(r.device),
          ),
        )
        .toList();
  }

  @override
  Widget build(BuildContext context) {
    return ScaffoldMessenger(
      key: Snackbar.snackBarKeyB,
      child: Scaffold(
        appBar: AppBar(
          title: const Text(
            'Capstone Design',
            style: TextStyle(color: Colors.white),
          ),
          centerTitle: true,
          backgroundColor: Colors.blue,
          iconTheme: const IconThemeData(color: Colors.white),
        ),

        drawer: buildDrawer(context),

        body: Padding(
          padding: const EdgeInsets.only(top: 15.0),
          child: RefreshIndicator(
              onRefresh: onRefresh,
              child: ListView(
                children: <Widget>[
                  ..._buildSystemDeviceTiles(context),
                  ..._buildScanResultTiles(context),
                ],
              ),
            ),
          ),
        floatingActionButton: buildScanButton(context),
      ),
    );
  }
}