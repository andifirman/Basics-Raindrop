/*
  Andi Firmansyah
  Unikom CodeLabs 
*/

const int raindrops = 7;

void setup() {
  Serial.begin(9600);
  pinMode(raindrops, INPUT);
}

void loop() {
  int val = digitalRead(raindrops);
  if(val == LOW){
    Serial.println("Rain detected!");
    delay(1000);
  }else{
    Serial.println("No value detected...");
    delay(1000);
  }
}
