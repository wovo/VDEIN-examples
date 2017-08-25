void setup() {
   pinMode( LED_BUILTIN, OUTPUT );   // initialize digital pin LED_BUILTIN as an output.
}

void loop() {
  digitalWrite( LED_BUILTIN, HIGH ); // turn the LED on (HIGH is the voltage level)
  delay( 500 );                      // wait for a half a second
  digitalWrite( LED_BUILTIN, LOW );  // turn the LED off by making the voltage LOW
  delay( 500 );                      // wait for a half a second
}
