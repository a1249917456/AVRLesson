#include<iom16v.h>
#include<macros.h>
#define uint unsigned int
#define uchar unsigned char
uchar table[]={0X3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71,0x00};//十六可不写
void delay(uint ms)
{
 	uint i,j;
	for(i=0;i<ms;i++)
		for(j=0;j<1141;j++); 
}
void show(uchar j,uchar k){
	 PORTA|=BIT(3);//u6 573导通
	 DDRB=0XFF;
	 PORTB=table[j];
	 PORTA&=~BIT(3);//锁存
	 
	 PORTB=0XFF;
	 PORTB&=~BIT(k);
	 
	 PORTA|=BIT(4);
	 PORTA&=~BIT(4);

	 delay(1);

}
void main(){
	 uchar i,j;
	 uchar room[]={4,0,4,4,0,4};
	 DDRA|=BIT(3);
	 DDRA|=BIT(4);
	 while(1){
	 for(j=0;j<600;j++){
	 for(i=0;i<6;i++){
	 show(room[(i+j/100)%6],i);
	 }
	 }
	 }
}