#include<stdio.h>
#include<math.h>
void main()
{
int sum=0,n,x,i=0;
printf("Enter x,n:");
scanf("%d%d",&x,&n);
while(i<=n){
sum=sum+pow(-1,i)*pow(x,i);
i++;
}
printf("Sum of the series =%d",sum);
}

