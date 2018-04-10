function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Clock */
	this.urlHashMap["control:6"] = "control.c:37";
	/* <Root>/Constant */
	this.urlHashMap["control:9"] = "control.c:41&control.h:74&control_data.c:29";
	/* <Root>/Display Rotation
 */
	this.urlHashMap["control:12"] = "control.c:73,81,182,186,201,205";
	/* <Root>/Encoder1 */
	this.urlHashMap["control:2"] = "control.c:68,77,179,198";
	/* <Root>/If */
	this.urlHashMap["control:16"] = "control.c:71,84";
	/* <Root>/MATLAB Function */
	this.urlHashMap["control:3"] = "control.c:40,66";
	/* <Root>/Stop Simulation */
	this.urlHashMap["control:8"] = "control.c:126,134";
	/* <S1>/Compare */
	this.urlHashMap["control:7:2"] = "control.c:128";
	/* <S1>/Constant */
	this.urlHashMap["control:7:3"] = "control.c:127&control.h:71&control_data.c:26";
	/* <S2>/Action Port */
	this.urlHashMap["control:14"] = "control.c:74";
	/* <S3>:1 */
	this.urlHashMap["control:3:1"] = "control.c:43";
	/* <S3>:1:3 */
	this.urlHashMap["control:3:1:3"] = "control.c:44";
	/* <S3>:1:4 */
	this.urlHashMap["control:3:1:4"] = "control.c:46";
	/* <S3>:1:5 */
	this.urlHashMap["control:3:1:5"] = "control.c:49";
	/* <S3>:1:6 */
	this.urlHashMap["control:3:1:6"] = "control.c:52";
	/* <S3>:1:7 */
	this.urlHashMap["control:3:1:7"] = "control.c:55";
	/* <S3>:1:8 */
	this.urlHashMap["control:3:1:8"] = "control.c:56";
	/* <S3>:1:9 */
	this.urlHashMap["control:3:1:9"] = "control.c:59";
	/* <S3>:1:10 */
	this.urlHashMap["control:3:1:10"] = "control.c:62";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["control:4:114"] = "control.c:86,101";
	/* <S4>/Motor */
	this.urlHashMap["control:4:78"] = "control.c:90,93,97,103,188,207";
	/* <S5>/Data Type Conversion */
	this.urlHashMap["control:5:114"] = "control.c:106,121";
	/* <S5>/Motor */
	this.urlHashMap["control:5:78"] = "control.c:110,113,117,123,191,210";
	/* <S6>/Data Type Conversion */
	this.urlHashMap["control:18:111"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=control:18:111";
	/* <S6>/LCD */
	this.urlHashMap["control:18:93"] = "control.c:76,183,202&control.h:63&control_data.c:36";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "control"};
	this.sidHashMap["control"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "control:7"};
	this.sidHashMap["control:7"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "control:12"};
	this.sidHashMap["control:12"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "control:3"};
	this.sidHashMap["control:3"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "control:4"};
	this.sidHashMap["control:4"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "control:5"};
	this.sidHashMap["control:5"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<S6>"] = {sid: "control:18"};
	this.sidHashMap["control:18"] = {rtwname: "<S6>"};
	this.rtwnameHashMap["<Root>/Clock"] = {sid: "control:6"};
	this.sidHashMap["control:6"] = {rtwname: "<Root>/Clock"};
	this.rtwnameHashMap["<Root>/Compare To Constant"] = {sid: "control:7"};
	this.sidHashMap["control:7"] = {rtwname: "<Root>/Compare To Constant"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "control:9"};
	this.sidHashMap["control:9"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Display Rotation "] = {sid: "control:12"};
	this.sidHashMap["control:12"] = {rtwname: "<Root>/Display Rotation "};
	this.rtwnameHashMap["<Root>/Encoder1"] = {sid: "control:2"};
	this.sidHashMap["control:2"] = {rtwname: "<Root>/Encoder1"};
	this.rtwnameHashMap["<Root>/If"] = {sid: "control:16"};
	this.sidHashMap["control:16"] = {rtwname: "<Root>/If"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "control:3"};
	this.sidHashMap["control:3"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/Motor"] = {sid: "control:4"};
	this.sidHashMap["control:4"] = {rtwname: "<Root>/Motor"};
	this.rtwnameHashMap["<Root>/Motor1"] = {sid: "control:5"};
	this.sidHashMap["control:5"] = {rtwname: "<Root>/Motor1"};
	this.rtwnameHashMap["<Root>/Stop Simulation"] = {sid: "control:8"};
	this.sidHashMap["control:8"] = {rtwname: "<Root>/Stop Simulation"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "control:7:1"};
	this.sidHashMap["control:7:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Compare"] = {sid: "control:7:2"};
	this.sidHashMap["control:7:2"] = {rtwname: "<S1>/Compare"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "control:7:3"};
	this.sidHashMap["control:7:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "control:7:4"};
	this.sidHashMap["control:7:4"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "control:23"};
	this.sidHashMap["control:23"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Action Port"] = {sid: "control:14"};
	this.sidHashMap["control:14"] = {rtwname: "<S2>/Action Port"};
	this.rtwnameHashMap["<S2>/Display"] = {sid: "control:18"};
	this.sidHashMap["control:18"] = {rtwname: "<S2>/Display"};
	this.rtwnameHashMap["<S3>:1"] = {sid: "control:3:1"};
	this.sidHashMap["control:3:1"] = {rtwname: "<S3>:1"};
	this.rtwnameHashMap["<S3>:1:3"] = {sid: "control:3:1:3"};
	this.sidHashMap["control:3:1:3"] = {rtwname: "<S3>:1:3"};
	this.rtwnameHashMap["<S3>:1:4"] = {sid: "control:3:1:4"};
	this.sidHashMap["control:3:1:4"] = {rtwname: "<S3>:1:4"};
	this.rtwnameHashMap["<S3>:1:5"] = {sid: "control:3:1:5"};
	this.sidHashMap["control:3:1:5"] = {rtwname: "<S3>:1:5"};
	this.rtwnameHashMap["<S3>:1:6"] = {sid: "control:3:1:6"};
	this.sidHashMap["control:3:1:6"] = {rtwname: "<S3>:1:6"};
	this.rtwnameHashMap["<S3>:1:7"] = {sid: "control:3:1:7"};
	this.sidHashMap["control:3:1:7"] = {rtwname: "<S3>:1:7"};
	this.rtwnameHashMap["<S3>:1:8"] = {sid: "control:3:1:8"};
	this.sidHashMap["control:3:1:8"] = {rtwname: "<S3>:1:8"};
	this.rtwnameHashMap["<S3>:1:9"] = {sid: "control:3:1:9"};
	this.sidHashMap["control:3:1:9"] = {rtwname: "<S3>:1:9"};
	this.rtwnameHashMap["<S3>:1:10"] = {sid: "control:3:1:10"};
	this.sidHashMap["control:3:1:10"] = {rtwname: "<S3>:1:10"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "control:4:116"};
	this.sidHashMap["control:4:116"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "control:4:114"};
	this.sidHashMap["control:4:114"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Motor"] = {sid: "control:4:78"};
	this.sidHashMap["control:4:78"] = {rtwname: "<S4>/Motor"};
	this.rtwnameHashMap["<S5>/In1"] = {sid: "control:5:116"};
	this.sidHashMap["control:5:116"] = {rtwname: "<S5>/In1"};
	this.rtwnameHashMap["<S5>/Data Type Conversion"] = {sid: "control:5:114"};
	this.sidHashMap["control:5:114"] = {rtwname: "<S5>/Data Type Conversion"};
	this.rtwnameHashMap["<S5>/Motor"] = {sid: "control:5:78"};
	this.sidHashMap["control:5:78"] = {rtwname: "<S5>/Motor"};
	this.rtwnameHashMap["<S6>/In1"] = {sid: "control:18:113"};
	this.sidHashMap["control:18:113"] = {rtwname: "<S6>/In1"};
	this.rtwnameHashMap["<S6>/Data Type Conversion"] = {sid: "control:18:111"};
	this.sidHashMap["control:18:111"] = {rtwname: "<S6>/Data Type Conversion"};
	this.rtwnameHashMap["<S6>/LCD"] = {sid: "control:18:93"};
	this.sidHashMap["control:18:93"] = {rtwname: "<S6>/LCD"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
