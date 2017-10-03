/** LED User Interface - wenn alles i.o. blink gruene LED, bei Fehler die rote
 *  Zusaetzlich wird bei Fehler einen Fehlermeldung auf der Console ausgegeben.
*/
#include "mbed.h"

DigitalIn  button( A2 );
DigitalOut led(LED_GREEN);

int main()
{
    // Button nicht gedrueckt - Programm laeuft normal
    while  ( button )
    {
        led = ! led;
        wait( 1.0f );
    }
        
    // Button gedrueckt - Fehler: Rote LED auf Board blinkt schnell
    led = 1;
    error( "Abbruch" );
    return  ( -1 );
}