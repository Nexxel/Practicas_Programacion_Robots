function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Clock */
	this.urlHashMap["pr5:1"] = "pr5.c:268";
	/* <Root>/Left_encoder
 */
	this.urlHashMap["pr5:9"] = "pr5.c:271,280,407,438";
	/* <Root>/MATLAB Function */
	this.urlHashMap["pr5:6"] = "pr5.c:44,65,103,127,165,190,225,252,277,335,341,419,431&pr5.h:67,68,69,70,71,72,73&pr5_types.h:24";
	/* <Root>/Right_encoder
 */
	this.urlHashMap["pr5:10"] = "pr5.c:274,281,410,441";
	/* <Root>/Stop Simulation */
	this.urlHashMap["pr5:8"] = "pr5.c:346,354";
	/* <S1>/Compare */
	this.urlHashMap["pr5:7:2"] = "pr5.c:279";
	/* <S1>/Constant */
	this.urlHashMap["pr5:7:3"] = "pr5.c:278&pr5.h:79&pr5_data.c:26";
	/* <S2>/Compare */
	this.urlHashMap["pr5:11:2"] = "pr5.c:348";
	/* <S2>/Constant */
	this.urlHashMap["pr5:11:3"] = "pr5.c:347&pr5.h:82&pr5_data.c:29";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["pr5:2:114"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=pr5:2:114";
	/* <S3>/Motor */
	this.urlHashMap["pr5:2:78"] = "pr5.c:334,413,444";
	/* <S4>:1 */
	this.urlHashMap["pr5:6:1"] = "pr5.c:283";
	/* <S4>:1:7 */
	this.urlHashMap["pr5:6:1:7"] = "pr5.c:284";
	/* <S4>:1:8 */
	this.urlHashMap["pr5:6:1:8"] = "pr5.c:286";
	/* <S4>:1:9 */
	this.urlHashMap["pr5:6:1:9"] = "pr5.c:289";
	/* <S4>:1:10 */
	this.urlHashMap["pr5:6:1:10"] = "pr5.c:290";
	/* <S4>:1:11 */
	this.urlHashMap["pr5:6:1:11"] = "pr5.c:291";
	/* <S4>:1:12 */
	this.urlHashMap["pr5:6:1:12"] = "pr5.c:292";
	/* <S4>:1:14 */
	this.urlHashMap["pr5:6:1:14"] = "pr5.c:296";
	/* <S4>:1:15 */
	this.urlHashMap["pr5:6:1:15"] = "pr5.c:298";
	/* <S4>:1:16 */
	this.urlHashMap["pr5:6:1:16"] = "pr5.c:301";
	/* <S4>:1:17 */
	this.urlHashMap["pr5:6:1:17"] = "pr5.c:304";
	/* <S4>:1:18 */
	this.urlHashMap["pr5:6:1:18"] = "pr5.c:305";
	/* <S4>:1:19 */
	this.urlHashMap["pr5:6:1:19"] = "pr5.c:308";
	/* <S4>:1:21 */
	this.urlHashMap["pr5:6:1:21"] = "pr5.c:312";
	/* <S4>:1:22 */
	this.urlHashMap["pr5:6:1:22"] = "pr5.c:313";
	/* <S4>:1:23 */
	this.urlHashMap["pr5:6:1:23"] = "pr5.c:316";
	/* <S4>:1:24 */
	this.urlHashMap["pr5:6:1:24"] = "pr5.c:318";
	/* <S4>:1:25 */
	this.urlHashMap["pr5:6:1:25"] = "pr5.c:321";
	/* <S4>:1:27 */
	this.urlHashMap["pr5:6:1:27"] = "pr5.c:325";
	/* <S4>:1:28 */
	this.urlHashMap["pr5:6:1:28"] = "pr5.c:328";
	/* <S4>:1:29 */
	this.urlHashMap["pr5:6:1:29"] = "pr5.c:330";
	/* <S5>/Data Type Conversion */
	this.urlHashMap["pr5:3:114"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=pr5:3:114";
	/* <S5>/Motor */
	this.urlHashMap["pr5:3:78"] = "pr5.c:340,416,447";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "pr5"};
	this.sidHashMap["pr5"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "pr5:7"};
	this.sidHashMap["pr5:7"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "pr5:11"};
	this.sidHashMap["pr5:11"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "pr5:2"};
	this.sidHashMap["pr5:2"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "pr5:6"};
	this.sidHashMap["pr5:6"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "pr5:3"};
	this.sidHashMap["pr5:3"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<Root>/Clock"] = {sid: "pr5:1"};
	this.sidHashMap["pr5:1"] = {rtwname: "<Root>/Clock"};
	this.rtwnameHashMap["<Root>/Compare To Constant"] = {sid: "pr5:7"};
	this.sidHashMap["pr5:7"] = {rtwname: "<Root>/Compare To Constant"};
	this.rtwnameHashMap["<Root>/Compare To Constant1"] = {sid: "pr5:11"};
	this.sidHashMap["pr5:11"] = {rtwname: "<Root>/Compare To Constant1"};
	this.rtwnameHashMap["<Root>/Left Motor"] = {sid: "pr5:2"};
	this.sidHashMap["pr5:2"] = {rtwname: "<Root>/Left Motor"};
	this.rtwnameHashMap["<Root>/Left_encoder "] = {sid: "pr5:9"};
	this.sidHashMap["pr5:9"] = {rtwname: "<Root>/Left_encoder "};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "pr5:6"};
	this.sidHashMap["pr5:6"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/Right motor "] = {sid: "pr5:3"};
	this.sidHashMap["pr5:3"] = {rtwname: "<Root>/Right motor "};
	this.rtwnameHashMap["<Root>/Right_encoder "] = {sid: "pr5:10"};
	this.sidHashMap["pr5:10"] = {rtwname: "<Root>/Right_encoder "};
	this.rtwnameHashMap["<Root>/Stop Simulation"] = {sid: "pr5:8"};
	this.sidHashMap["pr5:8"] = {rtwname: "<Root>/Stop Simulation"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "pr5:7:1"};
	this.sidHashMap["pr5:7:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Compare"] = {sid: "pr5:7:2"};
	this.sidHashMap["pr5:7:2"] = {rtwname: "<S1>/Compare"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "pr5:7:3"};
	this.sidHashMap["pr5:7:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "pr5:7:4"};
	this.sidHashMap["pr5:7:4"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "pr5:11:1"};
	this.sidHashMap["pr5:11:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/Compare"] = {sid: "pr5:11:2"};
	this.sidHashMap["pr5:11:2"] = {rtwname: "<S2>/Compare"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "pr5:11:3"};
	this.sidHashMap["pr5:11:3"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "pr5:11:4"};
	this.sidHashMap["pr5:11:4"] = {rtwname: "<S2>/y"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "pr5:2:116"};
	this.sidHashMap["pr5:2:116"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "pr5:2:114"};
	this.sidHashMap["pr5:2:114"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/Motor"] = {sid: "pr5:2:78"};
	this.sidHashMap["pr5:2:78"] = {rtwname: "<S3>/Motor"};
	this.rtwnameHashMap["<S4>:1"] = {sid: "pr5:6:1"};
	this.sidHashMap["pr5:6:1"] = {rtwname: "<S4>:1"};
	this.rtwnameHashMap["<S4>:1:7"] = {sid: "pr5:6:1:7"};
	this.sidHashMap["pr5:6:1:7"] = {rtwname: "<S4>:1:7"};
	this.rtwnameHashMap["<S4>:1:8"] = {sid: "pr5:6:1:8"};
	this.sidHashMap["pr5:6:1:8"] = {rtwname: "<S4>:1:8"};
	this.rtwnameHashMap["<S4>:1:9"] = {sid: "pr5:6:1:9"};
	this.sidHashMap["pr5:6:1:9"] = {rtwname: "<S4>:1:9"};
	this.rtwnameHashMap["<S4>:1:10"] = {sid: "pr5:6:1:10"};
	this.sidHashMap["pr5:6:1:10"] = {rtwname: "<S4>:1:10"};
	this.rtwnameHashMap["<S4>:1:11"] = {sid: "pr5:6:1:11"};
	this.sidHashMap["pr5:6:1:11"] = {rtwname: "<S4>:1:11"};
	this.rtwnameHashMap["<S4>:1:12"] = {sid: "pr5:6:1:12"};
	this.sidHashMap["pr5:6:1:12"] = {rtwname: "<S4>:1:12"};
	this.rtwnameHashMap["<S4>:1:14"] = {sid: "pr5:6:1:14"};
	this.sidHashMap["pr5:6:1:14"] = {rtwname: "<S4>:1:14"};
	this.rtwnameHashMap["<S4>:1:15"] = {sid: "pr5:6:1:15"};
	this.sidHashMap["pr5:6:1:15"] = {rtwname: "<S4>:1:15"};
	this.rtwnameHashMap["<S4>:1:16"] = {sid: "pr5:6:1:16"};
	this.sidHashMap["pr5:6:1:16"] = {rtwname: "<S4>:1:16"};
	this.rtwnameHashMap["<S4>:1:17"] = {sid: "pr5:6:1:17"};
	this.sidHashMap["pr5:6:1:17"] = {rtwname: "<S4>:1:17"};
	this.rtwnameHashMap["<S4>:1:18"] = {sid: "pr5:6:1:18"};
	this.sidHashMap["pr5:6:1:18"] = {rtwname: "<S4>:1:18"};
	this.rtwnameHashMap["<S4>:1:19"] = {sid: "pr5:6:1:19"};
	this.sidHashMap["pr5:6:1:19"] = {rtwname: "<S4>:1:19"};
	this.rtwnameHashMap["<S4>:1:21"] = {sid: "pr5:6:1:21"};
	this.sidHashMap["pr5:6:1:21"] = {rtwname: "<S4>:1:21"};
	this.rtwnameHashMap["<S4>:1:22"] = {sid: "pr5:6:1:22"};
	this.sidHashMap["pr5:6:1:22"] = {rtwname: "<S4>:1:22"};
	this.rtwnameHashMap["<S4>:1:23"] = {sid: "pr5:6:1:23"};
	this.sidHashMap["pr5:6:1:23"] = {rtwname: "<S4>:1:23"};
	this.rtwnameHashMap["<S4>:1:24"] = {sid: "pr5:6:1:24"};
	this.sidHashMap["pr5:6:1:24"] = {rtwname: "<S4>:1:24"};
	this.rtwnameHashMap["<S4>:1:25"] = {sid: "pr5:6:1:25"};
	this.sidHashMap["pr5:6:1:25"] = {rtwname: "<S4>:1:25"};
	this.rtwnameHashMap["<S4>:1:27"] = {sid: "pr5:6:1:27"};
	this.sidHashMap["pr5:6:1:27"] = {rtwname: "<S4>:1:27"};
	this.rtwnameHashMap["<S4>:1:28"] = {sid: "pr5:6:1:28"};
	this.sidHashMap["pr5:6:1:28"] = {rtwname: "<S4>:1:28"};
	this.rtwnameHashMap["<S4>:1:29"] = {sid: "pr5:6:1:29"};
	this.sidHashMap["pr5:6:1:29"] = {rtwname: "<S4>:1:29"};
	this.rtwnameHashMap["<S5>/In1"] = {sid: "pr5:3:116"};
	this.sidHashMap["pr5:3:116"] = {rtwname: "<S5>/In1"};
	this.rtwnameHashMap["<S5>/Data Type Conversion"] = {sid: "pr5:3:114"};
	this.sidHashMap["pr5:3:114"] = {rtwname: "<S5>/Data Type Conversion"};
	this.rtwnameHashMap["<S5>/Motor"] = {sid: "pr5:3:78"};
	this.sidHashMap["pr5:3:78"] = {rtwname: "<S5>/Motor"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
