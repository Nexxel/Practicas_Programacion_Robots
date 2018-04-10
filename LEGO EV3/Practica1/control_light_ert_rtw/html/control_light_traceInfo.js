function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Clock */
	this.urlHashMap["control_light:5"] = "msg=&block=control_light:5";
	/* <Root>/Color Sensor */
	this.urlHashMap["control_light:3"] = "control_light.c:35,40,45,135,151";
	/* <Root>/Display */
	this.urlHashMap["control_light:8"] = "msg=&block=control_light:8";
	/* <Root>/MATLAB Function */
	this.urlHashMap["control_light:4"] = "control_light.c:44,74";
	/* <Root>/Stop Simulation */
	this.urlHashMap["control_light:6"] = "msg=&block=control_light:6";
	/* <S1>/In1 */
	this.urlHashMap["control_light:8:113"] = "msg=&block=control_light:8:113";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["control_light:8:111"] = "control_light.c:39";
	/* <S1>/LCD */
	this.urlHashMap["control_light:8:93"] = "control_light.c:38,138,154&control_light.h:50&control_light_data.c:26";
	/* <S2>:1 */
	this.urlHashMap["control_light:4:1"] = "control_light.c:47";
	/* <S2>:1:2 */
	this.urlHashMap["control_light:4:1:2"] = "control_light.c:48";
	/* <S2>:1:3 */
	this.urlHashMap["control_light:4:1:3"] = "control_light.c:49";
	/* <S2>:1:4 */
	this.urlHashMap["control_light:4:1:4"] = "control_light.c:50";
	/* <S2>:1:5 */
	this.urlHashMap["control_light:4:1:5"] = "control_light.c:51";
	/* <S2>:1:6 */
	this.urlHashMap["control_light:4:1:6"] = "control_light.c:53";
	/* <S2>:1:7 */
	this.urlHashMap["control_light:4:1:7"] = "control_light.c:56";
	/* <S2>:1:8 */
	this.urlHashMap["control_light:4:1:8"] = "control_light.c:59";
	/* <S2>:1:9 */
	this.urlHashMap["control_light:4:1:9"] = "control_light.c:60";
	/* <S2>:1:10 */
	this.urlHashMap["control_light:4:1:10"] = "control_light.c:63";
	/* <S2>:1:11 */
	this.urlHashMap["control_light:4:1:11"] = "control_light.c:66";
	/* <S2>:1:12 */
	this.urlHashMap["control_light:4:1:12"] = "control_light.c:67";
	/* <S2>:1:13 */
	this.urlHashMap["control_light:4:1:13"] = "control_light.c:70";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["control_light:1:114"] = "control_light.c:77";
	/* <S3>/Motor */
	this.urlHashMap["control_light:1:78"] = "control_light.c:76,141,157";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["control_light:2:114"] = "control_light.c:84";
	/* <S4>/Motor */
	this.urlHashMap["control_light:2:78"] = "control_light.c:83,144,160";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "control_light"};
	this.sidHashMap["control_light"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "control_light:8"};
	this.sidHashMap["control_light:8"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "control_light:4"};
	this.sidHashMap["control_light:4"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "control_light:1"};
	this.sidHashMap["control_light:1"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "control_light:2"};
	this.sidHashMap["control_light:2"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<Root>/Clock"] = {sid: "control_light:5"};
	this.sidHashMap["control_light:5"] = {rtwname: "<Root>/Clock"};
	this.rtwnameHashMap["<Root>/Color Sensor"] = {sid: "control_light:3"};
	this.sidHashMap["control_light:3"] = {rtwname: "<Root>/Color Sensor"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "control_light:8"};
	this.sidHashMap["control_light:8"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "control_light:4"};
	this.sidHashMap["control_light:4"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/Motor"] = {sid: "control_light:1"};
	this.sidHashMap["control_light:1"] = {rtwname: "<Root>/Motor"};
	this.rtwnameHashMap["<Root>/Motor1"] = {sid: "control_light:2"};
	this.sidHashMap["control_light:2"] = {rtwname: "<Root>/Motor1"};
	this.rtwnameHashMap["<Root>/Stop Simulation"] = {sid: "control_light:6"};
	this.sidHashMap["control_light:6"] = {rtwname: "<Root>/Stop Simulation"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "control_light:8:113"};
	this.sidHashMap["control_light:8:113"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "control_light:8:111"};
	this.sidHashMap["control_light:8:111"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/LCD"] = {sid: "control_light:8:93"};
	this.sidHashMap["control_light:8:93"] = {rtwname: "<S1>/LCD"};
	this.rtwnameHashMap["<S2>:1"] = {sid: "control_light:4:1"};
	this.sidHashMap["control_light:4:1"] = {rtwname: "<S2>:1"};
	this.rtwnameHashMap["<S2>:1:2"] = {sid: "control_light:4:1:2"};
	this.sidHashMap["control_light:4:1:2"] = {rtwname: "<S2>:1:2"};
	this.rtwnameHashMap["<S2>:1:3"] = {sid: "control_light:4:1:3"};
	this.sidHashMap["control_light:4:1:3"] = {rtwname: "<S2>:1:3"};
	this.rtwnameHashMap["<S2>:1:4"] = {sid: "control_light:4:1:4"};
	this.sidHashMap["control_light:4:1:4"] = {rtwname: "<S2>:1:4"};
	this.rtwnameHashMap["<S2>:1:5"] = {sid: "control_light:4:1:5"};
	this.sidHashMap["control_light:4:1:5"] = {rtwname: "<S2>:1:5"};
	this.rtwnameHashMap["<S2>:1:6"] = {sid: "control_light:4:1:6"};
	this.sidHashMap["control_light:4:1:6"] = {rtwname: "<S2>:1:6"};
	this.rtwnameHashMap["<S2>:1:7"] = {sid: "control_light:4:1:7"};
	this.sidHashMap["control_light:4:1:7"] = {rtwname: "<S2>:1:7"};
	this.rtwnameHashMap["<S2>:1:8"] = {sid: "control_light:4:1:8"};
	this.sidHashMap["control_light:4:1:8"] = {rtwname: "<S2>:1:8"};
	this.rtwnameHashMap["<S2>:1:9"] = {sid: "control_light:4:1:9"};
	this.sidHashMap["control_light:4:1:9"] = {rtwname: "<S2>:1:9"};
	this.rtwnameHashMap["<S2>:1:10"] = {sid: "control_light:4:1:10"};
	this.sidHashMap["control_light:4:1:10"] = {rtwname: "<S2>:1:10"};
	this.rtwnameHashMap["<S2>:1:11"] = {sid: "control_light:4:1:11"};
	this.sidHashMap["control_light:4:1:11"] = {rtwname: "<S2>:1:11"};
	this.rtwnameHashMap["<S2>:1:12"] = {sid: "control_light:4:1:12"};
	this.sidHashMap["control_light:4:1:12"] = {rtwname: "<S2>:1:12"};
	this.rtwnameHashMap["<S2>:1:13"] = {sid: "control_light:4:1:13"};
	this.sidHashMap["control_light:4:1:13"] = {rtwname: "<S2>:1:13"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "control_light:1:116"};
	this.sidHashMap["control_light:1:116"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "control_light:1:114"};
	this.sidHashMap["control_light:1:114"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/Motor"] = {sid: "control_light:1:78"};
	this.sidHashMap["control_light:1:78"] = {rtwname: "<S3>/Motor"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "control_light:2:116"};
	this.sidHashMap["control_light:2:116"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "control_light:2:114"};
	this.sidHashMap["control_light:2:114"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Motor"] = {sid: "control_light:2:78"};
	this.sidHashMap["control_light:2:78"] = {rtwname: "<S4>/Motor"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
