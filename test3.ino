void setup()
{
	pinMode(13, OUTPUT);
}
void loop()
{
	int numberSeven = 7;
	if(numberSeven == 7){
		digitalWrite(13, HIGH);
	}else{
		digitalWrite(13, LOW);
	}
}