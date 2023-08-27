# ArdoinoHID
This will program ardoino pro micro to use usb ttl as serial and also takes input  from usb ttl which is recognized as COM and send that input to ardoino's usb as keyboard
How to run:
Download the reposetory
To run the provided code on an Arduino Pro Micro, follow these steps:

 Set up the Arduino IDE:

   - Download and install the Arduino IDE from the official Arduino website ([https://www.arduino.cc/en/software). ↗](https://www.arduino.cc/en/software).)
   - Connect the Arduino Pro Micro to your computer using a USB cable.

 Open the Arduino IDE:

   - Launch the Arduino IDE on your computer.

Install Required Libraries:

   - Go to "Sketch" in the Arduino IDE menu.
   - Select "Include Library" and then "Manage Libraries."
   - In the Library Manager, search for and install the following libraries:
     - "SoftwareSerial" by Arduino
     - "Keyboard" by Arduino

Open HID Emulator.ino

   - Go to "File" and select Open and select HID Emulator.ino.

Select the Board and Port:

   - Go to "Tools" and select the appropriate board from the "Board" menu. In this case, select "Arduino Pro or Pro Mini."
   - Choose the correct port under the "Port" menu. The Pro Micro should appear as a serial port option. Select the corresponding port.

Upload the Sketch:

   - Click the "Upload" button (right-pointing arrow) in the Arduino IDE to compile and upload the sketch to the Arduino Pro Micro.
   - The IDE will display the status in the bottom console window, and the built-in LED on the Arduino Pro Micro will blink during the upload process.

 Verify:

   - Once the upload is complete, the code will start running on the Arduino Pro Micro.
   - The Arduino Pro Micro should be connected to a USB TTL converter using pins 8 and 9 for communication.

Note: Make sure the USB TTL converter is properly connected to the Arduino Pro Micro, and the correct pins are used (pin 8 for TXO and pin 9 for RXI). Also, ensure that the baud rate is set to 9600, both in the code (mySerial.begin(9600)) and in the serial monitor if you plan to use it for debugging.
