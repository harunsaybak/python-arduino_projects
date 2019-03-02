

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(2,OUTPUT); // led
}

String veri;
bool durum = true;


void loop() {

  
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
    {
      //durum=true;
      veri = Serial.read();
      //Serial.println(veri);
     
 /*   if(veri == 15 || veri == 1515)
        
     
      
    }
      
   */   
    durum=!durum;
   digitalWrite(2,durum);
   Serial.flush();
      
   }
    
    
   //  Serial.println(durum);
      
}
