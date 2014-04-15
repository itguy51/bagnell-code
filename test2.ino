void setup()
{
	pinMode(13, OUTPUT);
	pinMode(7, INPUT);
	digitalWrite(7, HIGH);
	// Or use pinMode(7, INPUT_PULLUP);
}
void loop()
{
	int inputValue = digitalRead(7);
	digitalWrite(13, inputValue);
	delay(50);
}
