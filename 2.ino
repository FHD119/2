int Count = 0;
void setup() {
Serial.begin(9600);
}

void loop() {
while(Count < 10)
{
  Serial.print(Count);
  Serial.print(",");
  Serial.println("Count is less than 10");
  delay(1000);
  Count++;
}
}
