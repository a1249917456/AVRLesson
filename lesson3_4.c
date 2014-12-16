#include<iom16v.h>
#include<macros.h>
#define uint unsigned int
void delay(uint ms)
{
 	 uint i,j;
	 for(i=0;i<ms;i++)
	 for(j=0;j<1141;j++);
}
void main()
{
 	 uint m;
 	 DDRA|=BIT(6);
	 for(m=0;m<5;m++)
	 {
	 PORTA&=~BIT(6);
	 delay(500);
	 PORTA|=BIT(6);
	 delay(500);
	 }
}