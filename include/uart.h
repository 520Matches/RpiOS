#ifndef _UART_H
#define _UART_H

#include "base.h"

#define AUX_ENABLES     ( BASE_ADDRESS + 0x215004)
#define AUX_MU_IO_REG   ( BASE_ADDRESS + 0x215040)
#define AUX_MU_IER_REG  ( BASE_ADDRESS + 0x215044)
#define AUX_MU_IIR_REG  ( BASE_ADDRESS + 0x215048)
#define AUX_MU_LCR_REG  ( BASE_ADDRESS + 0x21504C)
#define AUX_MU_MCR_REG  ( BASE_ADDRESS + 0x215050)
#define AUX_MU_LSR_REG  ( BASE_ADDRESS + 0x215054)
#define AUX_MU_MSR_REG  ( BASE_ADDRESS + 0x215058)
#define AUX_MU_SCRATCH  ( BASE_ADDRESS + 0x21505C)
#define AUX_MU_CNTL_REG ( BASE_ADDRESS + 0x215060)
#define AUX_MU_STAT_REG ( BASE_ADDRESS + 0x215064)
#define AUX_MU_BAUD_REG ( BASE_ADDRESS + 0x215068)

void uart_init(void);
char uart_recv(void);
void uart_send(char c);
void uart_send_string(char* str);

#endif
