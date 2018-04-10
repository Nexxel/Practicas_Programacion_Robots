function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Acutal distance
 */
	this.urlHashMap["collAvoidLogic:9"] = "collAvoidLogic.c:35,42,96,109";
	/* <Root>/Constant2 */
	this.urlHashMap["collAvoidLogic:3"] = "collAvoidLogic.c:39&collAvoidLogic.h:49&collAvoidLogic_data.c:29";
	/* <Root>/Motor */
	this.urlHashMap["collAvoidLogic:10"] = "msg=&block=collAvoidLogic:10";
	/* <Root>/Motor1 */
	this.urlHashMap["collAvoidLogic:11"] = "msg=&block=collAvoidLogic:11";
	/* <Root>/Product */
	this.urlHashMap["collAvoidLogic:6"] = "collAvoidLogic.c:38";
	/* <Root>/Relational
Operator */
	this.urlHashMap["collAvoidLogic:5"] = "collAvoidLogic.c:41";
	/* <Root>/Threshold */
	this.urlHashMap["collAvoidLogic:2"] = "collAvoidLogic.c:40&collAvoidLogic.h:46&collAvoidLogic_data.c:26";
	/* <S1>/In1 */
	this.urlHashMap["collAvoidLogic:10:116"] = "msg=&block=collAvoidLogic:10:116";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["collAvoidLogic:10:114"] = "collAvoidLogic.c:47,62";
	/* <S1>/Motor */
	this.urlHashMap["collAvoidLogic:10:78"] = "collAvoidLogic.c:51,54,58,64,99,112";
	/* <S2>/In1 */
	this.urlHashMap["collAvoidLogic:11:116"] = "msg=&block=collAvoidLogic:11:116";
	/* <S2>/Data Type Conversion */
	this.urlHashMap["collAvoidLogic:11:114"] = "collAvoidLogic.c:67,82";
	/* <S2>/Motor */
	this.urlHashMap["collAvoidLogic:11:78"] = "collAvoidLogic.c:71,74,78,84,102,115";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "collAvoidLogic"};
	this.sidHashMap["collAvoidLogic"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "collAvoidLogic:10"};
	this.sidHashMap["collAvoidLogic:10"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "collAvoidLogic:11"};
	this.sidHashMap["collAvoidLogic:11"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/Acutal distance "] = {sid: "collAvoidLogic:9"};
	this.sidHashMap["collAvoidLogic:9"] = {rtwname: "<Root>/Acutal distance "};
	this.rtwnameHashMap["<Root>/Constant2"] = {sid: "collAvoidLogic:3"};
	this.sidHashMap["collAvoidLogic:3"] = {rtwname: "<Root>/Constant2"};
	this.rtwnameHashMap["<Root>/Motor"] = {sid: "collAvoidLogic:10"};
	this.sidHashMap["collAvoidLogic:10"] = {rtwname: "<Root>/Motor"};
	this.rtwnameHashMap["<Root>/Motor1"] = {sid: "collAvoidLogic:11"};
	this.sidHashMap["collAvoidLogic:11"] = {rtwname: "<Root>/Motor1"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "collAvoidLogic:6"};
	this.sidHashMap["collAvoidLogic:6"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Relational Operator"] = {sid: "collAvoidLogic:5"};
	this.sidHashMap["collAvoidLogic:5"] = {rtwname: "<Root>/Relational Operator"};
	this.rtwnameHashMap["<Root>/Threshold"] = {sid: "collAvoidLogic:2"};
	this.sidHashMap["collAvoidLogic:2"] = {rtwname: "<Root>/Threshold"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "collAvoidLogic:10:116"};
	this.sidHashMap["collAvoidLogic:10:116"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "collAvoidLogic:10:114"};
	this.sidHashMap["collAvoidLogic:10:114"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/Motor"] = {sid: "collAvoidLogic:10:78"};
	this.sidHashMap["collAvoidLogic:10:78"] = {rtwname: "<S1>/Motor"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "collAvoidLogic:11:116"};
	this.sidHashMap["collAvoidLogic:11:116"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion"] = {sid: "collAvoidLogic:11:114"};
	this.sidHashMap["collAvoidLogic:11:114"] = {rtwname: "<S2>/Data Type Conversion"};
	this.rtwnameHashMap["<S2>/Motor"] = {sid: "collAvoidLogic:11:78"};
	this.sidHashMap["collAvoidLogic:11:78"] = {rtwname: "<S2>/Motor"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
