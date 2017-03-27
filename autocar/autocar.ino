const int ledPin = 11;
//IR
//HC-SR04 Ultrasonic sensor http://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/
// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
// defines variables
long duration;
int distance;

//SOUND
const int buzzer = 12;

//L293D  https://www.youtube.com/watch?v=d7oFD-zQpuQ&t=5s
const int leftForward = 2;
const int leftBackward = 3;
const int rightForward = 4;
const int rightBackward = 5;

void setup() {
  pinMode(ledPin, OUTPUT); 
  
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  
  pinMode(buzzer, OUTPUT); // Sets the trigPin as an Output
  
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  pinMode(rightForward , OUTPUT);
  pinMode(rightBackward , OUTPUT);

    Serial.begin(9600); // Starts the serial communication
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance= duration*0.034/2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  if(distance < 10) {
    digitalWrite(ledPin , HIGH);
    digitalWrite(buzzer , HIGH);

  }else{
    digitalWrite(ledPin , LOW);
    digitalWrite(buzzer , LOW);

  }
  
  digitalWrite(leftForward , HIGH);
  digitalWrite(leftBackward , LOW);
  digitalWrite(rightForward , HIGH);
  digitalWrite(rightBackward , LOW);

}
