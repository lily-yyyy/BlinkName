//blinking LED to show morse code of my first name:MENGYAO

int led1 = D7; // Instead of writing D7 over and over again, we'll write led1
// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.
int unit = 500; //define a unit duration

//blinks a dot
void dot(){
    digitalWrite(led1, HIGH);
    delay(unit);
    digitalWrite(led1, LOW);
    delay(unit);
}

//blinks a dash
void dash(){
    digitalWrite(led1, HIGH);
    delay(unit*3);
    digitalWrite(led1, LOW);
    delay(unit);
}

//blink new character
void new_char(){
    delay(unit*2);
}

//duration between new words
void new_word(){
    delay(unit*5);
}

void setup() {
  
  pinMode(led1, OUTPUT);//calling led1 as output

}

void loop() {
  //M(--)
  dash();
  dash();
  new_char();
  
  //E(.)
  dot();
  new_char();
  
  //N(-.)
  dash();
  dot();
  new_char();
  
  //G(--.)
  dash();
  dash();
  dot();
  new_char();
  
  //Y(-.--)
  dash();
  dot();
  dash();
  dash();
  new_char();
  
  //A(.-)
  dot();
  dash();
  new_char();
  
  //O(---)
  dash();
  dash();
  dash();
  
  new_word();
}
