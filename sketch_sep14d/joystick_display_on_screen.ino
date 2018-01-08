/*
 * Olympia Axelou
 * 14 September 2016
 *
 * Joystick basic 'game'!
 * Moving joystick and a dot following the movement on laptop screen 
 * 
 */

 //set pin numbers for switch, joystick axes, and LED:
 const int switchPin = 3; //switch to turn on and off mouse control
 const int xAxis = A0; //joystick X axis
 const int yAxes = A1; //joystick Y axis
 const int ledPin = 5; //Mouse control LED
 
 //parameters fir reading the joystick:
 int range = 12; //output range of X or Y movement
 int responseDelay = 100; //response delay of the mouse, in ms
 int threshold = range / 4; //resting threshold
 int center = range / 2; //resting position value

 boolean mouseIsActive = false; //whether or not to control the mouse
 int lastSwitchState = LOW; //previoys swith state
 
 void setup() {
  pinMode( switchPin, INPUT); //the switch pin
  pinMode( ledPin, OUTPUT); //the LED pin
  
  Serial.begin(9600);
  Serial.println("Hello");
  delay(2000);
}

void loop() {
  //read the switch:
  int switchState = digitalRead( switchPin );
  //if it's changed and it's high, toggle the ouse state:
  if( switchState != lastSwitchState ){
    if( switchState == HIGH ){
      mouseIsActive = !mouseIsActive;
      //turn on LED to mouseIsActive
      digitalWrite (ledPin, mouseIsActive);
    }
  }
  //save switch state for next comparison:
  lastSwitchState = switchState;

  //read and scale the two axes:
  int xReading = readAxis (A0);
  int yReading = readAxis (A1);

  //if the mouse control state is active, move the mouse:
  if( mouseIsActive){
    /*Serial.print(". ");
    for(int i=0; i<14; i++){
      Serial.print(" . "); 
    }
    
    Serial.println();
    */
    for(int i=-6; i<=6; i++){
      Serial.print("          . ");
      for(int j=-6; j<=6; j++){
        if(xReading == i && yReading == -j){
          Serial.print(" * ");
        }
        else{
          Serial.print("   ");
        }
      }
      Serial.println(" .");
    }

    delay(responseDelay);
  }
}
/*
 * reads an axis (0 or 1 for x or y) and scales the
 * analog input range to a range from 0 to <range>
 */

int readAxis(int thisAxis){
  //read the analog input:
  int reading = analogRead(thisAxis);

  //map the reading from the analog input range to the output range:
  reading = map(reading, 0, 1023, 0, range);

  //if the output reading is outside from the
  //rest position threshold, use it:
  int distance = reading - center;

  if(abs(distance) < threshold) {
    distance = 0;
  }

  //return the distance dor this axis:
  return distance;
}
