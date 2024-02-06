
void setup() {
  // put your setup code here, to run once:
  // pinMode(13, OUTPUT);
  DDRB = 0b00101000;
  // DDRB = 0x20;
  // DDRB = 32;
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(13, HIGH);
  PORTB = 0b00101000;  // Binary
  // PORTB = 0x20;  //HEXA
  // PORTB = 32;    // Decemal
  // delay(1000);
  _delay_ms(500);
  // digitalWrite(13, LOW);
  PORTB = 0b00000000;
  // PORTB = 0x00;
  // PORTB = 0;
  // delay(1000);
  _delay_ms(3000);
}
