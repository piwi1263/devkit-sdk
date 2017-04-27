void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

int val = 0;

void loop() 
{  
  Serial.println("[Analog I/0]: Test analyWrite()");
  val= analogRead(ARDUINO_PIN_A2);
  analogWrite(LED_BUILTIN, val/4);

  Serial.println("[Analog I/0]: Done");
  delay(1000);
}