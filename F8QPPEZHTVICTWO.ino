                       
#define RELAY1  7 
int motion_1 = 3;
                       
void setup()

{    


Serial.begin(9600);
  pinMode(RELAY1, OUTPUT);
  pinMode (motion_1,INPUT);       

}

  void loop()

{
    //digitalWrite(RELAY1,1);  // 0-OFF 1-ON
   //digitalWrite(RELAY1,0);           // Turns ON Relays 1
   //Serial.println("Light ON");
   //delay(2000);                                      // Wait 2 seconds

   //digitalWrite(RELAY1,1);          // Turns Relay Off
   //Serial.println("Light OFF");
   //delay(2000);
  //digitalWrite (light_1,LOW);
  //delay(1000); //this delay is to let the sensor settle down before taking a reading
  int sensor_1 = digitalRead(motion_1);
  //if (sensor_1 == LOW)
  //{
  //  digitalWrite(RELAY1,0);
  //  //delay(500);
  //}
  if (sensor_1 == HIGH)
  {
    digitalWrite(RELAY1,1);
    delay(50000);
  }

  int sensor_2 = digitalRead(motion_1);
  if (sensor_1 == 0)
  {
    digitalWrite(RELAY1,0);
    delay(1000);
  }
}
