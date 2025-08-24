/*
  config.h - Configuration for the SenseoWifi project.
  Created by Thomas Dietrich, 2016-03-05.
  Released under some license.
*/

#ifndef SenseoConstants_h
#define SenseoConstants_h

// LED state machine
extern int pulseDurLedSlow;                   // duration of one pulse when LED is blinking slow in milliseconds (state LED_SLOW)
extern int pulseDurLedFast;                   // duration of one pulse when LED is blinking fast in milliseconds (state LED_FAST)
extern int pulseDurTolerance;                 // tolerance for pulse duration
extern int pulseContThreshold;                // time before switching to continuous LED state

// Senseo state machine (in seconds)
extern int HeatingTime;
extern int HeatingTimeTol;
extern int Brew1CupSeconds;
extern int Brew2CupSeconds;
extern int BrewHeat1CupSeconds;
extern int BrewHeat2CupSeconds;

// Debouncing (in milliseconds)
extern int CupDebounceInterval;
extern int LedIgnoreChangeDuration;

// Duration of button "press" (in milliseconds)
extern int pressDuration;

#endif