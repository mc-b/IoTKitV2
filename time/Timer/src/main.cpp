/** Timer Beispiel
*/
#include "mbed.h"
 
Timer t;
 
int main() 
{
    t.start();
    printf( "Zeitkritische Ausgabe!\n" );
    t.stop();
    printf( "Zeit fuer printf %f Sekunden\n", t.read() );
} 