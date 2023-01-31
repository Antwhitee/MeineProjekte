#ifndef INTERFACE_H
#define INTERFACE_H
#include "Arduino.h"
#include "LiquidCrystal_I2C.h"

// LiquidCrystal_I2C crystal();
// LiquidCrystal_I2C* m_pCrystal = new LiquidCrystal_I2C();



class CDisplay{



  public:

  void setUpDisplay();
  void printMenu();
  void printMenuA(bool setMenuA, char aktMove);
  void printMenuB(bool setMenuB);
  void printDirection(bool setGoStatus);
  char setDirKey(char a_key);

  char cDisplayMover;
  char cDirKey;

  private:


LiquidCrystal_I2C* m_pCrystal = new LiquidCrystal_I2C(0x27, 16, 2);

// Unser customChar/ Pfeil
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



// class CKeyPad{
//   public:





//   private:




// };











#endif 