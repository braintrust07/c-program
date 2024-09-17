#include<stdio.h>
void main()
{
int A,B,C,sum;
printf("Enter three angles:");
scanf("%d%d%d",&A,&B,&C);
sum=A+B+C;
if(sum==180)
{
printf("The Triangle is VALID");
}
if(sum!=180)
{
printf("The Triangle is NOT VALID");
}
}