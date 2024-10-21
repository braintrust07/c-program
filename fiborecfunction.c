#include <stdio.h>


int Fibonacci(int n);

void main()
{
printf("Fibonacci series is %d",Fibonacci(10));
}

int Fibonacci(int x)
{
int sum,sum1=1;
if(x==1)
return 0;
else if(x==2)
return 1;
else
sum=Fibonacci(x-1)+Fibonacci(x-2);
sum1=sum1+sum;
return sum1;
} 

