/******************************************************************************
Project: eRich 2.0
File   : Interface.h
Date   : 18.02.2023
Author : Anton Weiss

Dieser Code Managet das Lcd Display mit verschiedenen Methoden die Verschiedene 
Menüs aufruft. Wir greifen hier auf eine externe Header File (LiquidCrystal_I2C.h)
mit einem Pointer zu. 
*******************************************************************************/


#ifndef INTERFACE_H
#define INTERFACE_H
#include "Arduino.h"
#include "LiquidCrystal_I2C.h"



class CDisplay{

  public:

  void setUpDisplay();
  void printMenu();
  void printMenuA( bool a_setMenuA);  
  void printMenuB( bool a_setMenuB, int iZaehler1, int a_iZaehler2, int a_iZahler3);  
  void printDirection(bool a_setMenuDirektion); 
  void printIGoHome();
  void printError();

  private:

// Our Custom Char/Arow
byte customChar[8] = {
	0b00100,
	0b00100,
	0b00100,
	0b00100,
	0b11111,
	0b01110,
	0b00100,
	0b00000
};


};









#endif 