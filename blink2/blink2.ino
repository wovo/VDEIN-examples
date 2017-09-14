void setup() {
   pinMode( LED_BUILTIN, OUTPUT );   // initialize digital pin LED_BUILTIN as output    
}

bool level = 0;                      // the current state of the LED, initially low
long int last = micros();            // the startup ‘moment’

void loop() {
  long int now = micros();           // get the current time
  if( ( now - last ) > 500000 ){     // more than 500 ms since the last LED change?
     level = ! level;                     // toggle LED state
     digitalWrite( LED_BUILTIN, level );  // write it to the LED
     last = now;                          // remember this moment in time
  }
}

