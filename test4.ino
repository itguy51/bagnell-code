void setup()
{
	pinMode(10, OUTPUT);
}
void loop(){
	int value = analogRead(0);
	int mappedValue = map(value, 0, 1023, 0, 255);
	analogWrite(10, mappedValue);
	delay(50);
}