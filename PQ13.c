#include<stdio.h>
int main()
{
int amount;
int note2000,note500,note200,note100,note50,note20,note10,note5,coin2,coin1;
note2000=note500=note200=note100=note50=note20=note10=note5=coin2=coin1=0;

printf("Enter the Amount:");
scanf("%d",&amount);

if (amount>=2000)
{
note2000=amount/2000;
amount -=note2000*2000;
}
if (amount>=500)
{
note500=amount/500;
amount -=note500*500;
}
if (amount>=200)
{
note200=amount/200;
amount -=note200*200;
}
if (amount>=100)
{
note100=amount/100;
amount -=note100*100;
}
if (amount>=50)
{
note50=amount/50;
amount -=note2000*2000;
}
if (amount>=20)
{
note20=amount/20;
amount -=note20*20;
}
if (amount>=10)
{
note10=amount/10;
amount -=note10*10;
}
if (amount>=5)
{
note5=amount/5;
amount -=note5*5;
}
if (amount>=2)
{
coin2=amount/2;
amount -=coin2*2;
}
if (amount>=1)
{
coin1=amount;
}

printf("Total number of notes and coins = \n");
printf("2000= %d \n",note2000);
printf("500= %d \n",note500);
printf("200= %d \n",note200);
printf("100= %d \n",note100);
printf("50= %d \n",note50);
printf("20= %d \n",note20);
printf("10= %d \n",note10);
printf("5= %d \n",note5);
printf("2= %d \n",coin2);
printf("1= %d \n",coin1);
}