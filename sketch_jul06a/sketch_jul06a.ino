#define a 0
#define b 1
#define c 3
#define d 4

const int tempo = 250;

void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
void loop() {
  for(int x=0; x<4; x++) {
    if (x == 0){
      digitalWrite(a, HIGH);
      
    }
    if (x == 1){
      digitalWrite(b, HIGH);
      
    }
    if (x == 2){
      digitalWrite(c, HIGH);
      
    }
    if (x == 3){
      digitalWrite(d, HIGH);
      
    }

    delay(tempo);

    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
  }
}
