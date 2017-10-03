/** Ticker Beispiel
*/
#include "mbed.h"
 
Ticker flipper;
DigitalOut led1( D10 );
DigitalOut led2( D11 );
 
void flip() 
{
    led2 = !led2;
}
 
int main() 
{
    led2 = 1;
    flipper.attach( &flip, 2.0 ); // Zuweisen der Funktion flip an Ticker und Aufruf alle 2 Sekunden
 
    // main loop - welches durch Ticker alle 2 Sekunden unterbrochen wird.
    while( 1 ) 
    {
        led1 = !led1;
        wait(0.2);
    }
}      