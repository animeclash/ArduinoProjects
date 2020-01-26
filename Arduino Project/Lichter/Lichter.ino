// Lichterkette

//Lichter und Buttons werden zu den jeweiligen Pins definiert
// Da es mehrere Lichter sind wird ein Array verwendet
int button = 1;
int leds[] = {13, 11, 9, 7, 5};


// Die Lichter werden als Output definiert
void setup(){
  Serial.begin(9600);

  for(int led = 0; led < 5; led++){
     pinMode(leds[led],OUTPUT);
  }
}

//Der BUtton wird als Input definiert
//Wenn ein Buttonklick erkennt wurde beginnen die Lichter zu leuchten
//2 verschiedene For Schleifen um die 2 Lichterabfolgen zu initialisieren
void loop(){
  int s = digitalRead(button);
  if(s == 0){
    for(int led = 0; led < 5; led++){
      digitalWrite(leds[led], HIGH);
      delay(100);
      digitalWrite(leds[led], LOW);
    }

     for(int led = 4; led >= 0; led--){
      digitalWrite(leds[led], HIGH);
      delay(100);
      digitalWrite(leds[led], LOW);
    }
  }

  // Wenn kein Buttonklick erkannt wurde hören die lichter auf zu Leuchten
  else {
    for(int led = 0; led < 5; led++){
      digitalWrite(leds[led], LOW);
    }   
  }
  
}
