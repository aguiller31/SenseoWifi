#include "constants.h"

// LED state machine defaults
int pulseDurLedSlow = 1000;
int pulseDurLedFast = 100;
int pulseDurTolerance = 10;
int pulseContThreshold = 2 * 1000;

// Senseo state machine (in seconds)
int HeatingTime = 70;
int HeatingTimeTol = 15;
int Brew1CupSeconds = 11;
int Brew2CupSeconds = 21;
int BrewHeat1CupSeconds = 55;
int BrewHeat2CupSeconds = 85;

// Debouncing (in milliseconds)
int CupDebounceInterval = 500;
int LedIgnoreChangeDuration = 5;

// Duration of button "press" (in milliseconds)
int pressDuration = 150;