import 'dart:convert';
import 'dart:async';
import 'dart:io';

import 'package:flutter/material.dart';
import 'package:flutter_blue_plus/flutter_blue_plus.dart';
import 'package:camera/camera.dart';

import '../utils/snackbar.dart';
import '../widgets/camera_tile.dart';

class BasicControlScreen extends StatefulWidget {
  final BluetoothDevice device;

  const BasicControlScreen({Key? key, required this.device}) : super(key: key);

  @override
  State<BasicControlScreen> createState() => _BasicControlScreen();
}

class _BasicControlScreen extends State<BasicControlScreen> {
  int? _rssi;
  BluetoothConnectionState _connectionState = BluetoothConnectionState.disconnected;
  List<BluetoothService> _services = [];
  List<BluetoothCharacteristic> writeableCharacteristics = [];

  late StreamSubscription<BluetoothConnectionState> _connectionStateSubscription;

  @override
  void initState() {
    super.initState();

    _connectionStateSubscription = widget.device.connectionState.listen((state) async {
      _connectionState = state;
      if (state == BluetoothConnectionState.connected) {
        if (mounted) {
          setState(() {});
        }
        // setting services
        try {
          _services = await widget.device.discoverServices();
        } catch (e) {
          Snackbar.show(ABC.d, prettyException("Discover Services Error:", e), success: false);
        }
        // setting characteristics, descriptors
        try {
          writeableCharacteristics.clear();
          for (BluetoothService s in _services) {
            for (BluetoothCharacteristic c in s.characteristics) {
              if (c.properties.writeWithoutResponse) {
                writeableCharacteristics.add(c);
              }
            }
          }
          // writeableCharacteristics.clear();
          // for (var s in _services) {
          //   for (var c in s.characteristics) {
          //     if (c.properties.write) {
          //       writeableCharacteristics.add(c);
          //     }
          //   }
          // }
          Snackbar.show(ABC.d, "Discover Connect: Success", success: true);
        } catch (e) {
          Snackbar.show(ABC.d, prettyException("Discover Characteristics Error:", e), success: false);
        }

        if (mounted) {
          setState(() {});
        }
      }
      if (state == BluetoothConnectionState.connected && _rssi == null) {
        _rssi = await widget.device.readRssi();
      }
      if (mounted) {
        setState(() {});
      }
    });
  }

  @override
  void dispose() {
    _connectionStateSubscription.cancel();
    super.dispose();
  }

  Future<void> connectToDevice(BluetoothDevice device) async {
    await device.connect();
    }

  Future<Widget> callCamera() async {
    WidgetsFlutterBinding.ensureInitialized();
    final cameras = await availableCameras();
    final firstCamera = cameras.first;
    return CameraTile(camera : firstCamera);
  }

  void writeCharacteristic(BluetoothDevice device, Guid characteristicId, List<int> data) async {
    List<BluetoothService> services = await device.discoverServices();
    for (BluetoothService service in services) {
      for (BluetoothCharacteristic characteristic in service.characteristics) {
        if (characteristic.uuid == characteristicId) {
          await characteristic.write(data);
          print('Data written successfully.');
        }
      }
    }
  }

  Widget upArrowButton(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(5.0),
      child: ElevatedButton(
        child: Image.asset(
          'assets/images/up_button.png',
          fit: BoxFit.contain,
        ),
        onPressed: () async {
          var someData = utf8.encode('go');
          for (var c in writeableCharacteristics) {
            try {
              await c.write(someData, withoutResponse: c.properties.writeWithoutResponse);
            } catch (e) {
              Snackbar.show(ABC.d, prettyException("Error Control:", e), success: false);
            }
          }
        },
        style: ElevatedButton.styleFrom(
          padding: EdgeInsets.all(10),
          fixedSize: Size(100, 100),
        ),
      ),
    );
  }

  Widget stopButton(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(5.0),
      child: ElevatedButton(
        child: Image.asset(
          'assets/images/stop_button.png',
          fit: BoxFit.contain,
        ),
        onPressed: () async {
          var someData = utf8.encode('stop');
          for (var c in writeableCharacteristics) {
            try {
              await c.write(someData, withoutResponse: c.properties.writeWithoutResponse);
            } catch (e) {
              Snackbar.show(ABC.d, prettyException("Error Control:", e), success: false);
            }
          }
        },
        style: ElevatedButton.styleFrom(
          padding: EdgeInsets.all(10),
          fixedSize: Size(100, 100),
        ),
      ),
    );
  }

  Widget leftArrowButton(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(5.0),
      child: ElevatedButton(
        child: Image.asset(
          'assets/images/left_button.png',
          fit: BoxFit.contain,
        ),
        onPressed: () async {
          var someData = utf8.encode('left');
          for (var c in writeableCharacteristics) {
            try {
              await c.write(someData, withoutResponse: c.properties.writeWithoutResponse);
            } catch (e) {
              Snackbar.show(ABC.d, prettyException("Error Control:", e), success: false);
            }
          }
        },
        style: ElevatedButton.styleFrom(
          padding: EdgeInsets.all(10),
          fixedSize: Size(100, 100),
        ),
      ),
    );
  }

  Widget rightArrowButton(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(5.0),
      child: ElevatedButton(
        child: Image.asset(
          'assets/images/right_button.png',
          fit: BoxFit.contain,
        ),
        onPressed: () async {
          var someData = utf8.encode('right');
          for (var c in writeableCharacteristics) {
            try {
              await c.write(someData, withoutResponse: c.properties.writeWithoutResponse);
            } catch (e) {
              Snackbar.show(ABC.d, prettyException("Error Control:", e), success: false);
            }
          }
        },
        style: ElevatedButton.styleFrom(
          padding: EdgeInsets.all(10),
          fixedSize: Size(100, 100),
        ),
      ),
    );
  }

  Widget backArrowButton(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(5.0),
      child: ElevatedButton(
        child: Image.asset(
          'assets/images/down_button.png',
          fit: BoxFit.contain,
        ),
        onPressed: () async {
          var someData = utf8.encode('back');
          for (var c in writeableCharacteristics) {
            try {
              await c.write(someData, withoutResponse: c.properties.writeWithoutResponse);
            } catch (e) {
              Snackbar.show(ABC.d, prettyException("Error Control:", e), success: false);
            }
          }
        },
        style: ElevatedButton.styleFrom(
          padding: EdgeInsets.all(10),
          fixedSize: Size(100, 100),
        ),
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    // double screenHeight = MediaQuery.of(context).size.height;

    return ScaffoldMessenger(
      key: Snackbar.snackBarKeyD,
      child: Scaffold(
        appBar: AppBar(
          title: const Text(
            'Basic Control',
            style: TextStyle(color: Colors.white),
          ),
          centerTitle: true,
          backgroundColor: Colors.blue,
          iconTheme: const IconThemeData(color: Colors.white),
        ),

        body: Column(
          children: <Widget>[
            FutureBuilder<Widget>(
            future: callCamera(),
            builder: (context, snapshot) {
              if (snapshot.connectionState == ConnectionState.done) {
                if (snapshot.hasData) {
                  return snapshot.data!;
                } else {
                  return Text('Camera not available');
                }
              } else {
                return CircularProgressIndicator();
              }
            },
          ),
            Row(
              mainAxisAlignment : MainAxisAlignment.center,
              crossAxisAlignment : CrossAxisAlignment.center,
              children: <Widget>[
                 leftArrowButton(context),
                 Padding(
                   padding: EdgeInsets.only(top: 0.0, bottom: 0.0),
                   child: Column(
                    mainAxisAlignment : MainAxisAlignment.center,
                    crossAxisAlignment : CrossAxisAlignment.center,
                    children: <Widget>[
                      SizedBox(height: 60.0,),
                      upArrowButton(context),
                      stopButton(context),
                      backArrowButton(context),
                    ],
                   ),
                 ),
                 rightArrowButton(context),
              ],
            ),
          ],
        ),
      ),
    );
  }
}