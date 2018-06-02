function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Button */
	this.urlHashMap["seek_and_eat:10"] = "seek_and_eat.c:283,287,398,428";
	/* <Root>/Collision Avoidance */
	this.urlHashMap["seek_and_eat:4"] = "seek_and_eat.c:35,50,182,258,305,343,407&seek_and_eat.h:47,48,49,50,51";
	/* <Root>/Color Sensor */
	this.urlHashMap["seek_and_eat:1"] = "seek_and_eat.c:280,288,395,425";
	/* <Root>/Eat
 */
	this.urlHashMap["seek_and_eat:6"] = "seek_and_eat.c:286,306,344,414&seek_and_eat.h:46";
	/* <Root>/Product */
	this.urlHashMap["seek_and_eat:8"] = "seek_and_eat.c:304";
	/* <Root>/Product1 */
	this.urlHashMap["seek_and_eat:9"] = "seek_and_eat.c:342";
	/* <Root>/Saturation */
	this.urlHashMap["seek_and_eat:11"] = "seek_and_eat.c:311,320&seek_and_eat.h:57,60&seek_and_eat_data.c:26,29";
	/* <Root>/Saturation1 */
	this.urlHashMap["seek_and_eat:12"] = "seek_and_eat.c:348,357&seek_and_eat.h:63,66&seek_and_eat_data.c:32,35";
	/* <Root>/Ultrasonic Sensor */
	this.urlHashMap["seek_and_eat:5"] = "seek_and_eat.c:255,259,392,422";
	/* <S1>:1 */
	this.urlHashMap["seek_and_eat:4:1"] = "seek_and_eat.c:261";
	/* <S1>:1:2 */
	this.urlHashMap["seek_and_eat:4:1:2"] = "seek_and_eat.c:262";
	/* <S1>:1:3 */
	this.urlHashMap["seek_and_eat:4:1:3"] = "seek_and_eat.c:264";
	/* <S1>:1:4 */
	this.urlHashMap["seek_and_eat:4:1:4"] = "seek_and_eat.c:267";
	/* <S1>:1:5 */
	this.urlHashMap["seek_and_eat:4:1:5"] = "seek_and_eat.c:270";
	/* <S1>:1:7 */
	this.urlHashMap["seek_and_eat:4:1:7"] = "seek_and_eat.c:271";
	/* <S1>:1:8 */
	this.urlHashMap["seek_and_eat:4:1:8"] = "seek_and_eat.c:275";
	/* <S2>/Data Type Conversion */
	this.urlHashMap["seek_and_eat:2:114"] = "seek_and_eat.c:322,337";
	/* <S2>/Motor */
	this.urlHashMap["seek_and_eat:2:78"] = "seek_and_eat.c:326,329,333,339,401,431";
	/* <S3>:1 */
	this.urlHashMap["seek_and_eat:6:1"] = "seek_and_eat.c:290";
	/* <S3>:1:3 */
	this.urlHashMap["seek_and_eat:6:1:3"] = "seek_and_eat.c:291";
	/* <S3>:1:6 */
	this.urlHashMap["seek_and_eat:6:1:6"] = "seek_and_eat.c:292";
	/* <S3>:1:7 */
	this.urlHashMap["seek_and_eat:6:1:7"] = "seek_and_eat.c:294";
	/* <S3>:1:8 */
	this.urlHashMap["seek_and_eat:6:1:8"] = "seek_and_eat.c:298";
	/* <S3>:1:9 */
	this.urlHashMap["seek_and_eat:6:1:9"] = "seek_and_eat.c:299";
	/* <S3>:1:11 */
	this.urlHashMap["seek_and_eat:6:1:11"] = "seek_and_eat.c:308";
	/* <S3>:1:4 */
	this.urlHashMap["seek_and_eat:6:1:4"] = "seek_and_eat.c:415";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["seek_and_eat:3:114"] = "seek_and_eat.c:359,374";
	/* <S4>/Motor */
	this.urlHashMap["seek_and_eat:3:78"] = "seek_and_eat.c:363,366,370,376,404,434";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "seek_and_eat"};
	this.sidHashMap["seek_and_eat"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "seek_and_eat:4"};
	this.sidHashMap["seek_and_eat:4"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "seek_and_eat:2"};
	this.sidHashMap["seek_and_eat:2"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "seek_and_eat:6"};
	this.sidHashMap["seek_and_eat:6"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "seek_and_eat:3"};
	this.sidHashMap["seek_and_eat:3"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<Root>/Button"] = {sid: "seek_and_eat:10"};
	this.sidHashMap["seek_and_eat:10"] = {rtwname: "<Root>/Button"};
	this.rtwnameHashMap["<Root>/Collision Avoidance"] = {sid: "seek_and_eat:4"};
	this.sidHashMap["seek_and_eat:4"] = {rtwname: "<Root>/Collision Avoidance"};
	this.rtwnameHashMap["<Root>/Color Sensor"] = {sid: "seek_and_eat:1"};
	this.sidHashMap["seek_and_eat:1"] = {rtwname: "<Root>/Color Sensor"};
	this.rtwnameHashMap["<Root>/Derecho"] = {sid: "seek_and_eat:2"};
	this.sidHashMap["seek_and_eat:2"] = {rtwname: "<Root>/Derecho"};
	this.rtwnameHashMap["<Root>/Eat "] = {sid: "seek_and_eat:6"};
	this.sidHashMap["seek_and_eat:6"] = {rtwname: "<Root>/Eat "};
	this.rtwnameHashMap["<Root>/Izquierdo "] = {sid: "seek_and_eat:3"};
	this.sidHashMap["seek_and_eat:3"] = {rtwname: "<Root>/Izquierdo "};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "seek_and_eat:8"};
	this.sidHashMap["seek_and_eat:8"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Product1"] = {sid: "seek_and_eat:9"};
	this.sidHashMap["seek_and_eat:9"] = {rtwname: "<Root>/Product1"};
	this.rtwnameHashMap["<Root>/Saturation"] = {sid: "seek_and_eat:11"};
	this.sidHashMap["seek_and_eat:11"] = {rtwname: "<Root>/Saturation"};
	this.rtwnameHashMap["<Root>/Saturation1"] = {sid: "seek_and_eat:12"};
	this.sidHashMap["seek_and_eat:12"] = {rtwname: "<Root>/Saturation1"};
	this.rtwnameHashMap["<Root>/Ultrasonic Sensor"] = {sid: "seek_and_eat:5"};
	this.sidHashMap["seek_and_eat:5"] = {rtwname: "<Root>/Ultrasonic Sensor"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "seek_and_eat:4:1"};
	this.sidHashMap["seek_and_eat:4:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:1:2"] = {sid: "seek_and_eat:4:1:2"};
	this.sidHashMap["seek_and_eat:4:1:2"] = {rtwname: "<S1>:1:2"};
	this.rtwnameHashMap["<S1>:1:3"] = {sid: "seek_and_eat:4:1:3"};
	this.sidHashMap["seek_and_eat:4:1:3"] = {rtwname: "<S1>:1:3"};
	this.rtwnameHashMap["<S1>:1:4"] = {sid: "seek_and_eat:4:1:4"};
	this.sidHashMap["seek_and_eat:4:1:4"] = {rtwname: "<S1>:1:4"};
	this.rtwnameHashMap["<S1>:1:5"] = {sid: "seek_and_eat:4:1:5"};
	this.sidHashMap["seek_and_eat:4:1:5"] = {rtwname: "<S1>:1:5"};
	this.rtwnameHashMap["<S1>:1:7"] = {sid: "seek_and_eat:4:1:7"};
	this.sidHashMap["seek_and_eat:4:1:7"] = {rtwname: "<S1>:1:7"};
	this.rtwnameHashMap["<S1>:1:8"] = {sid: "seek_and_eat:4:1:8"};
	this.sidHashMap["seek_and_eat:4:1:8"] = {rtwname: "<S1>:1:8"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "seek_and_eat:2:116"};
	this.sidHashMap["seek_and_eat:2:116"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion"] = {sid: "seek_and_eat:2:114"};
	this.sidHashMap["seek_and_eat:2:114"] = {rtwname: "<S2>/Data Type Conversion"};
	this.rtwnameHashMap["<S2>/Motor"] = {sid: "seek_and_eat:2:78"};
	this.sidHashMap["seek_and_eat:2:78"] = {rtwname: "<S2>/Motor"};
	this.rtwnameHashMap["<S3>:1"] = {sid: "seek_and_eat:6:1"};
	this.sidHashMap["seek_and_eat:6:1"] = {rtwname: "<S3>:1"};
	this.rtwnameHashMap["<S3>:1:3"] = {sid: "seek_and_eat:6:1:3"};
	this.sidHashMap["seek_and_eat:6:1:3"] = {rtwname: "<S3>:1:3"};
	this.rtwnameHashMap["<S3>:1:6"] = {sid: "seek_and_eat:6:1:6"};
	this.sidHashMap["seek_and_eat:6:1:6"] = {rtwname: "<S3>:1:6"};
	this.rtwnameHashMap["<S3>:1:7"] = {sid: "seek_and_eat:6:1:7"};
	this.sidHashMap["seek_and_eat:6:1:7"] = {rtwname: "<S3>:1:7"};
	this.rtwnameHashMap["<S3>:1:8"] = {sid: "seek_and_eat:6:1:8"};
	this.sidHashMap["seek_and_eat:6:1:8"] = {rtwname: "<S3>:1:8"};
	this.rtwnameHashMap["<S3>:1:9"] = {sid: "seek_and_eat:6:1:9"};
	this.sidHashMap["seek_and_eat:6:1:9"] = {rtwname: "<S3>:1:9"};
	this.rtwnameHashMap["<S3>:1:11"] = {sid: "seek_and_eat:6:1:11"};
	this.sidHashMap["seek_and_eat:6:1:11"] = {rtwname: "<S3>:1:11"};
	this.rtwnameHashMap["<S3>:1:4"] = {sid: "seek_and_eat:6:1:4"};
	this.sidHashMap["seek_and_eat:6:1:4"] = {rtwname: "<S3>:1:4"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "seek_and_eat:3:116"};
	this.sidHashMap["seek_and_eat:3:116"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "seek_and_eat:3:114"};
	this.sidHashMap["seek_and_eat:3:114"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Motor"] = {sid: "seek_and_eat:3:78"};
	this.sidHashMap["seek_and_eat:3:78"] = {rtwname: "<S4>/Motor"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
