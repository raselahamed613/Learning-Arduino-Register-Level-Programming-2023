
#include <avr/io.h>

//int value = 0 ;
float value = 0, Vinput;
void setup() {
  Serial.begin(9600);       // Serial Monitor
  ADCSRA = 0b10001111;      // Enable ADC & Interrupt, pre-scaler
  ADMUX = 0b01000000;       // AVCC Referance Voltage and A0 as input to ADC
  sei();                    // Set global interrupt


}

void loop() {
  delay(100);
  ADCSRA  |= (1 << ADSC) | (1 << ADIE);  //ADC Start Conversion

}

ISR(ADC_vect) {
  value = ADC;
  value = value / 930;
  Vinput = value * (62.5) / 12.5;
  Serial.println(Vinput);
  Serial.print ("V");
}

