// C++ code
//
int luminosidae = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  luminosidae = analogRead(A0);
  Serial.println(luminosidae);
  delay(10); // Delay a little bit to improve simulation performance
}
