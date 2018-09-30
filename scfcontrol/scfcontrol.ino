#include "scf.h"

const char * DEVTYPE = "SCF-A1";
const char * SERIALNUM = "180930-001";

void setup() {
    Serial.begin(115200);
    Serial.println(DEVTYPE);
    Serial.println(SERIALNUM);
}

void loop() {
}
