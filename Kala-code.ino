#include <SoftwareSerial.h>
#include <Keyboard.h>

SoftwareSerial mySerial(9, 8); // RXI, TXO pins of the Arduino Pro Micro connected to the TX, RX pins of the USB TTL converter

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600); // Initialize the software serial port with the same baud rate as the USB TTL converter
  Keyboard.begin(); // Initialize the Keyboard library
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (mySerial.available()) {
    char data = mySerial.read();
    Keyboard.write(data);
  }

  }


