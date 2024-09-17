#include<stdio.h>
void main()
{
int num1,num2,max;

printf("enter two numbers:",num1,num2);
scanf("%d%d",&num1,&num2);

if((num1>num2))
max=num1;
else if((num2>num1))
max=num2;


printf("The max of the two numbers is %d",max);
}