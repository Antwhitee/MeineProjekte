#include "Interface.h"
#include "LiquidCrystal_I2C.h"
#include "Arduino.h"

// LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 column and 2 rows


void CDisplay::setUpDisplay(){
m_pCrystal->init();
m_pCrystal->backlight();

m_pCrystal->createChar(0, customChar);

};

void CDisplay::printMenu(){

  m_pCrystal->clear();
  m_pCrystal->setCursor(0, 0);         // move cursor to   (0, 0)
  m_pCrystal->print("A.START ERICH");        // print message at (0, 0)
  m_pCrystal->setCursor(0, 1);         // move cursor to   (2, 1)
  m_pCrystal->print("B.HISTORY"); // print message at (2, 1)

};
 void CDisplay::printMenuA(bool a_setMenuA, char aktMove){
   bool setGoStatus=0;
  if(a_setMenuA==true){
  m_pCrystal->clear();                 // clear display
  m_pCrystal->setCursor(0, 0);         // move cursor to   (0, 0)
  m_pCrystal->print("choose your Pnt");
  m_pCrystal->setCursor(0, 1);
  m_pCrystal->print("1,2 or 3");
  // if(A_point == '1'){
  //   cLocaKey = A_point;
  //  return cLocaKey;
  // if(cDirKey == '1'){
  //     printDirection(true);
  // }
 
  }
  
};
void CDisplay::printMenuB(bool setMenuB){
if(setMenuB==true){
  m_pCrystal->clear();                 // clear display
  m_pCrystal->setCursor(0, 0);         // move cursor to   (0, 0)
  m_pCrystal->print("Point  Time   Status:");

  m_pCrystal->setCursor(5, 0);
  m_pCrystal->write((byte) 0);

  m_pCrystal->setCursor(11, 0);
  m_pCrystal->write((byte) 0);

  m_pCrystal->setCursor(0, 1);
  m_pCrystal->print("//Var  //Var  //Var");
}


};

void CDisplay::printDirection(bool setGoStatus){
 while(setGoStatus==true){
  m_pCrystal->clear();                 // clear display
  m_pCrystal->setCursor(0, 0);         // move cursor to   (0, 0)
  m_pCrystal->print("On the Way");
  
  m_pCrystal->setCursor(0,1);
  m_pCrystal->print("Status://VARIABLE"); 
// while(setGoStatus == true){
//   m_pCrystal->setCursor(11, 0);
//   m_pCrystal->print(".");
//     m_pCrystal->scrollDisplayLeft();

// }
  
                
//  while(setGoStatus==true){

   m_pCrystal->setCursor(11, 0);
   m_pCrystal->print(".");
   delay(1000);

   m_pCrystal->setCursor(12, 0);
   m_pCrystal->print(".");
   delay(1000);

   m_pCrystal->setCursor(13, 0);
   m_pCrystal->print(".");
   delay(1000);

   m_pCrystal->setCursor(13, 0);
   m_pCrystal->print(" ");
   delay(500);

   m_pCrystal->setCursor(12, 0);
   m_pCrystal->print(" ");
   delay(500);

   m_pCrystal->setCursor(11, 0);
   m_pCrystal->print(" ");
   delay(500);


 }
 

};

char CDisplay::setDirKey(char a_key){
  if(a_key == '1'){
    cDirKey = a_key;
  }
return cDirKey;
}

//-----------------KeyPad-------------------


// void CKeyPad::setUpKey(){

// const int ROW_NUM = 4; //four rows
// const int COLUMN_NUM = 4; //four columns

// char keys[ROW_NUM][COLUMN_NUM] = {
//   {'1','2','3', 'A'},
//   {'4','5','6', 'B'},
//   {'7','8','9', 'C'},
//   {'*','0','#', 'D'}
// };

// byte pin_rows[ROW_NUM] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
// byte pin_column[COLUMN_NUM] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad

// Serial.begin(9600);  
// };
