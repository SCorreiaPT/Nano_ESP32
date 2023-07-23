/*
 * HardwareTest.ino
 *
 * Created: 7/22/2023 10:16:07 PM
 * Author: scorr
 */ 


#define LED_RGB_R	46
#define LED_RGB_G	45
#define	LED_RGB_B	0
#define LED_DL2		33


void setup()
{
	Serial.begin(115200);
	Serial.println("Arduino ESP32 Nano");

	pinMode(LED_RGB_R, OUTPUT);
	pinMode(LED_RGB_G, OUTPUT);
	pinMode(LED_RGB_B, OUTPUT);
	pinMode(LED_DL2,OUTPUT);


	digitalWrite(LED_RGB_R,LOW);
	digitalWrite(LED_RGB_G,LOW);
	digitalWrite(LED_RGB_B,LOW);
	digitalWrite(LED_DL2,HIGH);
	
	
	delay(3000);

	digitalWrite(LED_RGB_R,HIGH);
	digitalWrite(LED_RGB_G,HIGH);
	digitalWrite(LED_RGB_B,HIGH);
	digitalWrite(LED_DL2,LOW);
	

}

void loop()
{


}
