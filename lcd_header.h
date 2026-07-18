#include"delay.h"
#define LCD_D 0Xff<<0
#define RS 1<<8
#define E 1<<9

void LCD_INIT(void);
void LCD_COMMAND(unsigned char);
void LCD_DATA(unsigned char);
void LCD_INTEGER(int);
void LCD_STR(unsigned char*);
void delay_ms(unsigned int ms);

void LCD_INIT(void)
{
IODIR0=LCD_D|RS|E;
LCD_COMMAND(0X01);
LCD_COMMAND(0X02);
LCD_COMMAND(0X0C);
LCD_COMMAND(0X38);
}

void LCD_COMMAND(unsigned char CMD)
{
IOCLR0=LCD_D;
IOSET0=CMD;
IOCLR0=RS;
IOSET0=E;
delay_ms(2);
IOCLR0=E;
}

void LCD_DATA(unsigned char d)
{
IOCLR0=LCD_D;
IOSET0=d;
IOSET0=RS;
IOSET0=E;		 
delay_ms(2);
IOCLR0=E;
}

void LCD_INTEGER(int n)
{
signed char i=0;
unsigned char arr[5];
if(n==0)
LCD_DATA('0');
else
{
if(n<0)
{
LCD_DATA('-');
n=-n;
}
while(n>0)
{
arr[i++]=n%10;
n=n/10;
}
for(--i;i>=0;i--)
LCD_DATA(arr[i]+48);
}
}



void LCD_STR(unsigned char*p)
{
while(*p)
{
LCD_DATA(*p++);
}
}
