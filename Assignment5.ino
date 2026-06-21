int startValue = 5;
int ledpin = 13;


void flashLED(int times){

  while(times>0){
    digitalWrite(ledpin,HIGH);
    delay(1000);
    digitalWrite(ledpin,LOW);
    delay(1000);
    times -- ;
  }
}
  void setup(){
    pinMode(ledpin, OUTPUT);
    Serial.begin(9600);

    Serial.println("========Smart Countdown Starting======");
    
    
    while(startValue > 0){
      Serial.print("count: ");
      Serial.println(startValue);
      flashLED(startValue);
      
      startValue --;
    }
    Serial.println("========Countdown complete========");
      }



void loop() {
  // put your main code here, to run repeatedly:

}
