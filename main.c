#include "stm32f10x_tim.h"
#include "stm32f10x_rcc.h"
#include "Dio.h"

#define led1 DIO_CHANNEL_PC13
#define led2 DIO_CHANNEL_PC14
#define led3 DIO_CHANNEL_PC15
#define led4 DIO_CHANNEL_PA3

static uint32_t count = 0;

typedef struct{
	void (*function)(void);
	uint32_t time;
	uint32_t delay;
}Task;

void TIM2_INT_Init(void);
uint32_t millis(void);
void TIM2_IRQHandler(void);
void multiTasks(Task *task);

void controlLed1(void);
void controlLed2(void);
void controlLed3(void);
void controlLed4(void);

int main(void){

	config(led1, OUTPUT);
	config(led2, OUTPUT);
	config(led3, OUTPUT);
	config(led4, OUTPUT);
	
	Dio_WriteChannel(led1, STD_HIGH);
	Dio_WriteChannel(led2, STD_HIGH);
	Dio_WriteChannel(led3, STD_HIGH);
	Dio_WriteChannel(led4, STD_HIGH);
	
	Task task1 = {&controlLed1,millis(),200};
	Task task2 = {&controlLed2,millis(),400};
	Task task3 = {&controlLed3,millis(),800};
	Task task4 = {&controlLed4,millis(),1000};
	
	TIM2_INT_Init();
	
	while(1)
	{
		multiTasks(&task1);
		multiTasks(&task2);
		multiTasks(&task3);
		multiTasks(&task4);
	}
}

void TIM2_INT_Init(void){
	/*Init struct*/
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStruct;
	NVIC_InitTypeDef NVIC_InitStruct;
	
	/*Enable clock for TIM2*/
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
	
	/*Timer counter in 1ms*/
	TIM_TimeBaseInitStruct.TIM_Prescaler = 3599;
	TIM_TimeBaseInitStruct.TIM_Period = 19;
	TIM_TimeBaseInitStruct.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_TimeBaseInitStruct.TIM_CounterMode = TIM_CounterMode_Up;
	TIM_TimeBaseInit(TIM2, &TIM_TimeBaseInitStruct);
	
	/*Enable TIM2 interrupt*/
	TIM_ITConfig(TIM2, TIM_IT_Update, ENABLE);
	/*Start TIM2*/
	TIM_Cmd(TIM2, ENABLE);
	
	/*Nested vectored interrupt settings*/
	NVIC_InitStruct.NVIC_IRQChannel = TIM2_IRQn;
	NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority = 0x00;
	NVIC_InitStruct.NVIC_IRQChannelSubPriority = 0x00;
	NVIC_InitStruct.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStruct);
}

uint32_t millis(void){	
	return count;
}

void TIM2_IRQHandler(void){
	if (TIM_GetITStatus(TIM2, TIM_IT_Update))
	{
		count++;
		/*Clears the TIM2 interrupt pending bit*/
		TIM_ClearITPendingBit(TIM2, TIM_IT_Update);
	}
}
void multiTasks(Task *task){
	if(millis() - task->time >= task->delay){
		task->function();
		task->time = millis();
	}
}
void controlLed1(void){
	static Dio_LevelType preStatus1 = STD_HIGH;
	if(preStatus1 == STD_LOW) preStatus1 = STD_HIGH;
	else preStatus1 = STD_LOW;
	Dio_WriteChannel(led1, preStatus1);
}
void controlLed2(void){
	static Dio_LevelType preStatus2 = STD_HIGH;
	if(preStatus2 == STD_LOW) preStatus2 = STD_HIGH;
	else preStatus2 = STD_LOW;
	Dio_WriteChannel(led2, preStatus2);
}

void controlLed3(void){
	static Dio_LevelType preStatus3 = STD_HIGH;
	if(preStatus3 == STD_LOW) preStatus3 = STD_HIGH;
	else preStatus3 = STD_LOW;
	Dio_WriteChannel(led3, preStatus3);
}

void controlLed4(void){
	static Dio_LevelType preStatus4 = STD_HIGH;
	if(preStatus4 == STD_LOW) preStatus4 = STD_HIGH;
	else preStatus4 = STD_LOW;
	Dio_WriteChannel(led4, preStatus4);
}