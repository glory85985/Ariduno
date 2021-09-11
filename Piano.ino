int tonePin =11;
int b1 = 4;
int b2 = 5;
int b3 = 6;
int b4 = 7;
int b5 = 8;

void setup() {
  pinMode(tonePin, OUTPUT);
  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  pinMode(b3, INPUT_PULLUP);
  pinMode(b4, INPUT_PULLUP);
  pinMode(b5, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(b1)==LOW){
    tone(tonePin, 2000);
  }
  else if(digitalRead(b2)==LOW){
    tone(tonePin, 2500);
  }
  else if(digitalRead(b3)==LOW){
    tone(tonePin, 3000);
  }
  else if(digitalRead(b4)==LOW){
    tone(tonePin, 4000);
  }
  else if(digitalRead(b5)==LOW){
    tone(tonePin, 5000);
  }
  else{
    tone(tonePin, 0);
  }

}
