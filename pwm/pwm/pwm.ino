class pwm {
private:
   int pin, percentage, count;
   unsigned long last = 0;
   
public:

   pwm( int p ){
      pin = p;
      percentage = 0;
      count = 0;
      pinMode( pin, OUTPUT );
   }

   void set( int p ){
      percentage = p;
   }
           
   void update( unsigned long now ){
      if( now - last > 10UL ){
         count = ( count + 1 ) % 100;
         digitalWrite( pin, count < percentage );
         last = now;   
      }
   }
};

const int led = 9;
const int potmeter = A0;

pwm led_dimmer( led );

void setup(){}

void loop(){   
   unsigned long now = micros();
   led_dimmer.update( now );
   
   int val = analogRead( potmeter );  
   int p =  map( val, 0, 1023, 0, 100 );
   led_dimmer.set( p );
}
