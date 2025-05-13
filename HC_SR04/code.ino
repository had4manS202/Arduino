const int trig = 6;
const int echo = 7;
long totaltime;
int distance;
void setup() {
  
pinMode(trig, OUTPUT); 
pinMode(echo, INPUT);
Serial.begin(9600); 
}
void loop() {
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
totaltime = pulseIn(echo, HIGH);
distance= totaltime*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);
}