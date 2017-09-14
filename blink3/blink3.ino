
class blinker {
private:

   bool level;
   long int last;
   long int interval;
   int pin;
   
public:   

   blinker( int p, long int t ){
      level = 0;                        // initial LED level: low
      last = micros();                  // initial last-update moment

      pin = p;                          // the number of the LED pin
      interval = t;                     // the microseconds between pin toggles

      pinMode( pin, OUTPUT );           // make the pin an output
   }

   void update( long int now ){
     if( ( now - last ) > interval ){   // last update is more than ‘interval’ ago?
        level = ! level;                   // toggle pin level 
        digitalWrite( pin, level );        // write it to the pin
        last = now;                        // remember when we did this
     }
  }

};

blinker led( LED_BUILTIN, 500 * 1000UL );  // create a blinker object

void setup(){}                             // no (other) setup actions needed

void loop() {
   long int now = micros();                // get the current time
   led.update( now );                      // the blinker object must update itself
}

