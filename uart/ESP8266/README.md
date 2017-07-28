## ESP 8266 WLAN Modem (UART)

![](../../images/actors/ESP8266.png) 

[ESP 8266 WLAN Modem](http://www.esp8266.com/wiki/doku.php)

- - -

Das ESP8266 Bauteil ist ein WLAN Modem welches über die Serielle Schnittstelle (UART) angesprochen werden kann.

Auf dem SMD Shield befindet sich oben rechts ein Steckplatz, wo das WLAN Modem eingesteckt und mittels Drahtbrücken mit einem UART auf dem mbed Board verbunden werden kann.

Dazu gibt es zwei Möglichkeiten:

*   Verbinden der Stecker, neben dem WLAN Modem über Kreuz. Das Modem ist mit den Pin A2 und A3 (UART3) verbunden.
*   Verbinden der Stecker (oben) mit dem Serial Stecker (obere zwei Pin&#039;s). Das Modem ist mit den Pin D0 und D1 (USBTX, USBRX))) verbunden.

Weitere nützliche Informationen zum ESP8266 sind in diesem [Blog](https://orxor.wordpress.com/2015/01/30/esp8266-intro/) zu finden. Ausserdem existiert eine [ESP8266 Gruppe](https://developer.mbed.org/teams/ESP8266/).

Wenn das Modem nicht reagiert, Board 5 - 10 Sekunden vom USB und Strom trennen.

### WLAN Modem Konfiguration (UART)

Zum Konfigurieren eignet sich am Besten der PL2303HX Converter USB To RS232 TTL der wie folgt mit dem Modem zu verbinden ist:

*   Weises Kabel - mit TXD (Transmit - links neben dem Modem) verbinden
*   Grünes Kabel - mit RXD (Receive - rechts neben dem Modem) verbinden

Das Rote und Schwarze Kabel wird nicht benötigt. Die Baudrate ist auf 115200 einzustellen.

Es sind folgende AT Befehle verfügbar:

*   **AT+RST** - Reboot Modem
*   **AT+GMR** - Ausgabe SW Version
*   **AT+CWMODE=1** - WLAN Modem als Client (Station) konfigurieren
*   **AT+CWJAP="mcbmobile_2EX","android%123"** - mit Access Point mcbmobile_2EX verbinden
*   **AT+CIFSR** - Ausgabe der IP-Adresse

[Verzeichnis AT Commandos.](https://room-15.github.io/blog/2015/03/26/esp8266-at-command-reference/)