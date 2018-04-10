function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Color Sensor */
	this.urlHashMap["followAndAvoidBlocksDeploy:33"] = "followAndAvoidBlocksDeploy.c:38,43,50,166,185";
	/* <Root>/Controller
Gain
 */
	this.urlHashMap["followAndAvoidBlocksDeploy:2"] = "followAndAvoidBlocksDeploy.c:48&followAndAvoidBlocksDeploy.h:52&followAndAvoidBlocksDeploy_data.c:32";
	/* <Root>/Idle speed

 */
	this.urlHashMap["followAndAvoidBlocksDeploy:19"] = "followAndAvoidBlocksDeploy.c:68,113&followAndAvoidBlocksDeploy.h:58&followAndAvoidBlocksDeploy_data.c:38";
	/* <Root>/Light intensity  Threshold
 */
	this.urlHashMap["followAndAvoidBlocksDeploy:5"] = "followAndAvoidBlocksDeploy.c:49&followAndAvoidBlocksDeploy.h:49&followAndAvoidBlocksDeploy_data.c:29";
	/* <Root>/Nominal speed
 */
	this.urlHashMap["followAndAvoidBlocksDeploy:8"] = "followAndAvoidBlocksDeploy.c:69,114&followAndAvoidBlocksDeploy.h:55&followAndAvoidBlocksDeploy_data.c:35";
	/* <Root>/Saturation */
	this.urlHashMap["followAndAvoidBlocksDeploy:28"] = "followAndAvoidBlocksDeploy.c:81,90&followAndAvoidBlocksDeploy.h:61,64&followAndAvoidBlocksDeploy_data.c:41,44";
	/* <Root>/Saturation1 */
	this.urlHashMap["followAndAvoidBlocksDeploy:29"] = "followAndAvoidBlocksDeploy.c:126,135&followAndAvoidBlocksDeploy.h:67,70&followAndAvoidBlocksDeploy_data.c:47,50";
	/* <Root>/Sum */
	this.urlHashMap["followAndAvoidBlocksDeploy:11"] = "followAndAvoidBlocksDeploy.c:51";
	/* <Root>/Sum1 */
	this.urlHashMap["followAndAvoidBlocksDeploy:12"] = "followAndAvoidBlocksDeploy.c:70";
	/* <Root>/Sum2 */
	this.urlHashMap["followAndAvoidBlocksDeploy:13"] = "followAndAvoidBlocksDeploy.c:115";
	/* <Root>/Switch */
	this.urlHashMap["followAndAvoidBlocksDeploy:24"] = "followAndAvoidBlocksDeploy.c:67,79";
	/* <Root>/Switch1 */
	this.urlHashMap["followAndAvoidBlocksDeploy:25"] = "followAndAvoidBlocksDeploy.c:112,124";
	/* <Root>/Ultrasonic Sensor */
	this.urlHashMap["followAndAvoidBlocksDeploy:32"] = "followAndAvoidBlocksDeploy.c:57,62,172,191";
	/* <S1>/Compare */
	this.urlHashMap["followAndAvoidBlocksDeploy:22:2"] = "followAndAvoidBlocksDeploy.c:60";
	/* <S1>/Constant */
	this.urlHashMap["followAndAvoidBlocksDeploy:22:3"] = "followAndAvoidBlocksDeploy.c:61&followAndAvoidBlocksDeploy.h:46&followAndAvoidBlocksDeploy_data.c:26";
	/* <S2>/Data Type Conversion */
	this.urlHashMap["followAndAvoidBlocksDeploy:34:111"] = "followAndAvoidBlocksDeploy.c:42";
	/* <S2>/LCD */
	this.urlHashMap["followAndAvoidBlocksDeploy:34:93"] = "followAndAvoidBlocksDeploy.c:41,169,188";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["followAndAvoidBlocksDeploy:35:114"] = "followAndAvoidBlocksDeploy.c:92,107";
	/* <S3>/Motor */
	this.urlHashMap["followAndAvoidBlocksDeploy:35:78"] = "followAndAvoidBlocksDeploy.c:96,99,103,109,175,194";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["followAndAvoidBlocksDeploy:36:114"] = "followAndAvoidBlocksDeploy.c:137,152";
	/* <S4>/Motor */
	this.urlHashMap["followAndAvoidBlocksDeploy:36:78"] = "followAndAvoidBlocksDeploy.c:141,144,148,154,178,197";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "followAndAvoidBlocksDeploy"};
	this.sidHashMap["followAndAvoidBlocksDeploy"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "followAndAvoidBlocksDeploy:22"};
	this.sidHashMap["followAndAvoidBlocksDeploy:22"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "followAndAvoidBlocksDeploy:34"};
	this.sidHashMap["followAndAvoidBlocksDeploy:34"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "followAndAvoidBlocksDeploy:35"};
	this.sidHashMap["followAndAvoidBlocksDeploy:35"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "followAndAvoidBlocksDeploy:36"};
	this.sidHashMap["followAndAvoidBlocksDeploy:36"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<Root>/Color Sensor"] = {sid: "followAndAvoidBlocksDeploy:33"};
	this.sidHashMap["followAndAvoidBlocksDeploy:33"] = {rtwname: "<Root>/Color Sensor"};
	this.rtwnameHashMap["<Root>/Compare To Constant"] = {sid: "followAndAvoidBlocksDeploy:22"};
	this.sidHashMap["followAndAvoidBlocksDeploy:22"] = {rtwname: "<Root>/Compare To Constant"};
	this.rtwnameHashMap["<Root>/Controller Gain "] = {sid: "followAndAvoidBlocksDeploy:2"};
	this.sidHashMap["followAndAvoidBlocksDeploy:2"] = {rtwname: "<Root>/Controller Gain "};
	this.rtwnameHashMap["<Root>/Display1"] = {sid: "followAndAvoidBlocksDeploy:34"};
	this.sidHashMap["followAndAvoidBlocksDeploy:34"] = {rtwname: "<Root>/Display1"};
	this.rtwnameHashMap["<Root>/Idle speed  "] = {sid: "followAndAvoidBlocksDeploy:19"};
	this.sidHashMap["followAndAvoidBlocksDeploy:19"] = {rtwname: "<Root>/Idle speed  "};
	this.rtwnameHashMap["<Root>/Light intensity  Threshold "] = {sid: "followAndAvoidBlocksDeploy:5"};
	this.sidHashMap["followAndAvoidBlocksDeploy:5"] = {rtwname: "<Root>/Light intensity  Threshold "};
	this.rtwnameHashMap["<Root>/Motor"] = {sid: "followAndAvoidBlocksDeploy:35"};
	this.sidHashMap["followAndAvoidBlocksDeploy:35"] = {rtwname: "<Root>/Motor"};
	this.rtwnameHashMap["<Root>/Motor1"] = {sid: "followAndAvoidBlocksDeploy:36"};
	this.sidHashMap["followAndAvoidBlocksDeploy:36"] = {rtwname: "<Root>/Motor1"};
	this.rtwnameHashMap["<Root>/Nominal speed "] = {sid: "followAndAvoidBlocksDeploy:8"};
	this.sidHashMap["followAndAvoidBlocksDeploy:8"] = {rtwname: "<Root>/Nominal speed "};
	this.rtwnameHashMap["<Root>/Saturation"] = {sid: "followAndAvoidBlocksDeploy:28"};
	this.sidHashMap["followAndAvoidBlocksDeploy:28"] = {rtwname: "<Root>/Saturation"};
	this.rtwnameHashMap["<Root>/Saturation1"] = {sid: "followAndAvoidBlocksDeploy:29"};
	this.sidHashMap["followAndAvoidBlocksDeploy:29"] = {rtwname: "<Root>/Saturation1"};
	this.rtwnameHashMap["<Root>/Sum"] = {sid: "followAndAvoidBlocksDeploy:11"};
	this.sidHashMap["followAndAvoidBlocksDeploy:11"] = {rtwname: "<Root>/Sum"};
	this.rtwnameHashMap["<Root>/Sum1"] = {sid: "followAndAvoidBlocksDeploy:12"};
	this.sidHashMap["followAndAvoidBlocksDeploy:12"] = {rtwname: "<Root>/Sum1"};
	this.rtwnameHashMap["<Root>/Sum2"] = {sid: "followAndAvoidBlocksDeploy:13"};
	this.sidHashMap["followAndAvoidBlocksDeploy:13"] = {rtwname: "<Root>/Sum2"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "followAndAvoidBlocksDeploy:24"};
	this.sidHashMap["followAndAvoidBlocksDeploy:24"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<Root>/Switch1"] = {sid: "followAndAvoidBlocksDeploy:25"};
	this.sidHashMap["followAndAvoidBlocksDeploy:25"] = {rtwname: "<Root>/Switch1"};
	this.rtwnameHashMap["<Root>/Ultrasonic Sensor"] = {sid: "followAndAvoidBlocksDeploy:32"};
	this.sidHashMap["followAndAvoidBlocksDeploy:32"] = {rtwname: "<Root>/Ultrasonic Sensor"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "followAndAvoidBlocksDeploy:22:1"};
	this.sidHashMap["followAndAvoidBlocksDeploy:22:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Compare"] = {sid: "followAndAvoidBlocksDeploy:22:2"};
	this.sidHashMap["followAndAvoidBlocksDeploy:22:2"] = {rtwname: "<S1>/Compare"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "followAndAvoidBlocksDeploy:22:3"};
	this.sidHashMap["followAndAvoidBlocksDeploy:22:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "followAndAvoidBlocksDeploy:22:4"};
	this.sidHashMap["followAndAvoidBlocksDeploy:22:4"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "followAndAvoidBlocksDeploy:34:113"};
	this.sidHashMap["followAndAvoidBlocksDeploy:34:113"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion"] = {sid: "followAndAvoidBlocksDeploy:34:111"};
	this.sidHashMap["followAndAvoidBlocksDeploy:34:111"] = {rtwname: "<S2>/Data Type Conversion"};
	this.rtwnameHashMap["<S2>/LCD"] = {sid: "followAndAvoidBlocksDeploy:34:93"};
	this.sidHashMap["followAndAvoidBlocksDeploy:34:93"] = {rtwname: "<S2>/LCD"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "followAndAvoidBlocksDeploy:35:116"};
	this.sidHashMap["followAndAvoidBlocksDeploy:35:116"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "followAndAvoidBlocksDeploy:35:114"};
	this.sidHashMap["followAndAvoidBlocksDeploy:35:114"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/Motor"] = {sid: "followAndAvoidBlocksDeploy:35:78"};
	this.sidHashMap["followAndAvoidBlocksDeploy:35:78"] = {rtwname: "<S3>/Motor"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "followAndAvoidBlocksDeploy:36:116"};
	this.sidHashMap["followAndAvoidBlocksDeploy:36:116"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "followAndAvoidBlocksDeploy:36:114"};
	this.sidHashMap["followAndAvoidBlocksDeploy:36:114"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Motor"] = {sid: "followAndAvoidBlocksDeploy:36:78"};
	this.sidHashMap["followAndAvoidBlocksDeploy:36:78"] = {rtwname: "<S4>/Motor"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
