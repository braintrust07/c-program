#include<stdio.h>
void main()
{
float p,ch,b,m,co,per;
printf("Enter the marks of all the five subjects:");
scanf("%f%f%f%f%f",&p,&ch,&b,&m,&co);
per=(p+ch+b+m+co)/5;
printf("\nPercentage=%f\n",per);
if(per>=90)
{
printf("Grade A\n");
}
else if(per>=80)
{
printf("Grade B\n");
}
else if(per>=70)
{
printf("Grade C\n");
}
else if(per>=60)
{
printf("Grade D\n");
}
else if(per>=40)
{
printf("Grade E\n");
}
else if(per>=40)
{
printf("Grade F\n");
}
}