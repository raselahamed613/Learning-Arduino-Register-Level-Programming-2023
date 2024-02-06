void setup() {
  DDRB |= (1 << DDB5);  //PB5 = O/P d13
  DDRB |= (1 << DDB3);  // d11
}

void loop() {
  PORTB |= (1 << PB5);  //PB5 = HIGH
  PORTB |= (1 << PB3);
  _delay_ms(100);
  PORTB &= ~(1 << PB5);  //PB5 = LOW
  PORTB &= ~(1 << PB3);
  _delay_ms(100);
}
