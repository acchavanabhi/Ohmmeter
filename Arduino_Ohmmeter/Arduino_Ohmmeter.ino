#include <Arduino.h>
#include <inttypes.h>
#include <SPI.h>
#include <digitalWriteFast.h>
#include <BMPheader.h>
#include <fonts.h>
#include <GraphicsLib.h>
#include <MI0283QT2.h>

MI0283QT2 Display;

int analogPin= 0;
int raw= 0;
int Vin= 4.88;
float Vout= 0;
float R1= 981;
float R2= 0;
float buffer= 0;


void setup ()
{
    Display.begin();
    Serial.begin(9600); 
    Display.setTextSize(1.5);
    Display.setRotation(1);
    //Display.setTextWrap(false);
  Display.fillScreen(RGB(255,255,255));
  Display.println("");
  Display.println("---------------------");
  Display.println("***   Ohmmeter   ***");
  Display.println("---------------------");
  Display.println("");  
}

void loop()
{
  raw = analogRead(analogPin);
  Vout = raw * Vin / 1024.0;
  R2 = R1 * ((Vin/Vout) -1);
  Display.setCursor(0,40);
  Display.print(Vout, 2);
  Display.print(" Volts over R2, ");
  
  if(R2 > 400)
  {
    Display.print("(too large R!)");
  }
  else
  {
    Display.print(R2,2);
    Display.print(" Ohms      ");
  }
  Display.println();

  delay(500);
}


