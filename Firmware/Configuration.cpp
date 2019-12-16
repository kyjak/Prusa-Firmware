#include "Configuration.h"
#include "Configuration_prusa.h"

const uint16_t _nPrinterType PROGMEM = PRINTER_TYPE;
const char _sPrinterName[] PROGMEM = PRINTER_NAME;
const uint16_t _nPrinterMmuType PROGMEM = PRINTER_MMU_TYPE;
const char _sPrinterMmuName[] PROGMEM = PRINTER_MMU_NAME;

uint8_t X_MIN_ENDSTOP_INVERTING = 0; // set to 1 to invert the logic of the endstop.
uint8_t Y_MIN_ENDSTOP_INVERTING = 0; // set to 1 to invert the logic of the endstop.
uint8_t Z_MIN_ENDSTOP_INVERTING = 0; // set to 1 to invert the logic of the endstop.
uint8_t X_MAX_ENDSTOP_INVERTING = 0; // set to 1 to invert the logic of the endstop.
uint8_t Y_MAX_ENDSTOP_INVERTING = 0; // set to 1 to invert the logic of the endstop.
uint8_t Z_MAX_ENDSTOP_INVERTING = 1;

uint16_t nPrinterType;
PGM_P sPrinterName;