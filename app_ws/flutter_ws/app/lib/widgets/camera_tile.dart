import 'dart:io';

import 'package:flutter/material.dart';
import 'package:camera/camera.dart';

class CameraTile extends StatefulWidget {
  const CameraTile({Key? key, required this.camera,}) : super(key: key);

  final CameraDescription camera;
  
  @override
  State<CameraTile> createState() => _CameraTileState();
}

class _CameraTileState extends State<CameraTile> {
  late CameraController _controller;
  late Future<void> _initializeControllerFuture;

  @override
  void initState() {
    super.initState();
    
    _controller = CameraController(
      widget.camera,
      ResolutionPreset.medium,
    );
    _initializeControllerFuture = _controller.initialize();
  }

  @override
  void dispose() {
    _controller.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(
        left : 8.0,
        top : 4.0,
        right : 8.0,
      ),
      child: Column(
        children: [
          FutureBuilder<void>(
            future: _initializeControllerFuture,
            builder: (context, snapshot) {
              if (snapshot.connectionState == ConnectionState.done) {
              // return FittedBox(
              //   child: SizedBox(
              //     width: MediaQuery.of(context).size.width,
              //     height: MediaQuery.of(context).size.height * 0.46,
              //     child: CameraPreview(_controller),
              //   ),
              // );
              return ClipRect(
                child: SizedBox(
                  width: MediaQuery.of(context).size.width,
                  height: MediaQuery.of(context).size.height * 0.45,
                  child: FittedBox(
                    fit: BoxFit.fitWidth, // 종횡비를 유지하면서 너비에 맞춤
                    child: SizedBox(
                      width: MediaQuery.of(context).size.width,
                      height: MediaQuery.of(context).size.height,
                      child: CameraPreview(_controller),
                    ),
                  ),
                ),
              );
              } else {
                return const Center(child: CircularProgressIndicator());
              }
            },
          ),
        ],
      ),
    );
  }
}