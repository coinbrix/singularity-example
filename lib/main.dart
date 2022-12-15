import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:fluttertoast/fluttertoast.dart';
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
  late TextEditingController _controller;

  // _MyAppState(){
  //   _controller = TextEditingController();
  //   _controller.text = "0";
  // }

  @override
  void initState() {
    super.initState();

    _controller = TextEditingController();
    _controller.text = "0";

    /// initalize variable of SingularityFlutter
    _gamepay = SingularityFlutter(this);
  }

  @override
  void dispose() {
    _controller.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {

    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Neobrix'),
        ),
        body: Column(
          mainAxisAlignment: MainAxisAlignment.start,
          children: [
             Row(
               mainAxisAlignment: MainAxisAlignment.start,
              children: [
                Text("0 -> Sandbox, 1-> Production"),
              ],
            ),
            Row(
              mainAxisAlignment: MainAxisAlignment.start,
              children: [
                Text("Choose Environment: ", style: TextStyle(fontSize: 16),),
              ],
            ),
            TextField(
              controller: _controller,
              decoration: InputDecoration(
                border: OutlineInputBorder(),
              ),
            ),
            ElevatedButton(onPressed: () async {
              // call SingularityFlutter openLoginScreen to start login flow or open profile page
              var environment =  _controller.text;

              try{
                var env = int.parse(environment);
                if(env!= 0 && env!= 1){
                  Fluttertoast.showToast(
                      msg: "Invalid Input",
                      toastLength: Toast.LENGTH_SHORT,
                      gravity: ToastGravity.CENTER,
                      timeInSecForIosWeb: 1,
                      textColor: Colors.white,
                      fontSize: 16.0
                  );
                  return;
                }

                _gamepay.openLoginScreen(
                    key: "neobrix", singularityConfig: {'environment': env}
                );
              }
              catch(e){
                Fluttertoast.showToast(
                    msg: "Invalid Input",
                    toastLength: Toast.LENGTH_SHORT,
                    gravity: ToastGravity.CENTER,
                    timeInSecForIosWeb: 1,
                    textColor: Colors.white,
                    fontSize: 16.0
                );
              }



            }, child: Text("Launch SDK"))

          ],
        )
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
              child: Text(content),
            ),
            actions: [okButton],
          );
        });
  }

  /// Sigularity delegate method after login success
  @override
  onGetSingularityUserInfo(Map user) {
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
    showAlertDialog(context, "onSigularityLogout", "logout");
  }
  
  /// Sigularity delegate method when any error occured
  @override
   onSingularityError(String message) {
    showAlertDialog(context, "onSigularityLogout", message);
  }
}
