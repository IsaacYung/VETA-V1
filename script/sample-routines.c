void main() {
TRISC = 0;
TRISD = 0;

PORTC = 0;

    while(1){
          PORTC.RC0 = 1;
          PORTD.RD0 = 1;
          
          Delay_ms(3000);

          PORTC.RC1 = 0;
          PORTC.RC2 = 1;
          
          PORTD.RD1 = 1;
          PORTD.RD2 = 1;
          
          Delay_ms(5000);
          
          PORTC.RC7 = 1;
          
          Delay_ms(8000);
          
          PORTC.RC1 = 0;
          PORTC.RC2 = 0;
          PORTC.RC7 = 0;
          
          Delay_ms(10000);
    }                                               //
}
