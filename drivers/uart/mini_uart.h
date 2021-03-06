#ifndef	__DRIVERS_UART_PL011_H__
#define	__DRIVERS_UART_PL011_H__


#define AUX_ENABLES     0x3F215004
#define AUX_MU_IO_REG   0x3F215040
#define AUX_MU_IER_REG  0x3F215044
#define AUX_MU_IIR_REG  0x3F215048
#define AUX_MU_LCR_REG  0x3F21504C
#define AUX_MU_MCR_REG  0x3F215050
#define AUX_MU_LSR_REG  0x3F215054
#define AUX_MU_MSR_REG  0x3F215058
#define AUX_MU_SCRATCH  0x3F21505C
#define AUX_MU_CNTL_REG 0x3F215060
#define AUX_MU_STAT_REG 0x3F215064
#define AUX_MU_BAUD_REG 0x3F215068


#define		UART_AUXIRQ				0x0000
#define			UART_AUXIRQ_UART		0x01
#define		UART_AUXENB				0x0004
#define			UART_AUXENB_UART		0x01
#define		UART_AUX_MU_IO			0x0040
#define		UART_AUX_MU_IER			0x0044
#define		UART_AUX_MU_IIR			0x0048
#define		UART_AUX_MU_LCR			0x004C
#define		UART_AUX_MU_MCR			0x0050
#define		UART_AUX_MU_LSR			0x0054
#define			UART_AUX_MU_LSR_TIDLE	0x20
#define			UART_AUX_MU_LSR_TEMP	0x10
#define			UART_AUX_MU_LSR_ROVR	0x02
#define			UART_AUX_MU_LSR_DRDY	0x01
#define		UART_AUX_MU_MSR			0x0058
#define		UART_AUX_MU_SCRATCH		0x005C
#define		UART_AUX_MU_CNTL		0x0060
#define		UART_AUX_MU_STAT		0x0064
#define		UART_AUX_MU_BAUD		0x0068



#endif //__DRIVERS_UART_PL011_H__
