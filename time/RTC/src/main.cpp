/** RTC Beispiel 
*/
#include "mbed.h"
 
DigitalOut myled( D10 );
 
int main()
{
 
    printf( "RTC example\n" );
    set_time( 1387188323 ); // Set RTC time to 16 December 2013 10:05:23 UTC
    printf( "Date and time are set.\n" );
 
    while(1) 
    {
        time_t seconds = time(NULL);
 
        printf( "time = %s", ctime(&seconds) );

        myled = !myled;
        wait(1);
    }
}                                   
   