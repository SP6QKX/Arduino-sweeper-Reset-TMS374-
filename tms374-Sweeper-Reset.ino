// Easy tool popular called Sweeper to help reset TMS374 used in many vehicle ECU / ECM
// this is easy variable frequency generator square wave using cheap ARDUINO
// Signal Output ARDUINO PORT 10 to connect RESET PIN ( EPROM 28C512 PIN22 ) if (EPROM 27C512 PIN23)  in PLCC CASE
//------------------------------------------------------------------------------------------------------------------
int bright = 0;
int fade = 1;
void setup() {
pinMode(10, OUTPUT);       // Output Port 10
pinMode(13, OUTPUT);       // Output Port 13 
digitalWrite(13, HIGH);    // LED ON 
delay (500);
digitalWrite(13, LOW);    // LED OFF
delay (500);
digitalWrite(13, HIGH);   // LED ON 
delay (500);
}
void loop() {
digitalWrite(10, HIGH);
delayMicroseconds (bright); 
digitalWrite(10, LOW);
delayMicroseconds (bright);  
bright = bright + fade;
if (bright <= 0 || bright >= 6000) {
fade = -fade;
  } ;
}
//--------------------------------------------------------------------------------------------------------------
// That all folks :) vy73 De Daniel SP6QKX . 24.03.2018 
// www.qrz.com/db/sp6qkx
