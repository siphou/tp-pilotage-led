#define INTERRUPTEUR_ROUGE A0
#define INTERRUPTEUR_VERT A1
#define INTERRUPTEUR_BLEU A2

#define PIN_LED_ROUGE 9
#define PIN_LED_VERT 10
#define PIN_LED_BLEU 11

void setup() {
 
  pinMode(INTERRUPTEUR_ROUGE, INPUT);
  pinMode(INTERRUPTEUR_VERT, INPUT);
  pinMode(INTERRUPTEUR_BLEU, INPUT);

  pinMode(PIN_LED_ROUGE, OUTPUT);
  pinMode(PIN_LED_VERT, OUTPUT);
  pinMode(PIN_LED_BLEU, OUTPUT);
}

void loop() {
  analogWrite(PIN_LED_ROUGE, 255 * digitalRead(INTERRUPTEUR_ROUGE));
  analogWrite(PIN_LED_VERT, 255 * digitalRead(INTERRUPTEUR_VERT));
  analogWrite(PIN_LED_BLEU, 255 * digitalRead(INTERRUPTEUR_BLEU));
}
