int greenPin = 13;
int yellowPin = 12;
int redPin = 11;
int switchPin = 8;
boolean currentNum;
int lastNum = LOW;
int num = 1;
long lastDebounce = 0;
long currentDebounce = 50;

void setup () {
 pinMode (switchPin, INPUT);
 pinMode (greenPin, OUTPUT);
 pinMode (yellowPin, OUTPUT);
 pinMode (redPin, OUTPUT);
 
 Serial.begin (9600);
}

boolean debounce () {
  int reading = digitalRead (switchPin);
  if (reading != currentNum) {
   delay (5);
   currentNum = digitalRead(switchPin); 
  }
return currentNum;
}

void loop () {
  Serial.println(num);
  delay (500);
  
  int reading = digitalRead (switchPin);
  if (reading != currentNum) {
    delay (5);
    currentNum = digitalRead(switchPin);
  }
  
  if (lastNum == LOW && currentNum == HIGH) {
      num = num + 1;
  }
    
    lastNum = currentNum;
    
  if (num == 1) {
    digitalWrite (yellowPin, LOW);
    digitalWrite (redPin, LOW);
    digitalWrite (greenPin, HIGH);
  }
  if (num == 2) {
    digitalWrite (greenPin, LOW);
    digitalWrite (redPin, LOW);
    digitalWrite (yellowPin, HIGH);
  }
  if (num == 3) {
    digitalWrite (greenPin, LOW);
    digitalWrite (yellowPin, LOW);
    digitalWrite (redPin, HIGH);
  }
  if (num > 3) {
        num = 1;
  }
}
