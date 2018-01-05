/*
 * NEW BORN - MUSE :D
 *
 * Used a passive buzzer and leds to implement a piano
 */

 #define RE 293 //8
 #define REd 311 //7
 #define MI 329 //6
 #define FAd 367 //5
 #define SOL 392 //4
 #define SI 493 //3
 #define NTO 523 //2

 int tune1[] = {SI , SOL , MI, SOL};
 int led1[] = {3, 4, 6, 4};
 int tune2[] = {SI , FAd, REd, FAd};
 int led2[] = {3, 5, 7, 5};
 int tune3[] = {NTO, SOL, MI , SOL};
 int led3[] = {2, 4, 6, 4};
 int tune4[] = {SI , SOL, RE , SOL};
 int led4[] = {3, 4, 8, 4};

 float durt[] = {.5, .5, .5, .5};

 int length;
 int tonepin = 11;

 void setup(){
  pinMode(tonepin, OUTPUT);
  length = sizeof(tune1) / sizeof(tune1[0]);

  for(int i = 2; i<9; i++){
    pinMode(i, OUTPUT);
  }
 }

 void loop(){

    delay(1000);
    
    for(int i = 0; i<2; i++){
      playtune(tune1, led1);
      playtune(tune1, led1);

     playtune(tune2, led2);
     playtune(tune2, led2);
   }
   playtune(tune1, led1);
   playtune(tune1, led1);

   playtune(tune3, led3);
   playtune(tune3, led3);

   playtune(tune4, led4);
   playtune(tune4, led4);

   playtune(tune2, led2);
   playtune(tune2, led2);

   delay(1000);
 }

 void playtune(int tune[], int ledp[]){
  for(int i = 0; i<length; i++){
    tone(tonepin, tune[i]);
    digitalWrite(ledp[i], HIGH);
    delay(400*durt[i]);
    digitalWrite(ledp[i], LOW);
    noTone(tonepin);
  }
  //delay(50);
 }

