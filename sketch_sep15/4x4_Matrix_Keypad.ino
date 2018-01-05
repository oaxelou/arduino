/*
 * 4x4 Matrix Keypad connected to Arduino
 * This code prints the key pressed on the keypad to the serial port
 */
 #include <Keypad.h>

 const byte numRows = 4; //number of rows on the kyepad
 const byte numCols = 4; // omoiws

 //keymap defines the key pressed according to the row and the
 //columns just as appears onthe keypad
 char keymap[numRows][numCols] = {{'1', '2', '3', 'A'},
                                  {'4', '5', '6', 'B'},
                                  {'7', '8', '9', 'C'},
                                  {'*', '0', '#', 'D'}};

 //code that shows the keypad connections to the arduino terminals
 byte rowPins[numRows] = {9,8,7,6}; //rows 0 to 3
 byte colPins[numCols] = {5,4,3,2}; //columns 0 to 3

 //initializes an instance of the Keypad class
 Keypad myKeypad = Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);

 void setup(){
  Serial.begin(9600);
 }

 //if key is pressed, this key is stored in 'keypressed' variable
 //if key is not equal to 'NO_KEY', then this key is printed out
 //if count=17, then count is reset back to 0 (this means no key is pressed
 //during the whole keypad scan process
 
void loop() {
  char keypressed = myKeypad.getKey();
  if(keypressed != NO_KEY){
    Serial.print(keypressed);
  }
}
