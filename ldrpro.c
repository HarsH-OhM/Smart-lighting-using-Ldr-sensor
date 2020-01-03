int x; // input of LDR
int y; // o/p Pwm value to be given to the base of the transistor to get reduced o/p voltagevoid setup() {
void setup() {
pinMode(A0,INPUT);
pinMode(6,OUTPUT);
Serial.begin(9600);
}
void loop() {
x= analogRead(A0);// analog input from the pin A0 connected to LDR and POT. end
y= map(x,0,1023,0,255); // Mapping or converting the value bw minimum to maximum analog value to the pwm value
analogWrite(6,y); // Writing this analog value to pin 6 which is connected to the base of the transistor to get reduced o/p voltage
Serial.print("LDR input"); 
Serial.print(x);
Serial.print("\t");
Serial.print("O/P PWM value");
Serial.print(y);
Serial.println();
delay(1000); //delay value in ms
}
 
 