function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Color Sensor */
	this.urlHashMap["displaySensorReading:3"] = "displaySensorReading.c:33,38,51,61";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["displaySensorReading:2:111"] = "displaySensorReading.c:37";
	/* <S1>/LCD */
	this.urlHashMap["displaySensorReading:2:93"] = "displaySensorReading.c:36,54,64&displaySensorReading.h:45&displaySensorReading_data.c:26";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "displaySensorReading"};
	this.sidHashMap["displaySensorReading"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "displaySensorReading:2"};
	this.sidHashMap["displaySensorReading:2"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Color Sensor"] = {sid: "displaySensorReading:3"};
	this.sidHashMap["displaySensorReading:3"] = {rtwname: "<Root>/Color Sensor"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "displaySensorReading:2"};
	this.sidHashMap["displaySensorReading:2"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "displaySensorReading:2:113"};
	this.sidHashMap["displaySensorReading:2:113"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "displaySensorReading:2:111"};
	this.sidHashMap["displaySensorReading:2:111"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/LCD"] = {sid: "displaySensorReading:2:93"};
	this.sidHashMap["displaySensorReading:2:93"] = {rtwname: "<S1>/LCD"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
