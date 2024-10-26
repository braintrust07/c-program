#include<stdio.h>
void max( int a);

void main()
{
int x;
printf("enter a number");
scanf("%d",&x);
max(x);
}
void max( int a)
{
int b;
if( a>=0)
printf("%d is the absolute value",a);

else 
b=-a;
printf("%d is absolute value",b);
}