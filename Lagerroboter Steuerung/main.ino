/******************************************************************************
Project: eRich 2.0
File   : Interface.h
Date   : 18.02.2023
Author : Anton Weiss

Dies ist die kommplete Main Datei des Erich Steuerungssystems. 
*******************************************************************************/

#include "Interface.h"
#include <Arduino.h>
#include "Keypad.h"
#include <Wire.h>

#define DISABLE_CODE_FOR_RECEIVER
#include "PinDefinitionsAndMore.h"
#include "IRremote.hpp"

CDisplay display;

//-----------------------------------------------------------------------------
//***************** Define the Zähler Variable for the Point count  ***********
//-----------------------------------------------------------------------------

int iZaehler1;
int iZaehler2;
int iZaehler3;

//-----------------------------------------------------------------------------
//*************************** Define the Keypad Map ***************************
//-----------------------------------------------------------------------------
const int ROW_NUM = 4; //four rows
const int COLUMN_NUM = 4; //four columns
char keys[ROW_NUM][COLUMN_NUM] = {
  {'1','2','3', 'A'},
  {'4','5','6', 'B'},
  {'7','8','9', 'C'},
  {'*','0','#', 'D'}
};
//-----------------------------------------------------------------------------
//*************************** Define the Keypad Pins **************************
//-----------------------------------------------------------------------------

byte pin_rows[ROW_NUM] = { 11, 10, 9, 8}; //connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] ={7, 6, 5, 4 }; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

//-----------------------------------------------------------------------------
//************** IR Address and the Repeats of the Sequenz ********************
//-----------------------------------------------------------------------------
uint8_t iAddress= 0x0;
uint8_t iRepeats = 0;

//-----------------------------------------------------------------------------
//**************************** Define the IR Comands **************************
//-----------------------------------------------------------------------------
  uint8_t iComand1 = 0x10;
  uint8_t iComand2 = 0x20;
  uint8_t iComand3 = 0x30;
  uint8_t iComandCalibrateArm = 0x60;
  uint8_t iComandSendHome = 0x50;
  uint8_t iComandError = 0x40;


void setup() {

  display.setUpDisplay();

  display.printMenu();

  Serial.begin(9600);

  //IR pin definition
  pinMode(LED_BUILTIN, OUTPUT);
  //IR Initialize
  IrSender.begin(DISABLE_LED_FEEDBACK);


  
}


void loop() {
//-----------------------------------------------------------------------------
//***************** Initialize the bools for the methods **********************
//-----------------------------------------------------------------------------
  bool bSetMenuDirektion = false;
  bool bSetMenuA = false;
  bool bSetMenuB = false;
  bool bSetBackMenu = false;

//-----------------------------------------------------------------------------
//****************** Write the Key in char Variable ***************************
//-----------------------------------------------------------------------------
  char cKey = keypad.getKey();

  //For checking the Input of the Keypad
  Serial.print(cKey);


//-----------------------------------------------------------------------------
//***************** Switch case for the Keypad input **************************
//-----------------------------------------------------------------------------

  switch(cKey)
  {
      //set the bool MenuA true

      case 'A':

        bSetMenuDirektion = false;
        bSetMenuB = false;
        bSetBackMenu = false;
        bSetMenuA = true;
                
          break; 
        
      //set the bool MenuB true

      case 'B':

        bSetMenuDirektion = false;
        bSetMenuA = false;
        bSetBackMenu =false;
        bSetMenuB = true;

        break;

      //set the bool Direktion Menu 1 true

      case '1':
        bSetMenuA = false;
        bSetMenuB = false;
        bSetBackMenu= false;
        bSetMenuDirektion = true;

       //send Infrarot comand to the Robot
        IrSender.sendRC6(iAddress, iComand1, iRepeats);    

        iZaehler1++;
  

        break;

      //set the bool Direktion Menu 2 true

      case '2':
        bSetMenuA = false;
        bSetMenuB = false;
        bSetBackMenu= false;
        bSetMenuDirektion = true;

        IrSender.sendRC6(iAddress, iComand2, iRepeats);

        iZaehler2++;      

        break;

      //set the bool Direktion Menu 3 true
      case '3':
        bSetMenuA = false;
        bSetMenuB = false;
        bSetBackMenu=false;
        bSetMenuDirektion = true;

        IrSender.sendRC6(iAddress, iComand3, iRepeats);

        iZaehler3++;

        break;
 };

//-----------------------------------------------------------------------------
//*****************************************************************************
//-----------------------------------------------------------------------------

//Calibrate Arm
  if(cKey == '#'){
    IrSender.sendRC6(iAddress, iComandCalibrateArm, iRepeats);
  }
  //Send Robot Home
  else if (cKey=='0'){

    IrSender.sendRC6(iAddress, iComandSendHome, iRepeats);  
    display.printIGoHome();  
  }
  //Send Roboter Stop Comand (Error)
  else if(cKey=='C'){
    IrSender.sendRC6(iAddress, iComandError, iRepeats);
    display.printError();
  }


//-----------------------------------------------------------------------------
//******* methods that are activated via the bools in the Switch **************
//-----------------------------------------------------------------------------
  display.printMenuA(bSetMenuA);
  display.printMenuB(bSetMenuB, iZaehler1, iZaehler2, iZaehler3);
  display.printDirection(bSetMenuDirektion);



}
//-----------------------------------------------------------------------------
//*****************************************************************************
//-----------------------------------------------------------------------------




