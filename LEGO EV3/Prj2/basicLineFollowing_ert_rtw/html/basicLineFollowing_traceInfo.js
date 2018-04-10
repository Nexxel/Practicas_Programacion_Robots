function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Color Sensor */
	this.urlHashMap["basicLineFollowing:13"] = "basicLineFollowing.c:36,41,47,153,172";
	/* <Root>/Controller
Gain
 */
	this.urlHashMap["basicLineFollowing:5"] = "basicLineFollowing.c:66&basicLineFollowing.h:64&basicLineFollowing_data.c:29";
	/* <Root>/Display1 */
	this.urlHashMap["basicLineFollowing:15"] = "msg=&block=basicLineFollowing:15";
	/* <Root>/Light intensity  Threshold
 */
	this.urlHashMap["basicLineFollowing:1"] = "basicLineFollowing.c:46&basicLineFollowing.h:61&basicLineFollowing_data.c:26";
	/* <Root>/Nominal speed
 */
	this.urlHashMap["basicLineFollowing:6"] = "basicLineFollowing.c:70,106&basicLineFollowing.h:67&basicLineFollowing_data.c:32";
	/* <Root>/Saturation */
	this.urlHashMap["basicLineFollowing:9"] = "basicLineFollowing.c:74,83&basicLineFollowing.h:70,73&basicLineFollowing_data.c:35,38";
	/* <Root>/Saturation1 */
	this.urlHashMap["basicLineFollowing:10"] = "basicLineFollowing.c:110,119&basicLineFollowing.h:76,79&basicLineFollowing_data.c:41,44";
	/* <Root>/Sum */
	this.urlHashMap["basicLineFollowing:4"] = "basicLineFollowing.c:45";
	/* <Root>/Sum1 */
	this.urlHashMap["basicLineFollowing:7"] = "basicLineFollowing.c:69";
	/* <Root>/Sum2 */
	this.urlHashMap["basicLineFollowing:8"] = "basicLineFollowing.c:105";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["basicLineFollowing:14:111"] = "basicLineFollowing.c:40";
	/* <S1>/LCD */
	this.urlHashMap["basicLineFollowing:14:93"] = "basicLineFollowing.c:39,156,175&basicLineFollowing.h:48&basicLineFollowing_data.c:51";
	/* <S2>/In1 */
	this.urlHashMap["basicLineFollowing:15:113"] = "msg=&block=basicLineFollowing:15:113";
	/* <S2>/Data Type Conversion */
	this.urlHashMap["basicLineFollowing:15:111"] = "basicLineFollowing.c:52,61";
	/* <S2>/LCD */
	this.urlHashMap["basicLineFollowing:15:93"] = "basicLineFollowing.c:60,159,178&basicLineFollowing.h:53&basicLineFollowing_data.c:56";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["basicLineFollowing:11:114"] = "basicLineFollowing.c:85,100";
	/* <S3>/Motor */
	this.urlHashMap["basicLineFollowing:11:78"] = "basicLineFollowing.c:89,92,96,102,162,181";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["basicLineFollowing:12:114"] = "basicLineFollowing.c:121,136";
	/* <S4>/Motor */
	this.urlHashMap["basicLineFollowing:12:78"] = "basicLineFollowing.c:125,128,132,138,165,184";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "basicLineFollowing"};
	this.sidHashMap["basicLineFollowing"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "basicLineFollowing:14"};
	this.sidHashMap["basicLineFollowing:14"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "basicLineFollowing:15"};
	this.sidHashMap["basicLineFollowing:15"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "basicLineFollowing:11"};
	this.sidHashMap["basicLineFollowing:11"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "basicLineFollowing:12"};
	this.sidHashMap["basicLineFollowing:12"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<Root>/Color Sensor"] = {sid: "basicLineFollowing:13"};
	this.sidHashMap["basicLineFollowing:13"] = {rtwname: "<Root>/Color Sensor"};
	this.rtwnameHashMap["<Root>/Controller Gain "] = {sid: "basicLineFollowing:5"};
	this.sidHashMap["basicLineFollowing:5"] = {rtwname: "<Root>/Controller Gain "};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "basicLineFollowing:14"};
	this.sidHashMap["basicLineFollowing:14"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Display1"] = {sid: "basicLineFollowing:15"};
	this.sidHashMap["basicLineFollowing:15"] = {rtwname: "<Root>/Display1"};
	this.rtwnameHashMap["<Root>/Light intensity  Threshold "] = {sid: "basicLineFollowing:1"};
	this.sidHashMap["basicLineFollowing:1"] = {rtwname: "<Root>/Light intensity  Threshold "};
	this.rtwnameHashMap["<Root>/Motor"] = {sid: "basicLineFollowing:11"};
	this.sidHashMap["basicLineFollowing:11"] = {rtwname: "<Root>/Motor"};
	this.rtwnameHashMap["<Root>/Motor1"] = {sid: "basicLineFollowing:12"};
	this.sidHashMap["basicLineFollowing:12"] = {rtwname: "<Root>/Motor1"};
	this.rtwnameHashMap["<Root>/Nominal speed "] = {sid: "basicLineFollowing:6"};
	this.sidHashMap["basicLineFollowing:6"] = {rtwname: "<Root>/Nominal speed "};
	this.rtwnameHashMap["<Root>/Saturation"] = {sid: "basicLineFollowing:9"};
	this.sidHashMap["basicLineFollowing:9"] = {rtwname: "<Root>/Saturation"};
	this.rtwnameHashMap["<Root>/Saturation1"] = {sid: "basicLineFollowing:10"};
	this.sidHashMap["basicLineFollowing:10"] = {rtwname: "<Root>/Saturation1"};
	this.rtwnameHashMap["<Root>/Sum"] = {sid: "basicLineFollowing:4"};
	this.sidHashMap["basicLineFollowing:4"] = {rtwname: "<Root>/Sum"};
	this.rtwnameHashMap["<Root>/Sum1"] = {sid: "basicLineFollowing:7"};
	this.sidHashMap["basicLineFollowing:7"] = {rtwname: "<Root>/Sum1"};
	this.rtwnameHashMap["<Root>/Sum2"] = {sid: "basicLineFollowing:8"};
	this.sidHashMap["basicLineFollowing:8"] = {rtwname: "<Root>/Sum2"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "basicLineFollowing:14:113"};
	this.sidHashMap["basicLineFollowing:14:113"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "basicLineFollowing:14:111"};
	this.sidHashMap["basicLineFollowing:14:111"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/LCD"] = {sid: "basicLineFollowing:14:93"};
	this.sidHashMap["basicLineFollowing:14:93"] = {rtwname: "<S1>/LCD"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "basicLineFollowing:15:113"};
	this.sidHashMap["basicLineFollowing:15:113"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion"] = {sid: "basicLineFollowing:15:111"};
	this.sidHashMap["basicLineFollowing:15:111"] = {rtwname: "<S2>/Data Type Conversion"};
	this.rtwnameHashMap["<S2>/LCD"] = {sid: "basicLineFollowing:15:93"};
	this.sidHashMap["basicLineFollowing:15:93"] = {rtwname: "<S2>/LCD"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "basicLineFollowing:11:116"};
	this.sidHashMap["basicLineFollowing:11:116"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "basicLineFollowing:11:114"};
	this.sidHashMap["basicLineFollowing:11:114"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/Motor"] = {sid: "basicLineFollowing:11:78"};
	this.sidHashMap["basicLineFollowing:11:78"] = {rtwname: "<S3>/Motor"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "basicLineFollowing:12:116"};
	this.sidHashMap["basicLineFollowing:12:116"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "basicLineFollowing:12:114"};
	this.sidHashMap["basicLineFollowing:12:114"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Motor"] = {sid: "basicLineFollowing:12:78"};
	this.sidHashMap["basicLineFollowing:12:78"] = {rtwname: "<S4>/Motor"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
