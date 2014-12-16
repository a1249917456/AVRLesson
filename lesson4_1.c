#include <iom16v.h>
#include <macros.h>

#define uchar unsigned char
#define uint  unsigned int
uchar table[16]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d, 0x07,
		           0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
void delay(uint MS)		  
{
 uint i,j;
 for( i=0;i<MS;i++)
 for(j=0;j<1141;j++);	//1141??8MHz???,???????????????
}

void show(uchar data,uchar num)
{
        PORTB=table[data];
     	PORTA|=BIT(3);//00001000
     	PORTA&=~BIT(3);
	
	    PORTB=0XFF;		 
     	PORTB&=~BIT(num);//0XFE;
     	PORTA|=BIT(4);
     	PORTA&=~BIT(4);
	    delay(1);
}
void main()
{
     uint i,j;

     DDRA=0XFF;
     DDRB=0XFF;
     PORTA|=BIT(6);
     

     while(1)
     {
      for(j=0;j<600;j++)
       {
        for(i=0;i<6;i++)
        {
 	  show((i+j/100)%6,i);     
        }
       }
     }

}