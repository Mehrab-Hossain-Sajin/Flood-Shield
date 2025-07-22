// Define pins


//ultrasonic
const int trigPin = 9;   // Trig pin connected to D9
const int echoPin = 10;   // Echo pin connected to D10


//vibration
int vib_pin=7;
int led_pin=13;


// Variables for duration and distance
long duration;
int distance;


void setup() {
  //ultrasonic
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);


  //vibration
  pinMode(vib_pin,INPUT);
  pinMode(led_pin,OUTPUT);
}


void loop() {
  //Vibration
  int val;
  val=digitalRead(vib_pin);
  if(val==1)
  {
    digitalWrite(led_pin,HIGH);
    delay(1000);
    digitalWrite(led_pin,LOW);
    delay(1000);
   }
   else
   digitalWrite(led_pin,LOW);


  //ultrasonic
  // Clearing the trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
 
  // Sending a trigger pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // Measure the echo pulse duration
  duration = pulseIn(echoPin, HIGH);
 
  // Calculate distance in centimeters
  distance = duration * 0.034 / 2; //distance for water
  if  (distance <= 30){
    digitalWrite(led_pin,HIGH);
    delay(1000);
  }


  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
 
  delay(10); // Wait for a moment before the next measurement
}
