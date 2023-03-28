#include "Interface.h"



// set objekt Pointer to Liquidcrystal class
LiquidCrystal_I2C* m_pCrystal = new LiquidCrystal_I2C(0x27,16, 2); // I2C address 0x27, 16 column and 2 rows



void CDisplay::setUpDisplay(){
m_pCrystal->init();
m_pCrystal->backlight();
//setUp CustomChar
m_pCrystal->createChar(0, customChar);

};

void CDisplay::printMenu(){

  m_pCrystal->clear();
  m_pCrystal->setCursor(0, 0);         // move cursor to   (0, 0)
  m_pCrystal->print("A.START ERICH");        // print message at (0, 0)
  m_pCrystal->setCursor(0, 1);        
  m_pCrystal->print("B.HISTORY"); 

};


//-----------------------------------------------------------------------------
//*****************************************************************************
//-----------------------------------------------------------------------------
 void CDisplay::printMenuA(bool a_setMenuA){ 
  if(a_setMenuA == true){

  m_pCrystal->clear();                 // clear display
  m_pCrystal->setCursor(0, 0);         // move cursor to   (0, 0)
  m_pCrystal->print("CHOOSE POINT");
  m_pCrystal->setCursor(0, 1);
  m_pCrystal->print("1,2 or 3");
  }
 
};
//-----------------------------------------------------------------------------
//*****************************************************************************
//-----------------------------------------------------------------------------
void CDisplay::printMenuB(bool a_setMenuB, int a_iZaehler1, int a_iZaehler2, int a_iZaehler3){       
  if(a_setMenuB == true){

  m_pCrystal->clear();                 // clear display
  m_pCrystal->setCursor(0, 0);         // move cursor to   (0, 0)
  m_pCrystal->print("1      2      3");

  m_pCrystal->setCursor(1, 0);
  m_pCrystal->write((byte) 0);

  m_pCrystal->setCursor(8, 0);
  m_pCrystal->write((byte) 0);

  m_pCrystal->setCursor(15, 0);
  m_pCrystal->write((byte) 0);

  m_pCrystal->setCursor(1, 1);
  m_pCrystal->print(a_iZaehler1);
  m_pCrystal->setCursor(8, 1);
  m_pCrystal->print(a_iZaehler2);
  m_pCrystal->setCursor(15, 1);
  m_pCrystal->print(a_iZaehler3);

  }

};
//-----------------------------------------------------------------------------
//*****************************************************************************
//-----------------------------------------------------------------------------

void CDisplay::printDirection(bool a_setMenuDirektion){ 

//if bluetooth conection as feedback

// String sError = "ERROR";
// String sRun= "GOOD";    
// String sSetStat;

//  if(a_sStatus == 'E')
//   {
//     sSetStat= sError;    
//   }; 
//   if(a_sStatus== 'R')
//   {
//     sSetStat = sRun;
//   };

  //while if you want loading points

  if(a_setMenuDirektion==true){

    m_pCrystal->clear();                 // clear display
    m_pCrystal->setCursor(0, 0);         // move cursor to   (0, 0)
    m_pCrystal->print("On the Way");
    
    // m_pCrystal->setCursor(0,1);
    // m_pCrystal->print("Status: "); 
    // m_pCrystal->print(sSetStat);
  //Loading points
    // m_pCrystal->setCursor(11, 0);
    // m_pCrystal->print(".");
    // delay(1000);

    // m_pCrystal->setCursor(12, 0);
    // m_pCrystal->print(".");
    // delay(1000);

    // m_pCrystal->setCursor(13, 0);
    // m_pCrystal->print(".");
    // delay(1000);

    // m_pCrystal->setCursor(13, 0);
    // m_pCrystal->print(" ");
    // delay(500);

    // m_pCrystal->setCursor(12, 0);
    // m_pCrystal->print(" ");
    // delay(500);

    // m_pCrystal->setCursor(11, 0);
    // m_pCrystal->print(" ");
    // delay(500);

    // if(a_cReset=='D'){
      
    // }
  }


};

void CDisplay::printError(){
  m_pCrystal->clear();                 // clear display
  m_pCrystal->setCursor(0, 0);         // move cursor to   (0, 0)
  m_pCrystal->print("SYSTEM ERROR");
  m_pCrystal->setCursor(0, 1);
  m_pCrystal->print("PRESS 0 FOR HOME");
};

void CDisplay::printIGoHome(){
  m_pCrystal->clear();                 // clear display
  m_pCrystal->setCursor(0, 0);         // move cursor to   (0, 0)
  m_pCrystal->print("I Go Home");

};






