function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Actual distance */
	this.urlHashMap["untitled1:1"] = "msg=rtwMsg_reducedBlock&block=untitled1:1";
	/* <Root>/Constant2 */
	this.urlHashMap["untitled1:3"] = "msg=rtwMsg_reducedBlock&block=untitled1:3";
	/* <Root>/Final robot speed
 */
	this.urlHashMap["untitled1:7"] = "msg=rtwMsg_reducedBlock&block=untitled1:7";
	/* <Root>/Product */
	this.urlHashMap["untitled1:6"] = "msg=rtwMsg_reducedBlock&block=untitled1:6";
	/* <Root>/Relational
Operator */
	this.urlHashMap["untitled1:5"] = "msg=rtwMsg_reducedBlock&block=untitled1:5";
	/* <Root>/Threshold */
	this.urlHashMap["untitled1:2"] = "msg=rtwMsg_reducedBlock&block=untitled1:2";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled1"};
	this.sidHashMap["untitled1"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Actual distance"] = {sid: "untitled1:1"};
	this.sidHashMap["untitled1:1"] = {rtwname: "<Root>/Actual distance"};
	this.rtwnameHashMap["<Root>/Constant2"] = {sid: "untitled1:3"};
	this.sidHashMap["untitled1:3"] = {rtwname: "<Root>/Constant2"};
	this.rtwnameHashMap["<Root>/Final robot speed "] = {sid: "untitled1:7"};
	this.sidHashMap["untitled1:7"] = {rtwname: "<Root>/Final robot speed "};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "untitled1:6"};
	this.sidHashMap["untitled1:6"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Relational Operator"] = {sid: "untitled1:5"};
	this.sidHashMap["untitled1:5"] = {rtwname: "<Root>/Relational Operator"};
	this.rtwnameHashMap["<Root>/Threshold"] = {sid: "untitled1:2"};
	this.sidHashMap["untitled1:2"] = {rtwname: "<Root>/Threshold"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
