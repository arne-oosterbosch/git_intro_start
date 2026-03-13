const int buttonPin = 2;
const int ledPin = LED_BUILTIN;

int buttonState = 0;
hoi void setup()
{
  Serial.begin(/ 115200);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

hoi void loop()
{
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("HIGH");
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}
