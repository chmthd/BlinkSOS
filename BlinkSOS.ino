void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //a 500ms delay has been added after each letter so that the message can be read clearly.
  delay(500); //added delay
    // Letter S
    for(int i = 0; i < 3; i++){
      digitalWrite(LED_BUILTIN, HIGH);
      delay(250);
      digitalWrite(LED_BUILTIN, LOW);
      delay(500);
    }
    delay(500);//added delay

    //Letter O
    for(int i = 0; i < 3; i++){
      digitalWrite(LED_BUILTIN, HIGH);
      delay(1000);
      digitalWrite(LED_BUILTIN, LOW);
      delay(500);
    }
    delay(500); // added delay 

    //Letter S
    for(int i = 0; i < 3; i++){
      digitalWrite(LED_BUILTIN, HIGH);
      delay(250);
      digitalWrite(LED_BUILTIN, LOW);
      delay(500);
    }
    delay(500); // added delay 
}
