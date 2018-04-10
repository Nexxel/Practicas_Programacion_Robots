function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["displaySensorReading.c:34"]=1;
    this.lineTraceFlag["displaySensorReading.c:40"]=1;
    this.lineTraceFlag["displaySensorReading.c:52"]=1;
    this.lineTraceFlag["displaySensorReading.c:55"]=1;
    this.lineTraceFlag["displaySensorReading.c:62"]=1;
    this.lineTraceFlag["displaySensorReading.c:65"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
