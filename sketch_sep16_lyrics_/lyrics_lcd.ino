/*
 * Lyrics : CENTURIES - FALL OUT BOY
 * 
 * Printed on LCD
 */
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

const int buttonPin = 8;
int buttonValue = 0;

void setup() {
  lcd.begin(16,2);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonValue = digitalRead(buttonPin);
  if(buttonValue == HIGH){
    printLyrics();
    lcd.clear();
    buttonValue = LOW;
  }
}

void refrain(){
  lcd.setCursor(0,0);
  lcd.print("Some legends");
  lcd.setCursor(0,1);
  lcd.print("are told");
  delay(2000);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Some turn to");
  lcd.setCursor(0,1);
  lcd.print("dust or to gold");
  delay(2600);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("But you will");
  lcd.setCursor(0,1);
  lcd.print("remember me");
  delay(3700);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Remember me");
  delay(1500);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("For centuries");
  delay(1500);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Just one mistake");
  delay(2300);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Is all it");
  lcd.setCursor(0,1);
  lcd.print("would take");
  delay(2100);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("We'll go down");
  lcd.setCursor(0,1);
  lcd.print("in history");
  delay(3500);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Remember me");
  delay(1400);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("For centuries");
  delay(1500);

  lcd.clear();
  delay(7800);
  
  lcd.setCursor(0,0);
  lcd.print("Remember me");
  delay(1400);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("For centuries");
  delay(1500);

  lcd.clear();
}

void firstCouple(){
  lcd.setCursor(0,0);
  lcd.print("Mummified my");
  lcd.setCursor(0,1);
  lcd.print("teenage dreams");
  delay(2400);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("No, it's nothing");
  lcd.setCursor(0,1);
  lcd.print("wrong with me");
  delay(2400);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("The kids are");
  lcd.setCursor(0,1);
  lcd.print("all wrong");
  delay(1200);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("The stories");
  lcd.setCursor(0,1);
  lcd.print("are off");
  delay(1400);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Heavy metal");
  lcd.setCursor(0,1);
  lcd.print("broke my");
  delay(2000);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("  HEART !");
  delay(800);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Come on");
  lcd.setCursor(0,1);
  lcd.print("Come on");
  delay(1000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("And let me in");
  delay(1800);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("The bruises on");
  lcd.setCursor(0,1);
  lcd.print("your thighs");
  delay(900);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("like my");
  lcd.setCursor(0,1);
  lcd.print("fingerprints");
  delay(1800);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("And this is for");
  lcd.setCursor(0,1);
  lcd.print("tonight");
  delay(1400);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Thought that you");
  lcd.setCursor(0,1);
  lcd.print("would feel");
  delay(1400);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("I never meant");
  lcd.setCursor(0,1);
  lcd.print("for you to fix");
  delay(2000);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("  YOURSELF !");
  delay(3000);

  lcd.clear();
  delay(3000);
}

void secondCouple(){

  lcd.setCursor(0,0);
  lcd.print("And I can't stop");
  lcd.setCursor(0,1);
  lcd.print("'til the whole");
  delay(1400);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("world knows");
  lcd.setCursor(0,1);
  lcd.print("my name");
  delay(1700);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Cause I was only");
  delay(800);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("born inside");
  lcd.setCursor(0,1);
  lcd.print("my dreams");
  delay(1800);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Until you die");
  lcd.setCursor(0,1);
  lcd.print("for me, ");
  delay(1200);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("as long as");
  lcd.setCursor(0,1);
  lcd.print("there's a light");
  delay(1300);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("My shadows");
  lcd.setCursor(0,1);
  lcd.print("over you");
  delay(1200);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Cause I am the");
  delay(1600);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("  opposite of");
  lcd.setCursor(0,1);
  lcd.print("    AMNESIA!");
  delay(5200);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("And you're a");
  lcd.setCursor(0,1);
  lcd.print("cherry blossom");
  delay(1400);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("You're about");
  lcd.setCursor(0,1);
  lcd.print("to bloom");
  delay(1500);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("You look so");
  lcd.setCursor(0,1);
  lcd.print("pretty,");
  delay(1200);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("but you're gone");
  lcd.setCursor(0,1);
  lcd.print("so soon");
  delay(3000);

  lcd.clear();
  delay(3700);

}

void thirdCouple(){
  lcd.setCursor(0,0);
  lcd.print("We've been here");
  lcd.setCursor(0,1);
  lcd.print("forever");
  delay(5000);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("And here's");
  lcd.setCursor(0,1);
  lcd.print("the frozen proof");
  delay(5500);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("I");
  delay(1800);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("could screamm");
  lcd.setCursor(0,1);
  lcd.print("forever");
  delay(3500);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("We are the");
  lcd.setCursor(0,1);
  lcd.print("poisoned youth");
  delay(5000);

  lcd.clear();
  delay(11200);
}
void printLyrics(){
  
  refrain();
  delay(500);
  firstCouple(); 

  refrain();
  secondCouple();
  
  refrain();
  delay(500);
  thirdCouple();
  
  refrain();
  //lcd.print(" <3 :D <3 :D <3 ");
  //delay(3000);
}

