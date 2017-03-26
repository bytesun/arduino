const int ledpin = 12;
const int ledpin11 = 11;
const int pin=10;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(ledpin11, OUTPUT);
  pinMode(pin,OUTPUT);
}

void loop() {
 digitalWrite(ledpin, HIGH);
 delay(50);
 digitalWrite(ledpin, LOW);
 delay(50);

 digitalWrite(ledpin11, HIGH);
 delay(50);
 digitalWrite(ledpin11, LOW);
 delay(50); 

 digitalWrite(pin, HIGH);
 delay(50);
 digitalWrite(pin, LOW);
 delay(50); 
 
}
