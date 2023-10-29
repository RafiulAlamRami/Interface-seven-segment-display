#include "SevSeg.h"
SevSeg sevseg; 

void setup()
{
    byte numDigits = 1;
    byte digitPins[] = {};
    
  
    byte segmentPins[] = {9, 8, 7, 6, 5, 4, 3, 2};
    bool resistorsOnSegments = true;
    byte hardwareConfig = COMMON_CATHODE; 
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(100);  
}

void loop()
{
  for(int i=0; i<=9; i++)
  {
    sevseg.setNumber(i);
    delay(700);
    sevseg.refreshDisplay();
  }
}
