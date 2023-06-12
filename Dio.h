#ifndef __DIO_H
#define __DIO_H
#include "stm32f10x.h"
#define identifyPin				\
	GPIO_TypeDef * gpioPort;\
	uint16_t gpioPin;				\
	switch(ChannelId){\
		case DIO_CHANNEL_PA0:	\
			gpioPort = GPIOA;		\
			gpioPin = GPIO_Pin_0;	\
			break;								\
		case DIO_CHANNEL_PA1:		\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_1;	\
			break;								\
		case DIO_CHANNEL_PA2:		\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_2;	\
			break;								\
		case DIO_CHANNEL_PA3:		\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_3;	\
			break;								\
		case DIO_CHANNEL_PA4:		\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_4;	\
			break;								\
		case DIO_CHANNEL_PA5:		\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_5;	\
			break;								\
		case DIO_CHANNEL_PA6:		\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_6;	\
			break;								\
		case DIO_CHANNEL_PA7:		\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_7;	\
			break;								\
		case DIO_CHANNEL_PA8:		\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_8;	\
			break;								\
		case DIO_CHANNEL_PA9:		\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_9;	\
			break;								\
		case DIO_CHANNEL_PA10:	\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_10;\
			break;								\
		case DIO_CHANNEL_PA11:	\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_11;\
			break;								\
		case DIO_CHANNEL_PA12:	\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_12;\
			break;								\
		case DIO_CHANNEL_PA13:	\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_13;\
			break;								\
		case DIO_CHANNEL_PA14:	\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_14;\
			break;								\
		case DIO_CHANNEL_PA15:	\
			gpioPort = GPIOA;			\
			gpioPin = GPIO_Pin_15;\
			break;								\
														\
		case DIO_CHANNEL_PB0:		\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_0;	\
			break;								\
		case DIO_CHANNEL_PB1:		\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_1;	\
			break;								\
		case DIO_CHANNEL_PB2:		\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_2;	\
			break;								\
		case DIO_CHANNEL_PB3:		\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_3;	\
			break;								\
		case DIO_CHANNEL_PB4:		\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_4;	\
			break;								\
		case DIO_CHANNEL_PB5:		\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_5;	\
			break;								\
		case DIO_CHANNEL_PB6:		\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_6;	\
			break;								\
		case DIO_CHANNEL_PB7:		\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_7;	\
			break;								\
		case DIO_CHANNEL_PB8:		\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_8;	\
			break;								\
		case DIO_CHANNEL_PB9:		\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_9;	\
			break;								\
		case DIO_CHANNEL_PB10:	\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_10;\
			break;								\
		case DIO_CHANNEL_PB11:	\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_11;\
			break;								\
		case DIO_CHANNEL_PB12:	\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_12;\
			break;								\
		case DIO_CHANNEL_PB13:	\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_13;\
			break;								\
		case DIO_CHANNEL_PB14:	\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_14;\
			break;								\
		case DIO_CHANNEL_PB15:	\
			gpioPort = GPIOB;			\
			gpioPin = GPIO_Pin_15;\
			break;								\
														\
		case DIO_CHANNEL_PC0:		\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_0;	\
			break;								\
		case DIO_CHANNEL_PC1:		\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_1;	\
			break;								\
		case DIO_CHANNEL_PC2:		\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_2;	\
			break;								\
		case DIO_CHANNEL_PC3:		\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_3;	\
			break;								\
		case DIO_CHANNEL_PC4:		\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_4;	\
			break;								\
		case DIO_CHANNEL_PC5:		\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_5;	\
			break;								\
		case DIO_CHANNEL_PC6:		\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_6;	\
			break;								\
		case DIO_CHANNEL_PC7:		\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_7;	\
			break;								\
		case DIO_CHANNEL_PC8:		\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_8;	\
			break;								\
		case DIO_CHANNEL_PC9:		\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_9;	\
			break;								\
		case DIO_CHANNEL_PC10:	\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_10;\
			break;								\
		case DIO_CHANNEL_PC11:	\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_11;\
			break;								\
		case DIO_CHANNEL_PC12:	\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_12;\
			break;								\
		case DIO_CHANNEL_PC13:	\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_13;\
			break;								\
		case DIO_CHANNEL_PC14:	\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_14;\
			break;								\
		case DIO_CHANNEL_PC15:	\
			gpioPort = GPIOC;			\
			gpioPin = GPIO_Pin_15;\
			break;\
	}	
#define Dio_PortLevelType uint16_t
typedef enum{
	DIO_CHANNEL_PA0,
	DIO_CHANNEL_PA1,
	DIO_CHANNEL_PA2,
	DIO_CHANNEL_PA3,
	DIO_CHANNEL_PA4,
	DIO_CHANNEL_PA5,
	DIO_CHANNEL_PA6,
	DIO_CHANNEL_PA7,
	DIO_CHANNEL_PA8,
	DIO_CHANNEL_PA9,
	DIO_CHANNEL_PA10,
	DIO_CHANNEL_PA11,
	DIO_CHANNEL_PA12,
	DIO_CHANNEL_PA13,
	DIO_CHANNEL_PA14,
	DIO_CHANNEL_PA15,
	
	DIO_CHANNEL_PB0,
	DIO_CHANNEL_PB1,
	DIO_CHANNEL_PB2,
	DIO_CHANNEL_PB3,
	DIO_CHANNEL_PB4,
	DIO_CHANNEL_PB5,
	DIO_CHANNEL_PB6,
	DIO_CHANNEL_PB7,
	DIO_CHANNEL_PB8,
	DIO_CHANNEL_PB9,
	DIO_CHANNEL_PB10,
	DIO_CHANNEL_PB11,
	DIO_CHANNEL_PB12,
	DIO_CHANNEL_PB13,
	DIO_CHANNEL_PB14,
	DIO_CHANNEL_PB15,
	
	DIO_CHANNEL_PC0,
	DIO_CHANNEL_PC1,
	DIO_CHANNEL_PC2,
	DIO_CHANNEL_PC3,
	DIO_CHANNEL_PC4,
	DIO_CHANNEL_PC5,
	DIO_CHANNEL_PC6,
	DIO_CHANNEL_PC7,
	DIO_CHANNEL_PC8,
	DIO_CHANNEL_PC9,
	DIO_CHANNEL_PC10,
	DIO_CHANNEL_PC11,
	DIO_CHANNEL_PC12,
	DIO_CHANNEL_PC13,
	DIO_CHANNEL_PC14,
	DIO_CHANNEL_PC15
}Dio_ChannelType;

typedef enum{
	INPUT_PULLUP,
	OUTPUT 
}PinMode;
typedef enum{
	STD_LOW,
	STD_HIGH 
}Dio_LevelType;
typedef enum{
	PortA,
	PortB,
	PortC	
}Dio_PortType;
void config(Dio_ChannelType ChannelId, PinMode Mode);
void Dio_WriteChannel (Dio_ChannelType ChannelId,Dio_LevelType Level);
Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId);
void Dio_WritePort (Dio_PortType PortId,Dio_PortLevelType Level);
#endif
