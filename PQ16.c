#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three sides:");
scanf("%d%d%d",&a,&b,&c);
if((a==b && b==c))
{
printf("The Triangle is EQUILATERAL TRIANGLE");
}
else if((a==b) || (b==c) || (c==a))
{
printf("The Triangle is ISOSCELES TRIANGLE");
}
else if((a+b > c) && (a+c > b) && (b+c > a) && (a!=b!=c))
{
printf("The Triangle is SCALENE TRIANGLE");
}
else
{
printf("The Triangle is NOT VALID");
}
}