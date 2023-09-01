import 'dart:convert';
import 'package:crypto/crypto.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:fluttertoast/fluttertoast.dart';
import 'package:hex/hex.dart';
import 'package:singularity_flutter/SingularityFlutter.dart';
import 'package:uuid/uuid.dart';

void main() {
  runApp(MaterialApp(home: MyApp()));
}

class MyApp extends StatefulWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  State<MyApp> createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> implements SigularitySDKProtocol, SingularityInitCallback {
  /// take variable of SingularityFlutter
  late SingularityFlutter _gamepay;
  late TextEditingController _controller;
  late TextEditingController _personalMessageController;
  late TextEditingController _transactionAmountController;

  String selectedValue = '800011'; // Store the selected value here

  @override
  void initState() {
    super.initState();

    _controller = TextEditingController();
    _personalMessageController = TextEditingController();
    _transactionAmountController = TextEditingController();
    _controller.text = "2";
    _personalMessageController.text = "Some message";
    _transactionAmountController.text = "0.001";

    /// initalize variable of SingularityFlutter
    _gamepay = SingularityFlutter(this);
  }

  @override
  void dispose() {
    _controller.dispose();
    _personalMessageController.dispose();
    _transactionAmountController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {

    final List<Map<String, dynamic>> dropdownItems = [
      { 'value': '800011', 'label': 'USDC Mumbai' },
      { 'value': '800010', 'label': 'MATIC Mumbai' },
      { 'value': '970', 'label': 'BNB BSC Testnet' },
      { 'value': '973', 'label': 'BUSD BSC Testnet' },
      { 'value': '560', 'label': 'BNB BSC Mainnet' },
      { 'value': '563', 'label': 'BUSD BSC Mainnet' },
      { 'value': '564', 'label': 'RPG BSC Mainnet' },
      { 'value': '50', 'label': 'ETH on Goerli' },
      { 'value': '51', 'label': 'USDC on Goerli' },
      { 'value': '4200', 'label': 'ETH on Optimism Testnet' },
      { 'value': '4201', 'label': 'USDC on Optimism Testnet' },
      { 'value': '99810', 'label': 'ETH on Caldera Goerli Appchain' },
      { 'value': '99811', 'label': 'USDC on Caldera Goerli Appchain' },
      { 'value': '2220', 'label': 'ETH on Conduit Goerli Appchain' },
      { 'value': '2221', 'label': 'USDC on Conduit Goerli Appchain' },
      { 'value': '93720', 'label': 'OAS on Oasys Testnet' },
      { 'value': '93721', 'label': 'USDC on Oasys Testnet' },
      { 'value': '295480', 'label': 'OAS on MCH Verse Mainnet' },
      { 'value': '295481', 'label': 'USDC on MCH Verse Mainnet' },
      { 'value': '201970', 'label': 'OAS on SAND Verse' },
      { 'value': '201971', 'label': 'USDC on SAND Verse' },
      { 'value': '408750', 'label': 'OAS on Home Verse Testnet' },
      { 'value': '408751', 'label': 'USDC on Home Verse Testnet' },
      { 'value': '431130', 'label': 'Avax on Avalanche Fuji testnet' },
      { 'value': '431131', 'label': 'USDC on Avalanche Fuji testnet' },
      { 'value': '431140', 'label': 'Avax on Avalanche Mainnet' },
      { 'value': '431141', 'label': 'USDC on Avalanche Mainnet' },
      { 'value': '431147', 'label': 'LODE on Avalanche Mainnet' },
      { 'value': '431148', 'label': 'AGX on Avalanche Mainnet' },
      { 'value': '431149', 'label': 'AUX on Avalanche Mainnet' },
      { 'value': '1370', 'label': 'MATIC Mainnet' },
      { 'value': '1371', 'label': 'USDC Mainnet' },
      { 'value': '974', 'label': 'RPG BSC Testnet' },
      { 'value': '539350', 'label': 'JEWEL on DFK Mainnet' },
      { 'value': '539351', 'label': 'USDC on DFK Mainnet' },
    ];

    return MaterialApp(
      home: Scaffold(
          appBar: AppBar(
            title: const Text('Neobrix'),
          ),
          body: Column(
            mainAxisAlignment: MainAxisAlignment.start,
            children: [
              const Row(
                mainAxisAlignment: MainAxisAlignment.start,
                children: [
                  Text("Enter api key ", style: TextStyle(fontSize: 16),),
                ],
              ),
              TextField(
                controller: _controller,
                decoration: const InputDecoration(
                  border: OutlineInputBorder(),
                ),
              ),
              ElevatedButton(onPressed: () async {
                // call SingularityFlutter openLoginScreen to start login flow or open profile page
                var apiKey =  _controller.text;

                try{
                  _gamepay.initializeSingularity(apiKey, this);
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
              }, child: Text("Inittialize Sigularity")),
              ElevatedButton(onPressed: () async {
                _gamepay.openDrawer();
              }, child: Text("Open Drawer")),
              ElevatedButton(onPressed: () async {
                _gamepay.closeDrawer();
              }, child: Text("Close Drawer")),
              ElevatedButton(onPressed: () async {
                _gamepay.logoutUser();
              }, child: Text("Logout User")),
              ElevatedButton(onPressed: () async {
                var userInfo = await _gamepay.getUserInfo();
                showAlertDialog(context, "onGetSingularityUserInfo", userInfo.toString());
              }, child: Text("Get User Info")),
              const Row(
                mainAxisAlignment: MainAxisAlignment.start,
                children: [
                  Text("Enter Message", style: TextStyle(fontSize: 16),),
                ],
              ),
              TextField(
                controller: _personalMessageController,
                decoration: const InputDecoration(
                  border: OutlineInputBorder(),
                ),
              ),
              ElevatedButton(onPressed: () async {
                // call SingularityFlutter openLoginScreen to start login flow or open profile page
                var message =  _personalMessageController.text;

                try{
                  var sign = await _gamepay.requestPersonalSignature(message);
                  showAlertDialog(context, "Personal Message Signed", sign.toString());
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
              }, child: Text("Request personal sign")),
              ElevatedButton(onPressed: () async {
                String domainString = '{"name":"GamePay","version":"1","chainId":97,"verifyingContract":"0xED975dB5192aB41713f0080E7306E08188e53E7f"}';
                String typesString = '{"bid":[{"name":"bidder","type":"address"},{"name":"collectableId","type":"uint256"},{"name":"amount","type":"uint256"},{"name":"nounce","type":"uint"}]}';
                String messageString = '{"bidder":"0xAa81f641d4b3546F05260F49DEc69Eb0314c47De","collectableId":1,"amount":100,"nounce":1}';
                String primaryType = 'bid';


                Map<String, dynamic> domain = json.decode(domainString);
                Map<String, dynamic> types = json.decode(typesString);
                Map<String, dynamic> message = json.decode(messageString);

                try{
                  var sign = await _gamepay.requestTypedSignature(domain, primaryType, types, message);
                  showAlertDialog(context, "Typed Message Signed", sign.toString());
                }
                catch(e){ }
              }, child: Text("Handle Typed Message Sign")),
              DropdownButton<String>(
                value: selectedValue, // The currently selected value
                onChanged: (String? newValue) {
                  setState(() {
                    selectedValue = newValue!; // Update the selected value
                  });
                },
                items: dropdownItems.map((item) {
                  return DropdownMenuItem<String>(
                    value: item['value'],
                    child: Text(item['label']), // Display the label
                  );
                }).toList(),
              ),
              const Row(
                mainAxisAlignment: MainAxisAlignment.start,
                children: [
                  Text("Enter Amount", style: TextStyle(fontSize: 16),),
                ],
              ),
              TextField(
                controller: _transactionAmountController,
                decoration: const InputDecoration(
                  border: OutlineInputBorder(),
                ),
              ),
              ElevatedButton(onPressed: () async {
                // call SingularityFlutter openLoginScreen to start login flow or open profile page
                var amount =  _transactionAmountController.text;

                try{
                  var uuid = Uuid();
                  var uuidv4 = uuid.v4();

                  var txnObject = {
                    'clientReferenceId': uuidv4,
                    'singularityTransactionType': 'RECEIVE',
                    'transactionLabel': 'Demo flutter label',
                    'transactionDescription': 'Description',
                    'transactionIconLink': 'https://singularity-icon-assets.s3.ap-south-1.amazonaws.com/currency/lode.svg',
                    'clientReceiveObject': {
                      'clientRequestedAssetQuantity': amount,
                      'clientRequestedAssetId': selectedValue
                    }
                  };

                  const secret = 'SSk49aq1/kQ1eKH7Sg+u4JsisvrycRcLopHdM6lNEMVe/p7lsSVoRiY0neFYNJkHoWVEK30bPAV2pNU2WwOJXQ==';

                  var requestString = jsonEncode(txnObject);

                  final hmacSha512 = Hmac(sha512, utf8.encode(secret)); // Create a HMAC-SHA512 object with the secret key
                  final signatureBytes = hmacSha512.convert(utf8.encode(requestString)).bytes; // Calculate the HMAC-SHA512 hash

                  final signature = HEX.encode(signatureBytes); // Convert the hash to a hexadecimal string


                  _gamepay.transactionFlow(requestString, signature);


                  // const signature = Hex.stringify(hmacSHA512(requestString, secret));
                  // window.SingularityEvent.transactionFlow(requestString, signature);
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
              }, child: Text("Start transaction")),
              ElevatedButton(onPressed: () async {
                try{
                  var userData = await _gamepay.getUserInfo();
                  var publicAddress = userData['metaData']['wallet']['accounts']['evmPublicAddress'][0]['publicAddress'];

                  var txnData = {
                    'from': publicAddress,
                    'gasPrice': '20000000000',
                    'gas': '21000',
                    'to': '0x17F547ae02a94a0339c4CFE034102423907c4592',
                    'value': '1000000000000000000',
                  };

                  var signature = await _gamepay.signAndSendTransaction(txnData);
                  showAlertDialog(context, 'Sign and send result', signature.toString());

                }
                catch(e){ }
              }, child: Text("Test Sign and send transaction")),
              ElevatedButton(onPressed: () async {
                try{
                  var userData = await _gamepay.getUserInfo();
                  var publicAddress = userData['metaData']['wallet']['accounts']['evmPublicAddress'][0]['publicAddress'];

                  var txnData = {
                    'from': publicAddress,
                    'gasPrice': '20000000000',
                    'gas': '21000',
                    'to': '0x17F547ae02a94a0339c4CFE034102423907c4592',
                    'value': '1000000000000000000',
                  };

                  var signature = await _gamepay.signTransaction(txnData);
                  showAlertDialog(context, 'Sign result', signature.toString());
                }
                catch(e){ }
              }, child: Text("Test send transaction"))

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
    showAlertDialog(context, "Alert", "Drawer Closed");
  }

  /// Sigularity delegate method after logout success
  @override
  onSingularityLogout() {
    showAlertDialog(context, "Alert", "User logged out");
  }

  @override
  onSingularityInitialized() {
    showAlertDialog(context, "Alert", "Singularity Initialized");
  }

  @override
  onSingularityError(String message) {

  }
}
