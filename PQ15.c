#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three sides:");
scanf("%d%d%d",&a,&b,&c);
if((a+b > c) && (a+c > b) && (b+c > a))
{
printf("The Triangle is VALID");
}
else
{
printf("The Triangle is NOT VALID");
}
}