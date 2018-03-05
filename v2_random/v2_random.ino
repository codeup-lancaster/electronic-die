// set constants
const char ledBasePin=8;
const char centreLedPin=7;
const char switchPin=2;

// function declarations
void showNumber(char number);

// global variables
char number;

void setup()
{
  char i;
  pinMode(switchPin, INPUT);
  pinMode(centreLedPin, OUTPUT);
  for (i=0; i<6; i=i+1) {
    pinMode(ledBasePin+i, OUTPUT);
  }
}

void loop()
{
  number=random(1,7);
  showNumber(number);
  delay(500);
}

void showNumber(char number)
{
  switch (number) {
    case 1:
      digitalWrite(centreLedPin, HIGH);
      digitalWrite(ledBasePin+0, LOW);
      digitalWrite(ledBasePin+1, LOW);
      digitalWrite(ledBasePin+2, LOW);
      digitalWrite(ledBasePin+3, LOW);
      digitalWrite(ledBasePin+4, LOW);
      digitalWrite(ledBasePin+5, LOW);
      break;
    case 2:
      digitalWrite(centreLedPin, LOW);
      digitalWrite(ledBasePin+0, HIGH);
      digitalWrite(ledBasePin+1, LOW);
      digitalWrite(ledBasePin+2, LOW);
      digitalWrite(ledBasePin+3, HIGH);
      digitalWrite(ledBasePin+4, LOW);
      digitalWrite(ledBasePin+5, LOW);
      break;
    case 3:
      digitalWrite(centreLedPin, HIGH);
      digitalWrite(ledBasePin+0, HIGH);
      digitalWrite(ledBasePin+1, LOW);
      digitalWrite(ledBasePin+2, LOW);
      digitalWrite(ledBasePin+3, HIGH);
      digitalWrite(ledBasePin+4, LOW);
      digitalWrite(ledBasePin+5, LOW);
      break;
    case 4:
      digitalWrite(centreLedPin, LOW);
      digitalWrite(ledBasePin+0, HIGH);
      digitalWrite(ledBasePin+1, LOW);
      digitalWrite(ledBasePin+2, HIGH);
      digitalWrite(ledBasePin+3, HIGH);
      digitalWrite(ledBasePin+4, LOW);
      digitalWrite(ledBasePin+5, HIGH);
      break;
    case 5:
      digitalWrite(centreLedPin, HIGH);
      digitalWrite(ledBasePin+0, HIGH);
      digitalWrite(ledBasePin+1, LOW);
      digitalWrite(ledBasePin+2, HIGH);
      digitalWrite(ledBasePin+3, HIGH);
      digitalWrite(ledBasePin+4, LOW);
      digitalWrite(ledBasePin+5, HIGH);
      break;
    case 6:
      digitalWrite(centreLedPin, LOW);
      digitalWrite(ledBasePin+0, HIGH);
      digitalWrite(ledBasePin+1, HIGH);
      digitalWrite(ledBasePin+2, HIGH);
      digitalWrite(ledBasePin+3, HIGH);
      digitalWrite(ledBasePin+4, HIGH);
      digitalWrite(ledBasePin+5, HIGH);
      break;
  }
}
