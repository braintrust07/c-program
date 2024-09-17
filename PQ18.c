#include<stdio.h>
void main()
{
int cp,sp,profit,loss;
printf("enter cost price:");
scanf("%d",&cp);
printf("enter selling price:");
scanf("%d",&sp);
if(cp>sp)
{
loss=cp-sp;
printf("It is a LOSS OF %d",loss);
}
else if(sp>cp)
{
profit=sp-cp;
printf("It is a PROFIT OF %d",profit);
}
else
{
printf("It is a neither PROFIT nor LOSS");
}
}