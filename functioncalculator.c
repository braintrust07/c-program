#include<stdio.h>

int x,y;

void Sum()
{
int result=x+y;
printf("Result is %d\n",result);
}

void Sub()
{
int result=x-y;
printf("Result is %d\n",result);
}

void Multi()
{
int result=x*y;
printf("Result is %d\n",result);
}

void Div()
{
int result=x/y;
printf("Result is %d\n",result);
}

void main()
{
printf("Enter x and y:");
scanf("%d %d",&x,&y);

Sum();
Sub();
Multi();
Div();
}