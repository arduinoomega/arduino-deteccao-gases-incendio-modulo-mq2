#define PIN_A A0
#define PIN_D 2
#define LED_VERMELHO 3
#define LED_VERDE 4
#define BUZZER 5

int analogico;
int digital;

void setup() {
   Serial.begin(9600);
   pinMode(PIN_A, INPUT);
   pinMode(PIN_D, INPUT);
   pinMode(LED_VERDE, OUTPUT);
   pinMode(LED_VERMELHO, OUTPUT);   
   pinMode(BUZZER, OUTPUT);      
}

void loop() {
   digital = digitalRead(PIN_D);
   analogico = analogRead(PIN_A); 
   Serial.print(analogico);
   if(digital == 0){
     digitalWrite(BUZZER, HIGH);
     digitalWrite(LED_VERMELHO, HIGH);
     digitalWrite(LED_VERDE, LOW);
   }else{ 
     digitalWrite(BUZZER, LOW);
     digitalWrite(LED_VERMELHO, LOW);
     digitalWrite(LED_VERDE, HIGH);
     delay(500);
   }
}
