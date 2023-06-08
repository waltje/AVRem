#ifndef _AVRREGS_H_
#define _AVRREGS_H_

#define R_SREG 0
#define R_SPH 1
#define R_SPL 2
#define R_OCR0 3
#define R_GICR 4
#define R_GIFR 5
#define R_TIMSK 6
#define R_TIFR 7
#define R_SPMCR 8
#define R_TWCR 9
#define R_MCUCR 10
#define R_MCUCSR 11
#define R_TCCR0 12
#define R_TCNT0 13
#define R_OSCCAL 14
#define R_OCDR 15
#define R_SFIOR 16
#define R_TCCR1A 17
#define R_TCCR1B 18
#define R_TCNT1H 19
#define R_TCNT1L 20
#define R_OCR1AH 21
#define R_OCR1AL 22
#define R_OCR1BH 23
#define R_OCR1BL 24
#define R_ICR1H 25
#define R_ICR1L 26
#define R_TCCR2 27
#define R_TCNT2 28
#define R_OCR2 29
#define R_ASSR 30
#define R_WDTCR 31
#define R_UBRRH 32
#define R_UCSRC 33
#define R_EEARH 34
#define R_EEARL 35
#define R_EEDR 36
#define R_EECR 37
#define R_PORTA 38
#define R_DDRA 39
#define R_PINA 40
#define R_PORTB 41
#define R_DDRB 42
#define R_PINB 43
#define R_PORTC 44
#define R_DDRC 45
#define R_PINC 46
#define R_PORTD 47
#define R_DDRD 48
#define R_PIND 49
#define R_SPDR 50
#define R_SPSR 51
#define R_SPCR 52
#define R_UDR 53
#define R_UCSRA 54
#define R_UCSRB 55
#define R_UBRRL 56
#define R_ACSR 57
#define R_ADMUX 58
#define R_ADCSRA 59
#define R_ADCH 60
#define R_ADCL 61
#define R_TWDR 62
#define R_TWAR 63
#define R_TWSR 64
#define R_TWBR 65
#define R_UDR1 66
#define R_UBRR1H 67
#define R_UBRR1L 68
#define R_UCSR1C 69
#define R_UCSR1B 70
#define R_UCSR1A 71
#define R_UDR0 72
#define R_UBRR0H 73
#define R_UBRR0L 74
#define R_UCSR0C 75
#define R_UCSR0B 76
#define R_UCSR0A 77
#define R_TWAMR 78
#define R_OCR2B 79
#define R_OCR2A 80
#define R_TCCR2B 81
#define R_TCCR2A 82
#define R_OCR3BH 83
#define R_OCR3BL 84
#define R_OCR3AH 85
#define R_OCR3AL 86
#define R_ICR3H 87
#define R_ICR3L 88
#define R_TCNT3H 89
#define R_TCNT3L 90
#define R_TCCR3C 91
#define R_TCCR3B 92
#define R_TCCR3A 93
#define R_TCCR1C 94
#define R_DIDR1 95
#define R_DIDR0 96
#define R_ADCSRB 97
#define R_PCMSK3 98
#define R_TIMSK3 99
#define R_TIMSK2 100
#define R_TIMSK1 101
#define R_TIMSK0 102
#define R_PCMSK2 103
#define R_PCMSK1 104
#define R_PCMSK0 105
#define R_EICRA 106
#define R_PCICR 107
#define R_PRR1 108
#define R_PRR0 109
#define R_CLKPR 110
#define R_WDTCSR 111
#define R_SPMCSR 112
#define R_MCUSR 113
#define R_SMCR 114
#define R_GPIOR2 115
#define R_GPIOR1 116
#define R_OCR0B 117
#define R_OCR0A 118
#define R_TCCR0B 119
#define R_TCCR0A 120
#define R_GTCCR 121
#define R_GPIOR0 122
#define R_EIMSK 123
#define R_EIFR 124
#define R_PCIFR 125
#define R_TIFR3 126
#define R_TIFR2 127
#define R_TIFR1 128
#define R_TIFR0 129
#define R_PRR 130
#define R_OCR3CH 131
#define R_OCR3CL 132
#define R_ETIMSK 133
#define R_ETIFR 134
#define R_OCR1CH 135
#define R_OCR1CL 136
#define R_XMCRA 137
#define R_XMCRB 138
#define R_PORTG 139
#define R_DDRG 140
#define R_PING 141
#define R_PORTF 142
#define R_DDRF 143
#define R_XDIV 144
#define R_EICRB 145
#define R_PORTE 146
#define R_DDRE 147
#define R_PINE 148
#define R_PINF 149
#define R_UDR3 150
#define R_UBRR3H 151
#define R_UBRR3L 152
#define R_UCSR3C 153
#define R_UCSR3B 154
#define R_UCSR3A 155
#define R_OCR5CH 156
#define R_OCR5CL 157
#define R_OCR5BH 158
#define R_OCR5BL 159
#define R_OCR5AH 160
#define R_OCR5AL 161
#define R_ICR5H 162
#define R_ICR5L 163
#define R_TCNT5H 164
#define R_TCNT5L 165
#define R_TCCR5C 166
#define R_TCCR5B 167
#define R_TCCR5A 168
#define R_PORTL 169
#define R_DDRL 170
#define R_PINL 171
#define R_PORTK 172
#define R_DDRK 173
#define R_PINK 174
#define R_PORTJ 175
#define R_DDRJ 176
#define R_PINJ 177
#define R_PORTH 178
#define R_DDRH 179
#define R_PINH 180
#define R_UDR2 181
#define R_UBRR2H 182
#define R_UBRR2L 183
#define R_UCSR2C 184
#define R_UCSR2B 185
#define R_UCSR2A 186
#define R_OCR4CH 187
#define R_OCR4CL 188
#define R_OCR4BH 189
#define R_OCR4BL 190
#define R_OCR4AH 191
#define R_OCR4AL 192
#define R_ICR4H 193
#define R_ICR4L 194
#define R_TCNT4H 195
#define R_TCNT4L 196
#define R_TCCR4C 197
#define R_TCCR4B 198
#define R_TCCR4A 199
#define R_DIDR2 200
#define R_TIMSK5 201
#define R_TIMSK4 202
#define R_EIND 203
#define R_RAMPZ 204
#define R_TIFR5 205
#define R_TIFR4 206

#define R_XL			207
#define R_XH			208
#define R_X				209
#define R_YL			210
#define R_YH			211
#define R_Y				212
#define R_ZL			213
#define R_ZH			214
#define R_Z				215
#define R_SP			216
#define R_RAMPX			217
#define R_RAMPY			218

#define REG_COUNT 219

#define VECT_RESET 0
#define VECT_INT0 1
#define VECT_INT1 2
#define VECT_TIMER2_COMP 3
#define VECT_TIMER2_OVF 4
#define VECT_TIMER1_CAPT 5
#define VECT_TIMER1_COMPA 6
#define VECT_TIMER1_COMPB 7
#define VECT_TIMER1_OVF 8
#define VECT_TIMER0_OVF 9
#define VECT_SPI_STC 10
#define VECT_USART_RXC 11
#define VECT_USART_UDRE 12
#define VECT_USART_TXC 13
#define VECT_ADC 14
#define VECT_EE_RDY 15
#define VECT_ANA_COMP 16
#define VECT_TWI 17
#define VECT_INT2 18
#define VECT_TIMER0_COMP 19
#define VECT_SPM_RDY 20
#define VECT_PCINT0 21
#define VECT_PCINT1 22
#define VECT_PCINT2 23
#define VECT_PCINT3 24
#define VECT_WDT 25
#define VECT_TIMER2_COMPA 26
#define VECT_TIMER2_COMPB 27
#define VECT_TIMER0_COMPA 28
#define VECT_TIMER0_COMPB 29
#define VECT_USART0_RXC 30
#define VECT_USART0_UDRE 31
#define VECT_USART0_TXC 32
#define VECT_ANALOG_COMP 33
#define VECT_EE_READY 34
#define VECT_SPM_READY 35
#define VECT_USART1_RXC 36
#define VECT_USART1_UDRE 37
#define VECT_USART1_TXC 38
#define VECT_TIMER3_CAPT 39
#define VECT_TIMER3_COMPA 40
#define VECT_TIMER3_COMPB 41
#define VECT_TIMER3_OVF 42
#define VECT_SPM_Ready 43
#define VECT_INT3 44
#define VECT_INT4 45
#define VECT_INT5 46
#define VECT_INT6 47
#define VECT_INT7 48
#define VECT_TIMER1_COMPC 49
#define VECT_TIMER3_COMPC 50
#define VECT_EE READY 51
#define VECT_TIMER4_CAPT 52
#define VECT_TIMER4_COMPA 53
#define VECT_TIMER4_COMPB 54
#define VECT_TIMER4_COMPC 55
#define VECT_TIMER4_OVF 56
#define VECT_TIMER5_CAPT 57
#define VECT_TIMER5_COMPA 58
#define VECT_TIMER5_COMPB 59
#define VECT_TIMER5_COMPC 60
#define VECT_TIMER5_OVF 61
#define VECT_USART2_RXC 62
#define VECT_USART2_UDRE 63
#define VECT_USART2_TXC 64
#define VECT_USART3_RXC 65
#define VECT_USART3_UDRE 66
#define VECT_USART3_TXC 67

#define VECT_COUNT 68


void init_regs_16(struct avr_core_s* core);
void init_regs_164_324_644_1284(struct avr_core_s* core);
void init_regs_48_88_168_328(struct avr_core_s* core);
void init_regs_32(struct avr_core_s* core);
void init_regs_64(struct avr_core_s* core);
void init_regs_640_1280_1281_2560_2561(struct avr_core_s* core);
void init_regs_8(struct avr_core_s* core);

#endif
