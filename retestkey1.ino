void setup(){
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
	pinMode(8, INPUT_PULLUP);
}

void loop(){
	int red_in = analogRead(2);
	int green_in = analogRead(1);
	int blue_in = analogRead(0);
	int red_out = map(red_in, 0, 1023, 0, 255);
	int green_out = map(green_in, 0, 1023, 0, 255);
	int blue_out = map(blue_in, 0, 1023, 0, 255);
	if(digitalRead(8) == HIGH){ //If button pressed, write mapped values
		analogWrite(red_out, 11);
		analogWrite(green_out, 10);
		analogWrite(blue_out, 9);
	}else{ //Otherwise write zero to LED
		analogWrite(0, 11);
		analogWrite(0, 10);
		analogWrite(0, 9);
	}
	delay(50); //Optional - Good Practice
}
