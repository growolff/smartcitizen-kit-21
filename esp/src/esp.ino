#include "sckESP.h"

SckESP esp;

void setup() {
	esp.setup();
}

void loop() {
	esp.update();
}


void LedToggleLeft() {
	esp.ledToggle(esp.ledLeft);
}
void LedToggleRight() {
	esp.ledToggle(esp.ledRight);
}
time_t ntpProvider() {
	return esp.getNtpTime();
}
void extSet() {
	esp.webSet();
}
void extConf() {
	esp.webConf();
}
void extStatus() {
	esp.webStatus();
}
void extRoot(String path) {
	esp.flashReadFile(path);
}
