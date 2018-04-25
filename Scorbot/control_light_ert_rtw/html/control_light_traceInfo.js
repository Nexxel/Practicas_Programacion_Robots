function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Clock */
	this.urlHashMap["control_light:5"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=control_light:5";
	/* <Root>/Color Sensor */
	this.urlHashMap["control_light:3"] = "control_light.c:35,40,45,153,169";
	/* <Root>/MATLAB Function */
	this.urlHashMap["control_light:4"] = "control_light.c:44,78";
	/* <Root>/Stop Simulation */
	this.urlHashMap["control_light:10"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=control_light:10";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["control_light:8:111"] = "control_light.c:39";
	/* <S1>/LCD */
	this.urlHashMap["control_light:8:93"] = "control_light.c:38,156,172&control_light.h:50&control_light_data.c:26";
	/* <S2>:1 */
	this.urlHashMap["control_light:4:1"] = "control_light.c:47";
	/* <S2>:1:4 */
	this.urlHashMap["control_light:4:1:4"] = "control_light.c:48";
	/* <S2>:1:10 */
	this.urlHashMap["control_light:4:1:10"] = "control_light.c:51";
	/* <S2>:1:11 */
	this.urlHashMap["control_light:4:1:11"] = "control_light.c:52";
	/* <S2>:1:12 */
	this.urlHashMap["control_light:4:1:12"] = "control_light.c:53";
	/* <S2>:1:13 */
	this.urlHashMap["control_light:4:1:13"] = "control_light.c:54";
	/* <S2>:1:14 */
	this.urlHashMap["control_light:4:1:14"] = "control_light.c:55";
	/* <S2>:1:15 */
	this.urlHashMap["control_light:4:1:15"] = "control_light.c:57";
	/* <S2>:1:16 */
	this.urlHashMap["control_light:4:1:16"] = "control_light.c:60";
	/* <S2>:1:17 */
	this.urlHashMap["control_light:4:1:17"] = "control_light.c:63";
	/* <S2>:1:18 */
	this.urlHashMap["control_light:4:1:18"] = "control_light.c:64";
	/* <S2>:1:19 */
	this.urlHashMap["control_light:4:1:19"] = "control_light.c:67";
	/* <S2>:1:20 */
	this.urlHashMap["control_light:4:1:20"] = "control_light.c:70";
	/* <S2>:1:21 */
	this.urlHashMap["control_light:4:1:21"] = "control_light.c:71";
	/* <S2>:1:22 */
	this.urlHashMap["control_light:4:1:22"] = "control_light.c:74";
	/* <S2>:1:24 */
	this.urlHashMap["control_light:4:1:24"] = "control_light.c:83";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["control_light:1:114"] = "control_light.c:81";
	/* <S3>/Motor */
	this.urlHashMap["control_light:1:78"] = "control_light.c:80,159,175";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["control_light:2:114"] = "control_light.c:102";
	/* <S4>/Motor */
	this.urlHashMap["control_light:2:78"] = "control_light.c:101,162,178";
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
	this.rtwnameHashMap["<Root>/Stop Simulation"] = {sid: "control_light:10"};
	this.sidHashMap["control_light:10"] = {rtwname: "<Root>/Stop Simulation"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "control_light:8:113"};
	this.sidHashMap["control_light:8:113"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "control_light:8:111"};
	this.sidHashMap["control_light:8:111"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/LCD"] = {sid: "control_light:8:93"};
	this.sidHashMap["control_light:8:93"] = {rtwname: "<S1>/LCD"};
	this.rtwnameHashMap["<S2>:1"] = {sid: "control_light:4:1"};
	this.sidHashMap["control_light:4:1"] = {rtwname: "<S2>:1"};
	this.rtwnameHashMap["<S2>:1:4"] = {sid: "control_light:4:1:4"};
	this.sidHashMap["control_light:4:1:4"] = {rtwname: "<S2>:1:4"};
	this.rtwnameHashMap["<S2>:1:10"] = {sid: "control_light:4:1:10"};
	this.sidHashMap["control_light:4:1:10"] = {rtwname: "<S2>:1:10"};
	this.rtwnameHashMap["<S2>:1:11"] = {sid: "control_light:4:1:11"};
	this.sidHashMap["control_light:4:1:11"] = {rtwname: "<S2>:1:11"};
	this.rtwnameHashMap["<S2>:1:12"] = {sid: "control_light:4:1:12"};
	this.sidHashMap["control_light:4:1:12"] = {rtwname: "<S2>:1:12"};
	this.rtwnameHashMap["<S2>:1:13"] = {sid: "control_light:4:1:13"};
	this.sidHashMap["control_light:4:1:13"] = {rtwname: "<S2>:1:13"};
	this.rtwnameHashMap["<S2>:1:14"] = {sid: "control_light:4:1:14"};
	this.sidHashMap["control_light:4:1:14"] = {rtwname: "<S2>:1:14"};
	this.rtwnameHashMap["<S2>:1:15"] = {sid: "control_light:4:1:15"};
	this.sidHashMap["control_light:4:1:15"] = {rtwname: "<S2>:1:15"};
	this.rtwnameHashMap["<S2>:1:16"] = {sid: "control_light:4:1:16"};
	this.sidHashMap["control_light:4:1:16"] = {rtwname: "<S2>:1:16"};
	this.rtwnameHashMap["<S2>:1:17"] = {sid: "control_light:4:1:17"};
	this.sidHashMap["control_light:4:1:17"] = {rtwname: "<S2>:1:17"};
	this.rtwnameHashMap["<S2>:1:18"] = {sid: "control_light:4:1:18"};
	this.sidHashMap["control_light:4:1:18"] = {rtwname: "<S2>:1:18"};
	this.rtwnameHashMap["<S2>:1:19"] = {sid: "control_light:4:1:19"};
	this.sidHashMap["control_light:4:1:19"] = {rtwname: "<S2>:1:19"};
	this.rtwnameHashMap["<S2>:1:20"] = {sid: "control_light:4:1:20"};
	this.sidHashMap["control_light:4:1:20"] = {rtwname: "<S2>:1:20"};
	this.rtwnameHashMap["<S2>:1:21"] = {sid: "control_light:4:1:21"};
	this.sidHashMap["control_light:4:1:21"] = {rtwname: "<S2>:1:21"};
	this.rtwnameHashMap["<S2>:1:22"] = {sid: "control_light:4:1:22"};
	this.sidHashMap["control_light:4:1:22"] = {rtwname: "<S2>:1:22"};
	this.rtwnameHashMap["<S2>:1:24"] = {sid: "control_light:4:1:24"};
	this.sidHashMap["control_light:4:1:24"] = {rtwname: "<S2>:1:24"};
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
