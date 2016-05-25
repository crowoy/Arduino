int switchPin = 8;
int ledPin = 11;
boolean lastButton = LOW;
boolean currentButton = LOW;
boolean ledOn = false;
boolean current = LOW;

void setup () {
  pinMode (switchPin, INPUT);
  pinMode (ledPin, OUTPUT);
}

boolean debounce (boolean lastButton) {
  current = digitalRead (switchPin);
  
  if (lastButton != current) {
  delay (5);
  current = digitalRead (switchPin);
  }
  
  return current;
}

 void loop () {
   currentButton = debounce (lastButton);
   
   if (lastButton == LOW && currentButton == HIGH) {
     ledOn = !ledOn;
     }
     
     lastButton = currentButton;
     digitalWrite (ledPin, ledOn);
}
