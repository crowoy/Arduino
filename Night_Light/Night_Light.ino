int sensePin = 0;
int ledPin = 13;

void setup () {
 analogReference(DEFAULT);
 pinMode (ledPin, OUTPUT);
 Serial.begin(9600);
}

void loop () {
 Serial.println(analogRead(sensePin));
 delay (500);
 
  int val = analogRead (sensePin);
  
  if (val < 800) {
    digitalWrite (ledPin, HIGH); 
  } else {
   digitalWrite (ledPin, LOW);
  }
}
