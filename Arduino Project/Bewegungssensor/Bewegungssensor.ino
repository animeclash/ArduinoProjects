//Bewegungssensor


//Initialisierung der Variablen
// Port 11 für den Motionsensor & Port 12 für das LED
int pirPin = 1;
int ledPin = 13;

// Die Vairablen werden den Ports zugewiesen
// Der Motionsensor als Input Variabel und das LED als Output
void setup() {
      Serial.begin(9600);
      pinMode(pirPin, INPUT);
      pinMode(ledPin, OUTPUT);
  }

 // Bewegungssensor wird einer Variabel zugewiesen
 // Wenn dieser nun Bewegungen erkennt schickt er ein Signal an das LED und diese Leuchtet daraufhin
  void loop() {
      int motionDetection = digitalRead(pirPin);
      digitalWrite(ledPin, motionDetection);  
  }
