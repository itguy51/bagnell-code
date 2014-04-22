void setup(){
	pinMode(10, OUTPUT);
	pinMode(13, OUTPUT);
	pinMode(7, INPUT_PULLUP);
}

void loop(){
	int potentiometerValue = analogRead(0);
	int mappedValue = map(potentiometerValue, 0, 1023, 0, 255);
	int buttonValue = digitalRead(7);
	analogWrite(10, mappedValue);
	digitalWrite(13, buttonValue);
	delay(50);
}
