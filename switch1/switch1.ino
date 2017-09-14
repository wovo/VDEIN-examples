const int sw = 8;                              // the pin for the switch (d8) 
const int led = 9;                             // the pin for the LED (d9)

void setup(){
   pinMode( sw, INPUT_PULLUP );                // switch pin: input with pull-up
   pinMode( led, OUTPUT );                     // led pin: output
}

void loop() {
   digitalWrite( led, ! digitalRead( sw ));    // read switch, invert, write to LED
}

