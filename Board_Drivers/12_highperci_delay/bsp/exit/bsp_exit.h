#ifndef _BSP_EXIT_H
#define _BSP_EXIT_H
#include "imx6ul.h"

/* 函数声明 */
void exit_init(void);						/* 中断初始化 */
void gpio1_io18_irqhandler(void); 			/* 中断处理函数 */

#endif
