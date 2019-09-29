
#include <Wire.h>
#include "rgb_lcd.h"
#include "Seeed_QTouch.h"
#include <Digital_Light_TSL2561.h>


rgb_lcd lcd;
const int pinLight = A0;
const int pinTouch = 2;                        // pin of button define here
const int pinLed   = 4;                        // pin of led define here

int thresholdValue = 200;

void setup() {
  // put your setup code here, to run once:
//  lcd.begin(16, 2);
//  lcd.setCursor(0, 0);
//  lcd.setRGB(100, 0, 50);
//  lcd.clear();
//  String S = "Hi dude";
//  //lcd.print(S);
//   pinMode(pinTouch, INPUT);                  // set button INPUT
//   pinMode(pinLed, OUTPUT);                    // set led OUTPUT
 //  pinMode(8, OUTPUT);
  
}

void loop()
{   
//  digitalWrite(8, HIGH);
//  delay(1000);
//  digitalWrite(8,LOW);
//  delay(1000);
//  digitalWrite(8, HIGH);
//  delay(200);
//  digitalWrite(8,LOW);
//  delay(200);
//  digitalWrite(8, HIGH);
//  delay(200);
//  digitalWrite(8,LOW);
//  delay(200);
//  digitalWrite(8, HIGH);
//  delay(1000);
//  digitalWrite(8,LOW);
//  delay(1000);
  
    //int sensorValue = analogRead(pinLight);
//    if(sensorValue > thresholdValue){
//      digitalWrite(pinLed, HIGH);
//    }else{
//      digitalWrite(pinLed, LOW);
//    }
//    lcd.clear();
//    lcd.print("Sensor:");
//    lcd.println(sensorValue);
//    delay(2000);
//  
//    if(digitalRead(pinTouch))                     // when button is pressed
//    {
//        digitalWrite(pinLed, HIGH);             // led on
//    }
//    else
//    {
//        digitalWrite(pinLed, LOW);
//    }
//    
//    delay(10);
}
