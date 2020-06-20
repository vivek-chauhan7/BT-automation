/*
 * ER BROS LAB
 */

#define apa 8
#define apb 10
String btms;

void setup() {
  pinMode(apa, OUTPUT);
  pinMode(apb, OUTPUT);
  digitalWrite(apa, LOW);
  digitalWrite(apb, LOW);
  Serial.begin(9600);
  Serial.println("e r bros lab");
  
}

void loop() {
  if(Serial.available() ) {
    btms = Serial.readString();
    Serial.print(btms);
  }
  if(btms == "on light") { // change command for turn on the light ( if you want to set different voice command)
    digitalWrite(apa, HIGH);
    
  }
  if(btms == "turn on light") { // other command to turn on light
    digitalWrite(apa, HIGH);
   
  }
  if(btms == "light on") {// this also for light
    digitalWrite(apa, HIGH);
    
  }
  if(btms == "turn off light") { // for turn off light
    digitalWrite(apa, LOW);
    
  }
  if(btms == "off light") {// other for turn off light
    digitalWrite(apa, LOW);
    
  }
  if(btms == "light off") { // this is also of turn off light
    digitalWrite(apa, LOW);
    
  }

  
  if(btms == "on fan") { // for fan 
    digitalWrite(apb, HIGH);
    
  }
  if(btms == "turn on fan") {
    digitalWrite(apb, HIGH);
    
    delay(500);
  }
  if(btms == "fan on") {
    digitalWrite(apb, HIGH);
    
  }
  if(btms == "off fan") {
    digitalWrite(apb, LOW);
    
  }
  if(btms == "turn off fan") {
    digitalWrite(apb, LOW);
    
    delay(500);
  }
  if(btms == "fan off") {
    digitalWrite(apb, LOW);
    
  }
  if(btms == "both on") {
    digitalWrite(apa, HIGH);
    digitalWrite(apb, HIGH);
  }
  if(btms == "both off") {
    digitalWrite(apa, LOW);
    digitalWrite(apb, LOW);
  }
  if(btms == "both are turn on") { // for both
    digitalWrite(apa, HIGH);
    digitalWrite(apb, HIGH);
  }
  if(btms == "both are turn off") {
    digitalWrite(apa, LOW);
    digitalWrite(apb, LOW);
  }
  if (btms == "ON1") {
    digitalWrite(apa, HIGH);
  }
  if (btms == "OFF1") {
    digitalWrite(apa, LOW);
  }
  if (btms == "ON2") {
    digitalWrite(apb, HIGH);
  }
  if (btms == "OFF2") {
    digitalWrite(apb, LOW);
  }
  
  
  
}
