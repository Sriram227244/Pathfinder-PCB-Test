int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;
int BUT4 = D3;

int LED1 = D4;
int LED2 = D5;
int LED3 = D6;
int LED4 = D10;

bool s1 = 0, s2 = 0, s3 = 0, s4 = 0;

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT3, INPUT_PULLUP);
  pinMode(BUT4, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  if (digitalRead(BUT1) == LOW) {
    s1 = !s1;
    digitalWrite(LED1, s1);
    delay(200);
  }

  if (digitalRead(BUT2) == LOW) {
    s2 = !s2;
    digitalWrite(LED2, s2);
    delay(200);
  }

  if (digitalRead(BUT3) == LOW) {
    s3 = !s3;
    digitalWrite(LED3, s3);
    delay(200);
  }

  if (digitalRead(BUT4) == LOW) {
    s4 = !s4;
    digitalWrite(LED4, s4);
    delay(200);
  }