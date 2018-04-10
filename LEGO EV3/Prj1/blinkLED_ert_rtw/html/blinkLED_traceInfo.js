function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["blinkLED:2"] = "blinkLED.c:34&blinkLED.h:48&blinkLED_data.c:26";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["blinkLED:1:111"] = "blinkLED.c:33,44";
	/* <S1>/Status Lights */
	this.urlHashMap["blinkLED:1:217"] = "blinkLED.c:43,62,69";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "blinkLED"};
	this.sidHashMap["blinkLED"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "blinkLED:1"};
	this.sidHashMap["blinkLED:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "blinkLED:2"};
	this.sidHashMap["blinkLED:2"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Status Light"] = {sid: "blinkLED:1"};
	this.sidHashMap["blinkLED:1"] = {rtwname: "<Root>/Status Light"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "blinkLED:1:113"};
	this.sidHashMap["blinkLED:1:113"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "blinkLED:1:111"};
	this.sidHashMap["blinkLED:1:111"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/Status Lights"] = {sid: "blinkLED:1:217"};
	this.sidHashMap["blinkLED:1:217"] = {rtwname: "<S1>/Status Lights"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
