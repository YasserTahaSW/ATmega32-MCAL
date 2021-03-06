/*
 * SSD_private.h
 *
 *  Created on: Feb 3, 2016
 *      Author: Home
 */

#ifndef SSD_PRIVATE_H_
#define SSD_PRIVATE_H_

#define GetBit(Reg,BitNo) ((Reg>>BitNo)&1)
#define ClrBit(Reg,BitNo)  ((Reg)&=~(1<<(BitNo)))
#define SetBit(Reg,BitNo)  (Reg|=(1<<BitNo))
#define ToggelBit(Reg,BitNo) (Reg^(1<<BitNo))

#define COMMON_PIN  0
#define NO_OF_DISP  2

#define DISP_TYPES CONC0(SSD_u8DISP1TYPE,SSD_u8DISP2TYPE,SSD_u8DISP3TYPE,SSD_u8DISP4TYPE,SSD_u8DISP5TYPE,SSD_u8DISP6TYPE)
#define CONC0(SSD_u8DISP1TYPE,SSD_u8DISP2TYPE,SSD_u8DISP3TYPE,SSD_u8DISP4TYPE,SSD_u8DISP5TYPE,SSD_u8DISP6TYPE) CONC_HELP0(SSD_u8DISP1TYPE,SSD_u8DISP2TYPE,SSD_u8DISP3TYPE,SSD_u8DISP4TYPE,SSD_u8DISP5TYPE,SSD_u8DISP6TYPE)
#define CONC_HELP0(SSD_u8DISP1TYPE,SSD_u8DISP2TYPE,SSD_u8DISP3TYPE,SSD_u8DISP4TYPE,SSD_u8DISP5TYPE,SSD_u8DISP6TYPE) 0b##SSD_u8DISP6TYPE##SSD_u8DISP5TYPE##SSD_u8DISP4TYPE##SSD_u8DISP3TYPE##SSD_u8DISP2TYPE##SSD_u8DISP1TYPE
#endif /* SSD_PRIVATE_H_ */
