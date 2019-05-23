//Rube GOldberg Code
SparkFun Inventor's Kit for Arduino
Example sketch 12

SparkFun Motor Driver

Use the SparkFun Motor Driver to control the speed and direction of a motor

This sketch was written by SparkFun Electronics,
with lots of help from the Arduino community.
This code is completely free for any use.
Visit http://learn.sparkfun.com/products/2 for SIK information.
Visit http://www.arduino.cc to learn more about Arduino.
*/

//define the two direction logic pins and the speed / PWM pin
const int DIR_A = 13;
const int DIR_B = 12;
const int PWM = 11;
const int button = 10;
int redL = 2;
int yellow = 3;
int green = 4;
int blue = 5;
int redR = 6;
void setup()
{
//set all pins as output
pinMode(DIR_A, OUTPUT);
pinMode(DIR_B, OUTPUT);
pinMode(PWM, OUTPUT);
pinMode(redL, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(redR, OUTPUT);
}

void loop()
{
 int buttonState;
 buttonState = digitalRead(button);
 if (buttonState == LOW)
 {
 digitalWrite(redL,HIGH);
 delay(500);
 digitalWrite(yellow, HIGH);
 digitalWrite(green, HIGH);
 delay(500);
 digitalWrite(blue, HIGH);
 digitalWrite(redR, HIGH);
 delay(250);
 digitalWrite(redL,LOW);
 digitalWrite(yellow,LOW);
 digitalWrite(green,LOW);
 digitalWrite(blue,LOW);
 digitalWrite(redR,LOW);
 delay(100);
 digitalWrite(redL,HIGH);
 digitalWrite(yellow,HIGH);
 digitalWrite(green,HIGH);
 digitalWrite(blue,HIGH);
 digitalWrite(redR,HIGH);
 
 digitalWrite(DIR_A, HIGH);
 digitalWrite(DIR_B, LOW);
 analogWrite(PWM, 255);

 //wait 1 second
 delay(500);

 //Brake the motor by pulling both direction pins to 
 //the same state (in this case LOW). PWM doesn't matter
 //in a brake situation, but set as 0.
 digitalWrite(DIR_A, LOW);
 digitalWrite(DIR_B, LOW);
 analogWrite(PWM, 0);
 delay(500);
}
}
