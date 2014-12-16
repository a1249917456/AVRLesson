#include<iom16v.h>
#include<macros.h>

void main()
{
 	 unsigned int i;
	 DDRA|=BIT(2);
	 PORTA|=BIT(2);
	 DDRB=0XFF;
	 while(1)
	 {
	  PORTB=0XFE;
	  i=50000;
	 while(i--);
	  i=50000;
	 while(i--);
	 i=50000;
	 while(i--);
	 i=50000;
	 while(i--);
	 PORTB=0XFF;
	  i=50000;
	 while(i--);
	  i=50000;
	 while(i--);
	 i=50000;
	 while(i--);
	 i=50000;
	 while(i--);
	 }
}