#include<stdio.h>
void main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
if(num>0)
printf("The number is POSITIVE");
else if(num==0)
printf("The number is ZERO");
else if(num<0)
printf("The number is NEGATIVE");
}