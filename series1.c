#include<stdio.h>
void main() {

int N, sum=1;
printf("Enter N: ");
scanf("%d",&N);
int f1=0;
int f2=1;
int f3=0;
int i=0;

while(i<(N-2)) 
{
f3=f1+f2; 
sum = sum + f3; 
f1 = f2; 
f2 = f3; 
i++;
}
printf("\nSum is %d", sum);

}