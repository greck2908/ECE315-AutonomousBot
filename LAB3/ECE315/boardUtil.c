// Copyright (c) 2014, Joe Krachey
// All rights reserved.
//
// Redistribution and use in binary form, with or without modification, 
// are permitted provided that the following conditions are met:
//
// 1. Redistributions in binary form must reproduce the above copyright 
//    notice, this list of conditions and the following disclaimer in 
//    the documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
// PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR 
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; 
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "TM4C123GH6PM.h"
#include "boardUtil.h"
#include "../include/sysctrl.h"



void DisableInterrupts(void)
{
  __asm {
         CPSID  I
  }
}
void EnableInterrupts(void)
{
  __asm {
    CPSIE  I
  }
}


//*****************************************************************************
// Configure PA0 and PA1 to be UART pins
//*****************************************************************************
void uart0_config_gpio(void)
{
   gpio_enable_port(GPIOA_BASE);
   gpio_config_digital_enable( GPIOA_BASE, PA0 | PA1);
   gpio_config_alternate_function( GPIOA_BASE, PA0 | PA1);
   gpio_config_port_control( GPIOA_BASE, GPIO_PCTL_PA0_U0RX | GPIO_PCTL_PA1_U0TX);
}

//*****************************************************************************
//*****************************************************************************
void serialDebugInit(void)
{
  // Configure GPIO Pins
  uart0_config_gpio();
 
  
  // Initialize UART0 for 8N1, interrupts enabled.
  uart_init_115K(
    UART0_BASE, 
    SYSCTL_RCGCUART_R0, 
    SYSCTL_PRUART_R0
  );
}

//*****************************************************************************
// Configure PF0 (LeftA), PF1(LeftB), PC5(RightA), PC6(RightB)
// sp that they generate interrupts on rising and falling edges
//*****************************************************************************
void encodersInit(void)
{
	//enable port F and port C 
	gpio_enable_port(GPIOF_BASE);
	gpio_enable_port(GPIOC_BASE);
	
	//enable all 4 pins as input 
	gpio_config_enable_input(GPIOF_BASE, PF0 | PF1);
	gpio_config_enable_input(GPIOC_BASE, PC5 | PC6);
	
	// digital enable 
	gpio_config_digital_enable(GPIOF_BASE, PF0 | PF1);
	gpio_config_digital_enable(GPIOC_BASE, PC5 | PC6);
	
	GPIOF->IS &= ~(PF0 | PF1);
	GPIOC->IS &= ~(PC5 | PC6);
	
	// clear any outstanding interruprs 
	GPIOF->ICR |= PF0 | PF1;
	GPIOC->ICR |= PC5 | PC6;
	
	//controlled by IEV
	GPIOF->IBE &= ~(PF0 | PF1);
	GPIOC->IBE &= ~(PC5 | PC6);
	
	GPIOF->IEV |= PF0 | PF1;
	GPIOC->IEV |= PC5 | PC6;
	
	//enable interrupt masks
	GPIOF->IM |= PF0 | PF1;
	GPIOC->IM |= (PC5 | PC6);
	
	NVIC_SetPriority(GPIOF_IRQn, 1);
	NVIC_SetPriority(GPIOC_IRQn, 2);
	
	NVIC_EnableIRQ(GPIOF_IRQn);
	NVIC_EnableIRQ(GPIOC_IRQn);
}
