#include<LPC21XX.H>
#include"lcd_header.h"

#define IR1 1<<10
#define IR2 1<<11
#define M1 1<<16
#define M2 1<<17

void MOTOR_ON(void);
void MOTOR_OFF(void);
 int main()
{
unsigned int count=0;
IODIR0&=~(1<<10)|(1<<11); //sensor as input
IODIR1=(M1|M2);//m1&m2 as output
LCD_INIT();
LCD_COMMAND(0x80);
{
LCD_STR("Smart Conveyor");
}
 

while(1)
{
  if((IOPIN0&IR1)==0)	//wait for product detect
  {
  MOTOR_ON();
  delay_ms(50);
  while((IOPIN0&IR1)==0);	//wait for dedect relese
  }

if((IOPIN0&IR2)==0)	//wait for the product
   {
  delay_ms(500);  		  
  count++;	  //count the product.
  LCD_COMMAND(0xc0);
  LCD_STR("count:");
  LCD_INTEGER(count);
  while((IOPIN0&IR2)==0);	//wait for dedect relese
  }
  MOTOR_OFF();
  
 }
}

void MOTOR_ON(void)
{
IOSET1=M1;
IOCLR1=M2;
}

void MOTOR_OFF(void)
{
IOCLR1=M1;
IOCLR1=M2;
}





