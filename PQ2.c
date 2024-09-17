#include<stdio.h>
void main()
{
int num1,num2,num3,max;

printf("enter three numbers:",num1,num2,num3);
scanf("%d%d%d",&num1,&num2,&num3);

if((num1>num2)&&(num1>num3))
max=num1;
else if((num2>num3)&&(num2>num1))
max=num2;
else if((num3>num2)&&(num3>num1))
max=num3;

printf("The max of the three numbers is %d",max);
}