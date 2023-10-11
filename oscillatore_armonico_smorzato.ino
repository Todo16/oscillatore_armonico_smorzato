float m = 1.0;  // Massa del sistema in kg
float b = 0.1;  // Coefficiente di smorzamento in Ns/m
float k = 10.0; // Costante elastica in N/m
float x = 1.0;  // Posizione iniziale
float v = 0.0;  // Velocità iniziale
float dt = 0.1; // Passo di integrazione in secondi

void setup() {

  Serial.begin(9600);

}

void loop() {
  float a = (-b * v - k * x) / m; // Calcola l'accelerazione usando l'equazione differenziale
  v = v + a * dt; // Aggiorna la velocità usando l'integrazione di Eulero
  x = x + v * dt; // Aggiorna la posizione usando l'integrazione di Eulero
  Serial.print("posizione:");
  Serial.print(x);
  Serial.print(",");
  Serial.print("velocità:");
  Serial.print(v);
  Serial.print(",");
  Serial.print("accelerazione:");
  Serial.println(a);
 

  // Ora la variabile 'x' contiene la posizione del sistema al tempo corrente
  // Puoi utilizzare 'x' nel tuo programma per controllare qualcosa, ad esempio un motore o un LED.
  
  delay(10); // Aggiorna ogni 1000 millisecondi (o adatta questo valore alla tua applicazione)
}

