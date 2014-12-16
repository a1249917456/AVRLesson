#include<iom16v.h>
#include<macros.h>
#define uint unsigned int
#define uchar unsigned char
#define max 500
#define madium 150

void delay(uint ms){
	 uint i,j;
	 for(i=0;i<ms;i++)
	 for(j=0;j<1141;j++);
}

void jled(){
	 PORTC|=BIT(6);
	 delay(max);
	 PORTC&=~BIT(6);

}

void buzzer(){
	 
	 PORTA&=~BIT(6);
	 delay(madium);
	 PORTA|=BIT(6);
	 delay(350);

}

void main(){
	 uint m,n;

	 DDRC|=BIT(6);
	 DDRA|=BIT(6);
	 for(m=0;m<4;m++){
	 jled();
	 buzzer();
	 }
	 
	 for(n=0;n<2;n++){
	 	jled();
	 
	 	for(m=0;m<7;m++){
	 	buzzer();
	 	}
	 }
	 
	 for(n=0;n<2;n++){
	 jled();
	
	 for(m=0;m<4;m++){
	 	buzzer();

	 	}
		delay(1500);
	 }
}