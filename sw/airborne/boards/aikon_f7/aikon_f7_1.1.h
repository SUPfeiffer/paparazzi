#ifndef CONFIG_AIKON_F7_H
#define CONFIG_AIKON_F7_H

#define BOARD_AIKON_F7

/* Clockspeed */


/* GPIOs */
/* "LED 1 in betaflight config" */
#define LED_1_GPIO GPIOC
#define LED_1_PIN GPIO13
#define LED_1_GPIO_ON gpio_clear
#define LED_1_GPIO_OFF gpio_set
#define LED_1_AFIO_REMAP ((void)0)

/* "LED_STRIP 1 in betaflight config" */
#define LED_1_GPIO GPIOA
#define LED_1_PIN GPIO15
#define LED_1_GPIO_ON gpio_clear
#define LED_1_GPIO_OFF gpio_set
#define LED_1_AFIO_REMAP ((void)0)

/* Beeper */
#define BEEPER_GPIO GPIOC
#define BEEPER_GPIO_CLK RCC_GPIOC
#define BEEPER_GPIO_PIN GPIO15
#define BEEPER_AFIO_REMAP ((void)0)


/* Actuators */


/* PWM */

/* DShot */
#define DSHOT_SERVO_0 0
#define DSHOT_SERVO_0_GPIO GPIOC
#define DSHOT_SERVO_0_PIN GPIO6
#define DSHOT_SERVO_0_AF GPIO_AF3
#define DSHOT_SERVO_0_DRIVER DSHOTD8
#define DSHOT_SERVO_0_CHANNEL 1

#define DSHOT_SERVO_1 1
#define DSHOT_SERVO_1_GPIO GPIOC
#define DSHOT_SERVO_1_PIN GPIO7
#define DSHOT_SERVO_1_AF GPIO_AF3
#define DSHOT_SERVO_1_DRIVER DSHOTD8
#define DSHOT_SERVO_1_CHANNEL 2

#define DSHOT_SERVO_2 2
#define DSHOT_SERVO_2_GPIO GPIOC
#define DSHOT_SERVO_2_PIN GPIO8
#define DSHOT_SERVO_2_AF GPIO_AF3
#define DSHOT_SERVO_2_DRIVER DSHOTD8
#define DSHOT_SERVO_2_CHANNEL 3

#define DSHOT_SERVO_3 3
#define DSHOT_SERVO_3_GPIO GPIOC
#define DSHOT_SERVO_3_PIN GPIO9
#define DSHOT_SERVO_3_AF GPIO_AF3
#define DSHOT_SERVO_3_DRIVER DSHOTD8
#define DSHOT_SERVO_3_CHANNEL 4

#define DSHOT_SERVO_4 4
#define DSHOT_SERVO_4_GPIO GPIOB
#define DSHOT_SERVO_4_PIN GPIO6
#define DSHOT_SERVO_4_AF GPIO_AF2
#define DSHOT_SERVO_4_DRIVER DSHOTD4
#define DSHOT_SERVO_4_CHANNEL 1

#define DSHOT_SERVO_5 5
#define DSHOT_SERVO_5_GPIO GPIOB
#define DSHOT_SERVO_5_PIN GPIO8
#define DSHOT_SERVO_5_AF GPIO_AF2
#define DSHOT_SERVO_5_DRIVER DSHOTD4
#define DSHOT_SERVO_5_CHANNEL 3

/* UART */
#define UART1_GPIO_AF GPIO_AF7
#define UART1_GPIO_PORT_RX GPIOA
#define UART1_GPIO_RX GPIO10
#define UART1_GPIO_PORT_TX GPIOA
#define UART1_GPIO_TX GPIO9

#define UART2_GPIO_AF GPIO_AF7
#define UART2_GPIO_PORT_RX GPIOA
#define UART2_GPIO_RX GPIO3
#define UART2_GPIO_PORT_TX GPIOA
#define UART2_GPIO_TX GPIO2

#define UART3_GPIO_AF GPIO_AF7
#define UART3_GPIO_PORT_RX GPIOC
#define UART3_GPIO_RX GPIO11
#define UART3_GPIO_PORT_TX GPIOC
#define UART3_GPIO_TX GPIO10

#define UART4_GPIO_AF GPIO_AF8
#define UART4_GPIO_PORT_RX GPIOA
#define UART4_GPIO_RX GPIO1
#define UART4_GPIO_PORT_TX GPIOA
#define UART4_GPIO_TX GPIO0

#define UART5_GPIO_AF GPIO_AF8
#define UART5_GPIO_PORT_RX GPIOD
#define UART5_GPIO_RX GPIO2
#define UART5_GPIO_PORT_TX GPIOC
#define UART5_GPIO_TX GPIO12

/* SPI */
#define SPI1_GPIO_AF GPIO_AF5
#define SPI1_GPIO_PORT_MISO GPIOA
#define SPI1_GPIO_MISO GPIO6
#define SPI1_GPIO_PORT_MOSI GPIOA
#define SPI1_GPIO_MOSI GPIO7
#define SPI1_GPIO_PORT_SCK GPIOA
#define SPI1_GPIO_SCK GPIO5

#define SPI2_GPIO_AF GPIO_AF5
#define SPI2_GPIO_PORT_MISO GPIOC
#define SPI2_GPIO_MISO GPIO2
#define SPI2_GPIO_PORT_MOSI GPIOB
#define SPI2_GPIO_MOSI GPIO15
#define SPI2_GPIO_PORT_SCK GPIOB
#define SPI2_GPIO_SCK GPIO13

#define SPI3_GPIO_AF GPIO_AF6
#define SPI3_GPIO_PORT_MISO GPIOB
#define SPI3_GPIO_MISO GPIO4
#define SPI3_GPIO_PORT_MOSI GPIOB
#define SPI3_GPIO_MOSI GPIO5
#define SPI3_GPIO_PORT_SCK GPIOB
#define SPI3_GPIO_SCK GPIO3

// Slave0 = Gyro
#define SPI_SELECT_SLAVE0_PORT GPIOA
#define SPI_SELECT_SLAVE0_PIN GPIO4
// Slave1 = OSD
#define SPI_SELECT_SLAVE1_PORT GPIOB
#define SPI_SELECT_SLAVE1_PIN GPIO12
// Slave2 = Baro
#define SPI_SELECT_SLAVE2_PORT GPIOB
#define SPI_SELECT_SLAVE2_PIN GPIO2
// Slave3 = Flash
#define SPI_SELECT_SLAVE3_PORT GPIOB
#define SPI_SELECT_SLAVE3_PIN GPIO0

/* I2C */
#define I2C2_GPIO_PORT GPIOB
#define I2C2_GPIO_SCL GPIO10
#define I2C2_GPIO_SDA GPIO11

/* ADC*/
#define USE_AD_TIM1 1 // Not sure if same as betaflight uses, but seems not to be used otherwise

#define ADC_CHANNEL_VSUPPLY ADC_1
#define ADC_CHANNEL_RSSI ADC_2
#define ADC_CHANNEL_CURR ADC_3

#define AD1_1_CHANNEL 10
#define ADC_1 AD1_1
#define ADC_BATT_GPIO_PORT GPIOC
#define ADC_BATT_GPIO_PIN GPIO0

#define AD2_1_CHANNEL 13
#define ADC_2 AD2_1
#define ADC_RSSI_GPIO_PORT GPIOC
#define ADC_RSSI_GPIO_PIN GPIO3

#define AD3_1_CHANNEL 11
#define ADC_3 AD3_1
#define ADC_CURR_GPIO_PORT GPIOC
#define ADC_CURR_GPIO_PIN GPIO1


/* PPM */
#define USE_PPM_TIM11 1
#define PPM_CHANNEL         TIM_IC1
#define PPM_TIMER_INPUT     TIM_IC_IN_TI1
#define PPM_IRQ             NVIC_TIM11_IRQ
// Capture/Compare InteruptEnable and InterruptFlag
#define PPM_CC_IE           TIM_DIER_CC1IE
#define PPM_CC_IF           TIM_SR_CC1IF
#define PPM_GPIO_PORT       GPIOB
#define PPM_GPIO_PIN        GPIO9
#define PPM_GPIO_AF         GPIO_AF3


#endif /* CONFIG_AIKON_F7_H */