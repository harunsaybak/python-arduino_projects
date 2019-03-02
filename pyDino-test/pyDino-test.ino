String inString="";

void setup() { 
  Serial.begin(115200); //initialize serial COM at 9600 baudrate
 

}
 
void loop() {
  // Read serial input:
  while (Serial.available() > 0) {
    int inChar = Serial.read();
    if (isDigit(inChar)) {
      // convert the incoming byte to a char and add it to the string:
      inString += (char)inChar;
    }
    // if you get a newline, print the string, then the string's value:
    if (inChar == '\n') {
      Serial.print("Value:");
      Serial.println(inString.toInt());
   //   Serial.print("String: ");
     // Serial.println(inString);
      // clear the string for new input:
      inString = "";
    }
    Serial.flush();
  }
}
