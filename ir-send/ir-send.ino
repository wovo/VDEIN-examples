#include <IRremote.h>

IRsend irsend;

void setup(){}

void loop() {
	for( int i = 0; i < 10; i++ ){
		irsend.sendNEC( i, 32 );
		delay( 1000 );
	}
}
