## Real Time Clock (RTC)

![](../../images/Time.png)

- - -

Der mbed Mikrocontroller hat eine integrierte Echtzeituhr - engl. Real Time Clock (RTC)

Die Zeit geht beim Entfernen des Stromes verloren, bzw. wird auf die Unix Epoche zurückgesetzt, und muss neu gesetzt werden.

Das verbreitetste Verfahren die Uhrzeit zu setzen ist, die Uhrzeit von einem oder mehreren Zeitservern zu erfragen, siehe [Network Time Protocol](http://de.wikipedia.org/wiki/Network_Time_Protocol).

### Anwendungen

*   Alle Arten von Zeitsteuerungen, wie Aktoren (Licht, Heizung etc.) zu einem bestimmten Zeitpunkt ein- und Ausschalten.

### Links

* [mbed OS V2 Variante](http://developer.mbed.org/teams/smdiotkitch/code/RTC/) 
* [Library Update: Real-Time Clock](https://os.mbed.com/blog/entry/103/)