int readPin=A0;
int light=LED_BUILTIN;
int val;

void setup() {
    pinMode(light, OUTPUT);
    pinMode(readPin, INPUT);
    Serial.begin(9600);
}

void loop() {
  val=analogRead(readPin);
  if (val>511){
    digitalWrite(light, LOW);
    Serial.println("OFF");
}

  else{
    digitalWrite(light, HIGH);
    Serial.println("ON");
}
  delay(500);
}
