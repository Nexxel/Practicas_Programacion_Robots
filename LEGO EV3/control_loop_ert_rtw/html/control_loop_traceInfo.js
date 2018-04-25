function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Clock */
	this.urlHashMap["control_loop:6"] = "control_loop.c:40";
	/* <Root>/Display Rotation
 */
	this.urlHashMap["control_loop:12"] = "control_loop.c:92,100,176,180,195,199";
	/* <Root>/Encoder1 */
	this.urlHashMap["control_loop:2"] = "control_loop.c:37,44,96,173,192";
	/* <Root>/If */
	this.urlHashMap["control_loop:16"] = "control_loop.c:90,103";
	/* <Root>/MATLAB Function */
	this.urlHashMap["control_loop:3"] = "control_loop.c:43,88";
	/* <Root>/Stop Simulation */
	this.urlHashMap["control_loop:8"] = "control_loop.c:117,125";
	/* <S1>/Compare */
	this.urlHashMap["control_loop:7:2"] = "control_loop.c:119";
	/* <S1>/Constant */
	this.urlHashMap["control_loop:7:3"] = "control_loop.c:118&control_loop.h:70&control_loop_data.c:26";
	/* <S2>/Action Port */
	this.urlHashMap["control_loop:14"] = "control_loop.c:93";
	/* <S3>:1 */
	this.urlHashMap["control_loop:3:1"] = "control_loop.c:46";
	/* <S3>:1:3 */
	this.urlHashMap["control_loop:3:1:3"] = "control_loop.c:47";
	/* <S3>:1:4 */
	this.urlHashMap["control_loop:3:1:4"] = "control_loop.c:49";
	/* <S3>:1:5 */
	this.urlHashMap["control_loop:3:1:5"] = "control_loop.c:56";
	/* <S3>:1:6 */
	this.urlHashMap["control_loop:3:1:6"] = "control_loop.c:58";
	/* <S3>:1:7 */
	this.urlHashMap["control_loop:3:1:7"] = "control_loop.c:63";
	/* <S3>:1:8 */
	this.urlHashMap["control_loop:3:1:8"] = "control_loop.c:64";
	/* <S3>:1:10 */
	this.urlHashMap["control_loop:3:1:10"] = "control_loop.c:70";
	/* <S3>:1:11 */
	this.urlHashMap["control_loop:3:1:11"] = "control_loop.c:73";
	/* <S3>:1:12 */
	this.urlHashMap["control_loop:3:1:12"] = "control_loop.c:74";
	/* <S3>:1:13 */
	this.urlHashMap["control_loop:3:1:13"] = "control_loop.c:77";
	/* <S3>:1:14 */
	this.urlHashMap["control_loop:3:1:14"] = "control_loop.c:78";
	/* <S3>:1:15 */
	this.urlHashMap["control_loop:3:1:15"] = "control_loop.c:81";
	/* <S3>:1:16 */
	this.urlHashMap["control_loop:3:1:16"] = "control_loop.c:84";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["control_loop:4:114"] = "control_loop.c:106";
	/* <S4>/Motor */
	this.urlHashMap["control_loop:4:78"] = "control_loop.c:105,182,201";
	/* <S5>/Data Type Conversion */
	this.urlHashMap["control_loop:5:114"] = "control_loop.c:112";
	/* <S5>/Motor */
	this.urlHashMap["control_loop:5:78"] = "control_loop.c:111,185,204";
	/* <S6>/Data Type Conversion */
	this.urlHashMap["control_loop:18:111"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=control_loop:18:111";
	/* <S6>/LCD */
	this.urlHashMap["control_loop:18:93"] = "control_loop.c:95,177,196&control_loop.h:62&control_loop_data.c:33";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "control_loop"};
	this.sidHashMap["control_loop"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "control_loop:7"};
	this.sidHashMap["control_loop:7"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "control_loop:12"};
	this.sidHashMap["control_loop:12"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "control_loop:3"};
	this.sidHashMap["control_loop:3"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "control_loop:4"};
	this.sidHashMap["control_loop:4"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "control_loop:5"};
	this.sidHashMap["control_loop:5"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<S6>"] = {sid: "control_loop:18"};
	this.sidHashMap["control_loop:18"] = {rtwname: "<S6>"};
	this.rtwnameHashMap["<Root>/Clock"] = {sid: "control_loop:6"};
	this.sidHashMap["control_loop:6"] = {rtwname: "<Root>/Clock"};
	this.rtwnameHashMap["<Root>/Compare To Constant"] = {sid: "control_loop:7"};
	this.sidHashMap["control_loop:7"] = {rtwname: "<Root>/Compare To Constant"};
	this.rtwnameHashMap["<Root>/Display Rotation "] = {sid: "control_loop:12"};
	this.sidHashMap["control_loop:12"] = {rtwname: "<Root>/Display Rotation "};
	this.rtwnameHashMap["<Root>/Encoder1"] = {sid: "control_loop:2"};
	this.sidHashMap["control_loop:2"] = {rtwname: "<Root>/Encoder1"};
	this.rtwnameHashMap["<Root>/If"] = {sid: "control_loop:16"};
	this.sidHashMap["control_loop:16"] = {rtwname: "<Root>/If"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "control_loop:3"};
	this.sidHashMap["control_loop:3"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/Motor"] = {sid: "control_loop:4"};
	this.sidHashMap["control_loop:4"] = {rtwname: "<Root>/Motor"};
	this.rtwnameHashMap["<Root>/Motor1"] = {sid: "control_loop:5"};
	this.sidHashMap["control_loop:5"] = {rtwname: "<Root>/Motor1"};
	this.rtwnameHashMap["<Root>/Stop Simulation"] = {sid: "control_loop:8"};
	this.sidHashMap["control_loop:8"] = {rtwname: "<Root>/Stop Simulation"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "control_loop:7:1"};
	this.sidHashMap["control_loop:7:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Compare"] = {sid: "control_loop:7:2"};
	this.sidHashMap["control_loop:7:2"] = {rtwname: "<S1>/Compare"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "control_loop:7:3"};
	this.sidHashMap["control_loop:7:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "control_loop:7:4"};
	this.sidHashMap["control_loop:7:4"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "control_loop:23"};
	this.sidHashMap["control_loop:23"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Action Port"] = {sid: "control_loop:14"};
	this.sidHashMap["control_loop:14"] = {rtwname: "<S2>/Action Port"};
	this.rtwnameHashMap["<S2>/Display"] = {sid: "control_loop:18"};
	this.sidHashMap["control_loop:18"] = {rtwname: "<S2>/Display"};
	this.rtwnameHashMap["<S3>:1"] = {sid: "control_loop:3:1"};
	this.sidHashMap["control_loop:3:1"] = {rtwname: "<S3>:1"};
	this.rtwnameHashMap["<S3>:1:3"] = {sid: "control_loop:3:1:3"};
	this.sidHashMap["control_loop:3:1:3"] = {rtwname: "<S3>:1:3"};
	this.rtwnameHashMap["<S3>:1:4"] = {sid: "control_loop:3:1:4"};
	this.sidHashMap["control_loop:3:1:4"] = {rtwname: "<S3>:1:4"};
	this.rtwnameHashMap["<S3>:1:5"] = {sid: "control_loop:3:1:5"};
	this.sidHashMap["control_loop:3:1:5"] = {rtwname: "<S3>:1:5"};
	this.rtwnameHashMap["<S3>:1:6"] = {sid: "control_loop:3:1:6"};
	this.sidHashMap["control_loop:3:1:6"] = {rtwname: "<S3>:1:6"};
	this.rtwnameHashMap["<S3>:1:7"] = {sid: "control_loop:3:1:7"};
	this.sidHashMap["control_loop:3:1:7"] = {rtwname: "<S3>:1:7"};
	this.rtwnameHashMap["<S3>:1:8"] = {sid: "control_loop:3:1:8"};
	this.sidHashMap["control_loop:3:1:8"] = {rtwname: "<S3>:1:8"};
	this.rtwnameHashMap["<S3>:1:10"] = {sid: "control_loop:3:1:10"};
	this.sidHashMap["control_loop:3:1:10"] = {rtwname: "<S3>:1:10"};
	this.rtwnameHashMap["<S3>:1:11"] = {sid: "control_loop:3:1:11"};
	this.sidHashMap["control_loop:3:1:11"] = {rtwname: "<S3>:1:11"};
	this.rtwnameHashMap["<S3>:1:12"] = {sid: "control_loop:3:1:12"};
	this.sidHashMap["control_loop:3:1:12"] = {rtwname: "<S3>:1:12"};
	this.rtwnameHashMap["<S3>:1:13"] = {sid: "control_loop:3:1:13"};
	this.sidHashMap["control_loop:3:1:13"] = {rtwname: "<S3>:1:13"};
	this.rtwnameHashMap["<S3>:1:14"] = {sid: "control_loop:3:1:14"};
	this.sidHashMap["control_loop:3:1:14"] = {rtwname: "<S3>:1:14"};
	this.rtwnameHashMap["<S3>:1:15"] = {sid: "control_loop:3:1:15"};
	this.sidHashMap["control_loop:3:1:15"] = {rtwname: "<S3>:1:15"};
	this.rtwnameHashMap["<S3>:1:16"] = {sid: "control_loop:3:1:16"};
	this.sidHashMap["control_loop:3:1:16"] = {rtwname: "<S3>:1:16"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "control_loop:4:116"};
	this.sidHashMap["control_loop:4:116"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "control_loop:4:114"};
	this.sidHashMap["control_loop:4:114"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Motor"] = {sid: "control_loop:4:78"};
	this.sidHashMap["control_loop:4:78"] = {rtwname: "<S4>/Motor"};
	this.rtwnameHashMap["<S5>/In1"] = {sid: "control_loop:5:116"};
	this.sidHashMap["control_loop:5:116"] = {rtwname: "<S5>/In1"};
	this.rtwnameHashMap["<S5>/Data Type Conversion"] = {sid: "control_loop:5:114"};
	this.sidHashMap["control_loop:5:114"] = {rtwname: "<S5>/Data Type Conversion"};
	this.rtwnameHashMap["<S5>/Motor"] = {sid: "control_loop:5:78"};
	this.sidHashMap["control_loop:5:78"] = {rtwname: "<S5>/Motor"};
	this.rtwnameHashMap["<S6>/In1"] = {sid: "control_loop:18:113"};
	this.sidHashMap["control_loop:18:113"] = {rtwname: "<S6>/In1"};
	this.rtwnameHashMap["<S6>/Data Type Conversion"] = {sid: "control_loop:18:111"};
	this.sidHashMap["control_loop:18:111"] = {rtwname: "<S6>/Data Type Conversion"};
	this.rtwnameHashMap["<S6>/LCD"] = {sid: "control_loop:18:93"};
	this.sidHashMap["control_loop:18:93"] = {rtwname: "<S6>/LCD"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
