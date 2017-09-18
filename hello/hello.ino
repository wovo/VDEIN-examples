void setup() {
  Serial.begin( 9600 );                     // initialize communication to the PC
}

void loop() {
  Serial.print( "Hello world!\n" ); 
  delay( 2000 );                            // wait a bit
}  

