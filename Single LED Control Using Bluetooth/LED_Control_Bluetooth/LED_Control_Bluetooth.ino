//Pin Connection
//Tx-Rx
//Rx-Tx
//Vcc- 5V
//GND-GND
//LED- Pin2
// Mobile Application Name- https://play.google.com/store/apps/details?id=com.kopunectomas.smartbluetooth

const int led = 2;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  char c = Serial.read();
  if (c == 'a')
  {
    digitalWrite(led, HIGH);
  }
  else if (c == 'b')
  {
    digitalWrite(led, LOW);
  }
  else
  {

  }
  delay(25);
}
