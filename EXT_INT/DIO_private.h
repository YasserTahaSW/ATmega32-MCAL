/*
 * DIO_private.h
 *
 *  Created on: Jan 27, 2016
 *      Author: Yaser
 */

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_
/*Comment!: Port _INITDIRection helper functions  */
#define DIO_u8PORTA_INITDIR 		CONC0(DIO_u8PIN0_INITDIR,DIO_u8PIN1_INITDIR,DIO_u8PIN2_INITDIR,DIO_u8PIN3_INITDIR,DIO_u8PIN4_INITDIR,DIO_u8PIN5_INITDIR,DIO_u8PIN6_INITDIR,DIO_u8PIN7_INITDIR)
#define CONC0(DIO_u8PIN0_INITDIR,DIO_u8PIN1_INITDIR,DIO_u8PIN2_INITDIR,DIO_u8PIN3_INITDIR,DIO_u8PIN4_INITDIR,DIO_u8PIN5_INITDIR,DIO_u8PIN6_INITDIR,DIO_u8PIN7_INITDIR) CONC_HELP0(DIO_u8PIN0_INITDIR,DIO_u8PIN1_INITDIR,DIO_u8PIN2_INITDIR,DIO_u8PIN3_INITDIR,DIO_u8PIN4_INITDIR,DIO_u8PIN5_INITDIR,DIO_u8PIN6_INITDIR,DIO_u8PIN7_INITDIR)
#define CONC_HELP0(DIO_u8PIN7_INITDIR,DIO_u8PIN6_INITDIR,DIO_u8PIN5_INITDIR,DIO_u8PIN4_INITDIR,DIO_u8PIN3_INITDIR,DIO_u8PIN2_INITDIR,DIO_u8PIN1_INITDIR,DIO_u8PIN0_INITDIR) 0b##DIO_u8PIN7_INITDIR##DIO_u8PIN6_INITDIR##DIO_u8PIN5_INITDIR##DIO_u8PIN4_INITDIR##DIO_u8PIN3_INITDIR##DIO_u8PIN2_INITDIR##DIO_u8PIN1_INITDIR##DIO_u8PIN0_INITDIR

#define DIO_u8PORTB_INITDIR 		CONC1(DIO_u8PIN8_INITDIR,DIO_u8PIN9_INITDIR,DIO_u8PIN10_INITDIR,DIO_u8PIN11_INITDIR,DIO_u8PIN12_INITDIR,DIO_u8PIN13_INITDIR,DIO_u8PIN14_INITDIR,DIO_u8PIN15_INITDIR)
#define CONC1(DIO_u8PIN8_INITDIR,DIO_u8PIN9_INITDIR,DIO_u8PIN10_INITDIR,DIO_u8PIN11_INITDIR,DIO_u8PIN12_INITDIR,DIO_u8PIN13_INITDIR,DIO_u8PIN14_INITDIR,DIO_u8PIN15_INITDIR) CONC_HELP1(DIO_u8PIN8_INITDIR,DIO_u8PIN9_INITDIR,DIO_u8PIN10_INITDIR,DIO_u8PIN11_INITDIR,DIO_u8PIN12_INITDIR,DIO_u8PIN13_INITDIR,DIO_u8PIN14_INITDIR,DIO_u8PIN15_INITDIR)
#define CONC_HELP1(DIO_u8PIN8_INITDIR,DIO_u8PIN9_INITDIR,DIO_u8PIN10_INITDIR,DIO_u8PIN11_INITDIR,DIO_u8PIN12_INITDIR,DIO_u8PIN13_INITDIR,DIO_u8PIN14_INITDIR,DIO_u8PIN15_INITDIR) 0b##DIO_u8PIN15_INITDIR##DIO_u8PIN14_INITDIR##DIO_u8PIN13_INITDIR##DIO_u8PIN12_INITDIR##DIO_u8PIN11_INITDIR##DIO_u8PIN10_INITDIR##DIO_u8PIN9_INITDIR##DIO_u8PIN8_INITDIR

#define DIO_u8PORTC_INITDIR 		CONC2(DIO_u8PIN16_INITDIR,DIO_u8PIN17_INITDIR,DIO_u8PIN18_INITDIR,DIO_u8PIN19_INITDIR,DIO_u8PIN20_INITDIR,DIO_u8PIN21_INITDIR,DIO_u8PIN22_INITDIR,DIO_u8PIN23_INITDIR)
#define CONC2(DIO_u8PIN16_INITDIR,DIO_u8PIN17_INITDIR,DIO_u8PIN18_INITDIR,DIO_u8PIN19_INITDIR,DIO_u8PIN20_INITDIR,DIO_u8PIN21_INITDIR,DIO_u8PIN22_INITDIR,DIO_u8PIN23_INITDIR) CONC_HELP2(DIO_u8PIN16_INITDIR,DIO_u8PIN17_INITDIR,DIO_u8PIN18_INITDIR,DIO_u8PIN19_INITDIR,DIO_u8PIN20_INITDIR,DIO_u8PIN21_INITDIR,DIO_u8PIN22_INITDIR,DIO_u8PIN23_INITDIR)
#define CONC_HELP2(DIO_u8PIN16_INITDIR,DIO_u8PIN17_INITDIR,DIO_u8PIN18_INITDIR,DIO_u8PIN19_INITDIR,DIO_u8PIN20_INITDIR,DIO_u8PIN21_INITDIR,DIO_u8PIN22_INITDIR,DIO_u8PIN23_INITDIR) 0b##DIO_u8PIN23_INITDIR##DIO_u8PIN22_INITDIR##DIO_u8PIN21_INITDIR##DIO_u8PIN20_INITDIR##DIO_u8PIN19_INITDIR##DIO_u8PIN18_INITDIR##DIO_u8PIN17_INITDIR##DIO_u8PIN16_INITDIR

#define DIO_u8PORTD_INITDIR 		CONC3(DIO_u8PIN24_INITDIR,DIO_u8PIN25_INITDIR,DIO_u8PIN26_INITDIR,DIO_u8PIN27_INITDIR,DIO_u8PIN28_INITDIR,DIO_u8PIN29_INITDIR,DIO_u8PIN30_INITDIR,DIO_u8PIN31_INITDIR)
#define CONC3(DIO_u8PIN24_INITDIR,DIO_u8PIN25_INITDIR,DIO_u8PIN26_INITDIR,DIO_u8PIN27_INITDIR,DIO_u8PIN28_INITDIR,DIO_u8PIN29_INITDIR,DIO_u8PIN30_INITDIR,DIO_u8PIN31_INITDIR) CONC_HELP3(DIO_u8PIN24_INITDIR,DIO_u8PIN25_INITDIR,DIO_u8PIN26_INITDIR,DIO_u8PIN27_INITDIR,DIO_u8PIN28_INITDIR,DIO_u8PIN29_INITDIR,DIO_u8PIN30_INITDIR,DIO_u8PIN31_INITDIR)
#define CONC_HELP3(DIO_u8PIN24_INITDIR,DIO_u8PIN25_INITDIR,DIO_u8PIN26_INITDIR,DIO_u8PIN27_INITDIR,DIO_u8PIN28_INITDIR,DIO_u8PIN29_INITDIR,DIO_u8PIN30_INITDIR,DIO_u8PIN31_INITDIR)  0b##DIO_u8PIN31_INITDIR##DIO_u8PIN30_INITDIR##DIO_u8PIN29_INITDIR##DIO_u8PIN28_INITDIR##DIO_u8PIN27_INITDIR##DIO_u8PIN26_INITDIR##DIO_u8PIN25_INITDIR##DIO_u8PIN24_INITDIR

/*Comment!: Port initial value helper functions  */
#define DIO_u8PORTAINIT 	CONC4(DIO_u8PIN0_INITVAL,DIO_u8PIN1_INITVAL,DIO_u8PIN2_INITVAL,DIO_u8PIN3_INITVAL,DIO_u8PIN4_INITVAL,DIO_u8PIN5_INITVAL,DIO_u8PIN6_INITVAL,DIO_u8PIN7_INITVAL)
#define CONC4(DIO_u8PIN0_INITVAL,DIO_u8PIN1_INITVAL,DIO_u8PIN2_INITVAL,DIO_u8PIN3_INITVAL,DIO_u8PIN4_INITVAL,DIO_u8PIN5_INITVAL,DIO_u8PIN6_INITVAL,DIO_u8PIN7_INITVAL) CONC_HELP4(DIO_u8PIN0_INITVAL,DIO_u8PIN1_INITVAL,DIO_u8PIN2_INITVAL,DIO_u8PIN3_INITVAL,DIO_u8PIN4_INITVAL,DIO_u8PIN5_INITVAL,DIO_u8PIN6_INITVAL,DIO_u8PIN7_INITVAL)
#define CONC_HELP4(DIO_u8PIN0_INITVAL,DIO_u8PIN1_INITVAL,DIO_u8PIN2_INITVAL,DIO_u8PIN3_INITVAL,DIO_u8PIN4_INITVAL,DIO_u8PIN5_INITVAL,DIO_u8PIN6_INITVAL,DIO_u8PIN7_INITVAL) 0b##DIO_u8PIN7_INITVAL##DIO_u8PIN6_INITVAL##DIO_u8PIN5_INITVAL##DIO_u8PIN4_INITVAL##DIO_u8PIN3_INITVAL##DIO_u8PIN2_INITVAL##DIO_u8PIN1_INITVAL##DIO_u8PIN0_INITVAL

#define DIO_u8PORTBINIT 	CONC5(DIO_u8PIN8_INITVAL,DIO_u8PIN9_INITVAL,DIO_u8PIN10_INITVAL,DIO_u8PIN11_INITVAL,DIO_u8PIN12_INITVAL,DIO_u8PIN13_INITVAL,DIO_u8PIN14_INITVAL,DIO_u8PIN15_INITVAL)
#define CONC5(DIO_u8PIN8_INITVAL,DIO_u8PIN9_INITVAL,DIO_u8PIN10_INITVAL,DIO_u8PIN11_INITVAL,DIO_u8PIN12_INITVAL,DIO_u8PIN13_INITVAL,DIO_u8PIN14_INITVAL,DIO_u8PIN15_INITVAL)  CONC_HELP5(DIO_u8PIN8_INITVAL,DIO_u8PIN9_INITVAL,DIO_u8PIN10_INITVAL,DIO_u8PIN11_INITVAL,DIO_u8PIN12_INITVAL,DIO_u8PIN13_INITVAL,DIO_u8PIN14_INITVAL,DIO_u8PIN15_INITVAL)
#define CONC_HELP5(DIO_u8PIN8_INITVAL,DIO_u8PIN9_INITVAL,DIO_u8PIN10_INITVAL,DIO_u8PIN11_INITVAL,DIO_u8PIN12_INITVAL,DIO_u8PIN13_INITVAL,DIO_u8PIN14_INITVAL,DIO_u8PIN15_INITVAL) 0b##DIO_u8PIN15_INITVAL##DIO_u8PIN14_INITVAL##DIO_u8PIN13_INITVAL##DIO_u8PIN12_INITVAL##DIO_u8PIN11_INITVAL##DIO_u8PIN10_INITVAL##DIO_u8PIN9_INITVAL##DIO_u8PIN8_INITVAL

#define DIO_u8PORTCINIT 	CONC6(DIO_u8PIN16_INITVAL,DIO_u8PIN17_INITVAL,DIO_u8PIN18_INITVAL,DIO_u8PIN19_INITVAL,DIO_u8PIN20_INITVAL,DIO_u8PIN21_INITVAL,DIO_u8PIN22_INITVAL,DIO_u8PIN23_INITVAL)
#define CONC6(DIO_u8PIN16_INITVAL,DIO_u8PIN17_INITVAL,DIO_u8PIN18_INITVAL,DIO_u8PIN19_INITVAL,DIO_u8PIN20_INITVAL,DIO_u8PIN21_INITVAL,DIO_u8PIN22_INITVAL,DIO_u8PIN23_INITVAL)  CONC_HELP6(DIO_u8PIN16_INITVAL,DIO_u8PIN17_INITVAL,DIO_u8PIN18_INITVAL,DIO_u8PIN19_INITVAL,DIO_u8PIN20_INITVAL,DIO_u8PIN21_INITVAL,DIO_u8PIN22_INITVAL,DIO_u8PIN23_INITVAL)
#define CONC_HELP6(DIO_u8PIN16_INITVAL,DIO_u8PIN17_INITVAL,DIO_u8PIN18_INITVAL,DIO_u8PIN19_INITVAL,DIO_u8PIN20_INITVAL,DIO_u8PIN21_INITVAL,DIO_u8PIN22_INITVAL,DIO_u8PIN23_INITVAL) 0b##DIO_u8PIN23_INITVAL##DIO_u8PIN22_INITVAL##DIO_u8PIN21_INITVAL##DIO_u8PIN20_INITVAL##DIO_u8PIN19_INITVAL##DIO_u8PIN18_INITVAL##DIO_u8PIN17_INITVAL##DIO_u8PIN17_INITVAL

#define DIO_u8PORTDINIT 	CONC7(DIO_u8PIN24_INITVAL,DIO_u8PIN25_INITVAL,DIO_u8PIN26_INITVAL,DIO_u8PIN27_INITVAL,DIO_u8PIN28_INITVAL,DIO_u8PIN29_INITVAL,DIO_u8PIN30_INITVAL,DIO_u8PIN31_INITVAL)
#define CONC7(DIO_u8PIN24_INITVAL,DIO_u8PIN25_INITVAL,DIO_u8PIN26_INITVAL,DIO_u8PIN27_INITVAL,DIO_u8PIN28_INITVAL,DIO_u8PIN29_INITVAL,DIO_u8PIN30_INITVAL,DIO_u8PIN31_INITVAL)   CONC_HELP7(DIO_u8PIN24_INITVAL,DIO_u8PIN25_INITVAL,DIO_u8PIN26_INITVAL,DIO_u8PIN27_INITVAL,DIO_u8PIN28_INITVAL,DIO_u8PIN29_INITVAL,DIO_u8PIN30_INITVAL,DIO_u8PIN31_INITVAL)
#define CONC_HELP7(DIO_u8PIN24_INITVAL,DIO_u8PIN25_INITVAL,DIO_u8PIN26_INITVAL,DIO_u8PIN27_INITVAL,DIO_u8PIN28_INITVAL,DIO_u8PIN29_INITVAL,DIO_u8PIN30_INITVAL,DIO_u8PIN31_INITVAL)  0b##DIO_u8PIN31_INITVAL##DIO_u8PIN30_INITVAL##DIO_u8PIN29_INITVAL##DIO_u8PIN28_INITVAL##DIO_u8PIN27_INITVAL##DIO_u8PIN26_INITVAL##DIO_u8PIN25_INITVAL##DIO_u8PIN24_INITVAL

#define GetBit(Reg,BitNo) ((Reg>>BitNo)&1)
#define ClrBit(Reg,BitNo)  ((Reg)&=~(1<<(BitNo)))
#define SetBit(Reg,BitNo)  (Reg|=(1<<BitNo))
#define ToggelBit(Reg,BitNo) (Reg^(1<<BitNo))


#define getReg(Reg)  Reg
#define SetReg(Reg) (Reg = 0xff)
#define ClrReg(Reg) Reg = 0x00
#define ToggleReg(leg) Reg =~Reg
#define AssignReg(Reg,value) Reg = value

#define GetLowNibble(Reg) Reg&0x0F
#define ClrLowNibbles(Reg)Reg =Reg&0xF0
#define SetLowNibble(Reg) Reg =Reg|0x0F
#define ToggleLowNibble(Reg) Reg =Reg^0x0F
#define AssignLowNibble(Reg,value) Reg =(Reg&(0xF0))|value)

#define GetHighNibble(Reg) Reg = (Reg&0xF0)>>4
#define ClrHighNibbles(Reg) Reg =Reg&0xF0
#define SetHighNibble(Reg) Reg =Reg|0xF0
#define ToggleHighNibble(Reg) Reg = Reg^0xF0
#define AssignHighNibble(Reg,value) Reg = (Reg&0x0F)|(value<<4)
#define no_of_pins 8
#define port_number  ((Copy_u8PinIdx)/(no_of_pins))

#define portA ((volatile u8*)(0x3B))
#define portB ((volatile u8*)(0x38))
#define portC ((volatile u8*)(0x35))
#define portD ((volatile u8*)(0x32))

#define DDRA ((volatile u8*)(0x3A))
#define DDRB ((volatile u8*)(0x37))
#define DDRC ((volatile u8*)(0x34))
#define DDRD ((volatile u8*)(0x31))

#define PINA ((volatile u8*)(0x39))
#define PINB ((volatile u8*)(0x36))
#define PINC ((volatile u8*)(0x33))
#define PIND ((volatile u8*)(0x30))


#define no_of_ports 3
#define  no_of_total_pins 31
#endif /* DIO_PRIVATE_H_ */
