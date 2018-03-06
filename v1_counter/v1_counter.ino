// set constants
const char ledBasePin=8;
const char centreLedPin=7;

// global variables
char number = 1;

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
  number=number+1;
  delay(500);
  if (number>6) number=1;
}


