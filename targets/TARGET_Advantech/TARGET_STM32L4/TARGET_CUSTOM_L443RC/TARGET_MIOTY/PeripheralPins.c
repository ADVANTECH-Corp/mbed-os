/* mbed Microcontroller Library
 *******************************************************************************
 * Copyright (c) 2016, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#include "PeripheralPins.h"

#define PIN_ORIG 1

// =====
// Note: Commented lines are alternative possibilities which are not used per default.
//       If you change them, you will have also to modify the corresponding xxx_api.c file
//       for pwmout, analogin, analogout, ...
// =====

//*** ADC ***

const PinMap PinMap_ADC[] = {
#if defined(PIN_ORIG)
#if 0
    {ADC00,  ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC1_IN12
    {ADC02,  ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC1_IN11
    {ADC03,  ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC1_IN19
    {ADC04,  ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC1_IN14
#else
    {ADC00,  ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC1_IN3
    {ADC01,  ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC1_IN4
    {ADC02,  ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC1_IN5
    {ADC03,  ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC1_IN6
    {ADC04,  ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 13, 0)}, // ADC1_IN13
    {ADC05,  ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC1_IN14    
#endif
#endif
    {NC,   NC,    0}
};

//*** DAC ***

const PinMap PinMap_DAC[] = {
//    {PA_4,  DAC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // DAC1_OUT1
//    {PA_5,  DAC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // DAC1_OUT2
    {NC,   NC,    0}
};

//*** I2C ***

const PinMap PinMap_I2C_SDA[] = {
#if defined(PIN_ORIG)
    {I2C_SDA,  I2C_3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)},
#endif    
    {NC,    NC,    0}
};

const PinMap PinMap_I2C_SCL[] = {
#if defined(PIN_ORIG)    
    {I2C_SCL,  I2C_3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)},
#endif    
    {NC,    NC,    0}
};

//*** PWM ***

// TIM2 cannot be used because already used by the us_ticker
const PinMap PinMap_PWM[] = {
#if defined(PIN_ORIG)
    {PWM0_OUT, PWM_2, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 3, 0)},  // TIM2_CH3
    {PWM1_OUT, PWM_2, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 4, 0)},  // TIM2_CH4
#endif
    {NC,    NC,    0}
};

//*** SERIAL ***

const PinMap PinMap_UART_TX[] = {
    {SERIAL_TX,  UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
#if defined(PIN_ORIG)  
    {UART3_TX,  UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {UART1_TX,  UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
#endif
    {NC,    NC,    0}
};
    //{PA_2,  LPUART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    //{UART_TXD,  UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},

const PinMap PinMap_UART_RX[] = {
    {SERIAL_RX,  UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
#if defined(PIN_ORIG)   
    {UART3_RX,  UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {UART_RXD, UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
#endif    
    {NC,    NC,    0}
};
    //  {PA_3,  LPUART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    //{UART_RXD,  UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},

const PinMap PinMap_UART_RTS[] = {
#if defined(PIN_ORIG)    
    {UART_RTS,  UART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
#endif    
    {NC,    NC,    0}
};
    //{UART2_RTS,  UART_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},

const PinMap PinMap_UART_CTS[] = {
#if defined(PIN_ORIG)  
    {UART_CTS,  UART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
#endif    
    {NC,    NC,    0}
};
    //{UART2_CTS,  UART_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},

//*** SPI ***

const PinMap PinMap_SPI_MOSI[] = {
#if defined(PIN_ORIG)
    {SPI_MOSI, SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
#endif    
    {NC,    NC,    0}
};
    //{SPI_MOSI,   SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},


const PinMap PinMap_SPI_MISO[] = {
#if defined(PIN_ORIG)
    {SPI_MISO, SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},        
#endif
    {NC,    NC,    0}
};
    //{SPI_MISO,   SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},

const PinMap PinMap_SPI_SCLK[] = {
#if defined(PIN_ORIG)
    {SPI_SCK, SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
#endif    
    {NC,    NC,    0}
};
    //{SPI_SCK,  SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},

const PinMap PinMap_SPI_SSEL[] = {
#if defined(PIN_ORIG)
    {SPI_CS0, SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
    {SPI_CS1, SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
#endif    
    {NC,    NC,    0}
};
    //{SPI_CS0,   SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},

//*** CAN ***
const PinMap PinMap_CAN_RD[] = {
//  {PA_11, CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_CAN1)},
    {NC,    NC,    0}
};

const PinMap PinMap_CAN_TD[] = {
//  {PA_12, CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_CAN1)},
    {NC,    NC,    0}
};
