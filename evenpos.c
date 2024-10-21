#include<stdio.h>
void main()
{
int a;
printf("Enter a number :");
scanf("%d",&a);
if(a>0)
{
printf("POSITIVE");

if(a % 2 ==0)
{
printf("\nEVEN");
}
else
{
printf("\nODD");
}
} 
else if(a<0)
{
printf("NEGATIVE");
}
}
