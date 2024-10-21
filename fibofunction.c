#include <stdio.h>


int Fibonacci(int n);

void main()
{
printf("Fibonacci series is %d",Fibonacci(10));
}

int Fibonacci(int x)
{
int a = 0,b = 1,sum=0,sum1=1;
for(int i=0;i<x-2;i++)
{
  sum = a+b;
  sum1=sum1+sum;
  a=b;
  b=sum;
} 
return sum1;
}
