int greenPin = 13;
int yellowPin = 12;
int redPin = 11;

void setup () {
pinMode (greenPin, OUTPUT);
pinMode (yellowPin, OUTPUT);
pinMode (redPin, OUTPUT);
}

void loop () {
  digitalWrite (yellowPin, LOW);
  digitalWrite (redPin, LOW);
  digitalWrite (greenPin, HIGH);
  delay (500);
  digitalWrite (greenPin, LOW);
  digitalWrite (redPin, LOW);
  digitalWrite (yellowPin, HIGH);
  delay (500);
  digitalWrite (greenPin, LOW);
  digitalWrite (yellowPin, LOW);
  digitalWrite (redPin, HIGH);
  delay (500);
}
