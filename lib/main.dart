import 'package:flutter/material.dart';
import 'package:singularity_flutter/SingularityFlutter.dart';

void main() {
  runApp(MaterialApp(home: MyApp()));
}

class MyApp extends StatefulWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  State<MyApp> createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> implements SigularitySDKProtocol {
  /// take variable of SingularityFlutter
  late SingularityFlutter _gamepay;

  @override
  void initState() {
    super.initState();

    /// initalize variable of SingularityFlutter
    _gamepay = SingularityFlutter(this);
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Niobrix'),
        ),
        body: Center(
          child: ElevatedButton(
            child: const Text("Start"),
            onPressed: () async {
              /// call SingularityFlutter openLoginScreen to start login flow or open profile page
              _gamepay.openLoginScreen(key: "neobrix", singularityConfig: {});
            },
          ),
        ),
      ),
    );
  }

  showAlertDialog(BuildContext context, String title, String content) {
    Widget okButton = TextButton(
      child: const Text("OK"),
      onPressed: () {
        Navigator.pop(context);
      },
    );

    showDialog(
        context: context,
        builder: (BuildContext context) {
          return AlertDialog(
            title: Text(title),
            content: SingleChildScrollView(
              scrollDirection: Axis.vertical,
              child: new Text(content),
            ),
            actions: [okButton],
          );
        });
  }

  /// Sigularity delegate method after login success
  @override
  onGetSingularityUserInfo(String user) {
    showAlertDialog(context, "onGetSingularityUserInfo", user.toString());
  }

  ///Sigularity delegate method when user click on close or back button
  @override
  onSingularityClose() {
    showAlertDialog(context, "onSigularityClose", "Back Pressed");
  }

  /// Sigularity delegate method after logout success
  @override
  onSingularityLogout() {
    showAlertDialog(context, "onSigularityLogout", "onSigularityLogout");
  }
}
