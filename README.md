# ECOTRONS Telemetry

Note that this is for V1.2 of the broadcast document.

To use this library, pass in a `USARTSerial` object into the constructor and call `begin()` to initialize it. Then, to actually get the data, put `onSerialData()` on a timer (or some sort of continuous loop) to refresh the data as it's being broadcast. It should be called at intervals less than 100ms as that is the broadcast rate of the ECU.

To get the data, use the getters. 
