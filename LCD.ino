// Codigo para usar un LCD 16x2 con Arduino
// David Ortega Cuadrado - dorcu.com
// 27 de Abril de 2014
// hola@dorcu.com
 
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
 
 
//Pines en el PCF8574(dir, en,rw,rs,d4,d5,d6,d7,bl, blpol)
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
 
void setup(){
  lcd.begin(16,2);
 
  lcd.setCursor(3,0);
  lcd.print("Saludos");
  lcd.setCursor(0,1);
  lcd.print("desde dorcu.com");
}
 
void loop(){}
