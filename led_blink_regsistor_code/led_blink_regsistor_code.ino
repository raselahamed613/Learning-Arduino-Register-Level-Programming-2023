void setup() {
  DDRB |= (1 << DDB5);  //PB5 = O/P
}

void loop() {
  PORTB |= (1 << PB5);  //PB5 = HIGH
  delay(1000);
  PORTB &= ~(1 << PB5);  //PB5 = LOW
  delay(1000);
}
