#include<iom16v.h>
#include<macros.h>
#define uint unsigned int
#define uchar unsigned char
void delay(uint ms)
{
 	uint i,j;
	for(i=0;i<ms;i++)
		for(j=0;j<1141;j++); 
}
void main()
{
 	 uchar k;
	 DDRA|=BIT(2);
	 PORTA|=BIT(2);
	 
	 DDRB=0XFF;
	 PORTB=0XFF;
	 while(1)
	 {
	 for(k=0;k<8;k++)
	 {
	 PORTB&=~BIT(k);
	 delay(1000);
	 PORTB|=BIT(k);
	 delay(1000);
	 }
	 }
}

