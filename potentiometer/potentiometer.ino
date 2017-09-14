const int potentiometer = A0;               // pin for the voltage input: a0

void setup() {
  Serial.begin( 9600 );                     // initialize communication to the PC
}

void loop() {
  int p = analogRead( potentiometer );     // read the voltage input
  Serial.print( "\nsensor = " );           // print the value to the PC
  Serial.print( p );
  delay( 200 );                            // wait a bit 
}

