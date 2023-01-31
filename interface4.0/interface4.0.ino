#include "Interface.h"

#include <Arduino.h>
#include <Keypad.h>
#include <Wire.h>
CDisplay display;

const int ROW_NUM = 4; //four rows
const int COLUMN_NUM = 4; //four columns

char keys[ROW_NUM][COLUMN_NUM] = {
  {'1','2','3', 'A'},
  {'4','5','6', 'B'},
  {'7','8','9', 'C'},
  {'*','0','#', 'D'}
};

byte pin_rows[ROW_NUM] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

void setup() {
  // put your setup code here, to run once:
   
  display.setUpDisplay();

  display.printMenu();
  Serial.begin(9600);

  
}

void loop() {
 
//   char key = keypad.getKey();
//   char keyInt;
//   bool setGoStatus = false;
//   bool setMenuA = false;
//   bool setMenuB = false;

// if (key == 'A'){
//   setGoStatus = 0;
//   setMenuB = 0;
//   setMenuA = 1;
// }
// if(key=='B'){
//   setGoStatus = 0;
//   setMenuA = 0;
//   setMenuB = 1;
// }

// display.printMenuA(setMenuA, key);
// display.printMenuB(setMenuB);
  // put your main code here, to run repeatedly:
  
  
 
  // switch(key){

  //   case 'A':
  //   display.printMenuA(key);
  //  break;
   
    


  // case 'B':
  // display.printMenuB(key);
  // break;
  
  // }
   
   if(key == 'A'){
     setGoStatus= 0;
     display.printMenuA();
     display.setDirKey(key);
   }
   if(key=='1'){
     setGoStatus= 1;
     display.printDirection(setGoStatus);
     
   }

  // // //  if(display.cLocaKey =='1'){
  // // //    display.printDirection(setGoStatus);
  // // //  }
  // //   // display.printDirection(display.printMenuA(key),setGoStatus);
     
   

   if(key=='B'){
     setGoStatus=0;
     display.printMenuB();
   }


  
  // if(key =='A'){
  // display.printDirection(setGoStatus);
  // }

}
