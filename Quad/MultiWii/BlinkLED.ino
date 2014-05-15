
//SetupLEDPin
int RedLED = A0;  

void SetupRedLEDPinDirection(){  
  pinMode(RedLED, OUTPUT);
}

void SetupRedLEDBlinkingRate(){
  SetBlinkRateofRedLED(100);
}


int YellowLED = A1;

void SetupYellowLEDPinDirection(){  
  pinMode(YellowLED, OUTPUT);
}

void SetupYellowLEDBlinkingRate(){
  SetBlinkRateofYellowLED(50);
}


