import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:flutter_blue_plus/flutter_blue_plus.dart';

enum ABC {
  a,
  b,
  c,
  d,
  e,
}

class Snackbar {
  static final snackBarKeyA = GlobalKey<ScaffoldMessengerState>();
  static final snackBarKeyB = GlobalKey<ScaffoldMessengerState>();
  static final snackBarKeyC = GlobalKey<ScaffoldMessengerState>();
  static final snackBarKeyD = GlobalKey<ScaffoldMessengerState>();
  static final snackBarKeyE = GlobalKey<ScaffoldMessengerState>();

  static GlobalKey<ScaffoldMessengerState> getSnackbar(ABC abc) {
    switch (abc) {
      case ABC.a:
        return snackBarKeyA;
      case ABC.b:
        return snackBarKeyB;
      case ABC.c:
        return snackBarKeyC;
      case ABC.d:
        return snackBarKeyD;
      case ABC.e:
        return snackBarKeyD;
    }
  }

  static show(ABC abc, String msg, {required bool success}) {
    final snackBar = success
        ? SnackBar(content: Center(child: Text(msg)), backgroundColor: Colors.blue)
        : SnackBar(content: Center(child: Text(msg)), backgroundColor: Colors.red);
    getSnackbar(abc).currentState?.removeCurrentSnackBar();
    getSnackbar(abc).currentState?.showSnackBar(snackBar);
  }
}


String prettyException(String prefix, dynamic e) {
  if (e is FlutterBluePlusException) {
    return "$prefix ${e.description}";
  } else if (e is PlatformException) {
    return "$prefix ${e.message}";
  }
  return prefix + e.toString();
}