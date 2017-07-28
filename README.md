IoTKitV2
========

IoTKit V2 Beispiele und Dokumentation


## GPIO

Allzweckeingabe/-ausgabe (engl. GPIO - General Purpose Input/Output) ist ein allgemeiner Kontaktstift (Pin) an einem Mikrocontroller, dessen Verhalten, unabhängig, ob als Eingabe- oder Ausgabekontakt, durch logische Programmierung frei bestimmbar ist. GPIO-Kontakten ist kein Zweck vorgegeben, sie sind daher standardmäßig unbelegt.

Mittels folgender Grundklassen kann den GPIO Pins ein Zweck vorgegeben werden:

* [DigitalOut](gpio/DigitalOut/)
* [DigitalIn](gpio/DigitalIn/) und [DigitalInBoard](gpio/DigitalInBoard/)
* [AnalogIn](gpio/AnalogIn/)
* [PwmOut](gpio/PwmOut/) und [PwmOutPeriod](gpio/PwmOutPeriod/)

## Sensoren

Sensoren sind technische Bauteile, die Eigenschaften der Umgebung (z. B.: Wärmestrahlung, Temperatur, Feuchtigkeit, Druck, Schall, Helligkeit oder Beschleunigung) erfassen und in ein weiter verarbeitbares elektrisches Signal umformen.

Sensoren im IoTKit V2:

* [HallSensor](sensors/HallSensor/)
* [LichtSensor](sensors/LichtSensor/)
* [PIRSensor](sensors/PIRSensor/)
* [TemperaturSensorExtern](sensors/TemperaturSensorExtern/)
* [UltraschallSensor](sensors/UltraschallSensor/)
* [UltraschallSensor_LowLevelV2](sensors/UltraschallSensor_LowLevelV2/)

