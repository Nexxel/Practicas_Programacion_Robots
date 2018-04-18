function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["blinkLED.c:37c22"]=1;
    this.traceFlag["blinkLED.c:46c24"]=1;
    this.traceFlag["blinkLED.c:46c30"]=1;
    this.traceFlag["blinkLED.c:46c49"]=1;
    this.traceFlag["blinkLED.c:46c67"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["blinkLED.c:36"]=1;
    this.lineTraceFlag["blinkLED.c:37"]=1;
    this.lineTraceFlag["blinkLED.c:38"]=1;
    this.lineTraceFlag["blinkLED.c:40"]=1;
    this.lineTraceFlag["blinkLED.c:46"]=1;
    this.lineTraceFlag["blinkLED.c:47"]=1;
    this.lineTraceFlag["blinkLED.c:48"]=1;
    this.lineTraceFlag["blinkLED.c:63"]=1;
    this.lineTraceFlag["blinkLED.c:70"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
