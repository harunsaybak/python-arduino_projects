
#include <Servo.h>

Servo myservoX;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservoY;

int posY = 160;// ustte bulunan servonun yukari ve asagi hareketidir
int posX = 90; // altte bulunan servonun saga sola hareketidir
//gelen veri x birlesim y dir, 6 hanelidir
long veri=90;
int i=0;

String inString="";

void setup() {
  myservoX.attach(3);  // attaches the servo on pin 9 to the servo object
  myservoY.attach(6);
   
  myservoX.write(posX);              // tell servo to go to position in variable 'pos'
  myservoY.write(posY);
  Serial.begin(115200);
// Serial.println(veri);
}

void loop() {

    while(Serial.available()>0)
    { 
      int inChar = Serial.read();
    if (isDigit(inChar)) {
      // convert the incoming byte to a char and add it to the string:
      inString += (char)inChar;
    }
    // if you get a newline, print the string, then the string's value:
    if (inChar == '\n') {

       veri = inString.toInt();
     
     /* i++;
      Serial.println(i);
      Serial.println("******");
     */
     posY=veri%1000;
     posX=(veri-posX)/1000;
     // Serial.println(veri);
      
    //  Serial.print("Value:");
     // Serial.println(inString.toInt());
   //   Serial.print("String: ");
     // Serial.println(inString);
      // clear the string for new input:
      inString = "";
    }
    Serial.flush();
    
     
    }

    
    
    myservoX.write(posX);              // tell servo to go to position in variable 'pos'
    myservoY.write(posY);              // tell servo to go to position in variable 'pos'
    
  //  delay(100);                       // waits 15ms for the servo to reach the position
                  
}
