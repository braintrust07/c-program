#include<stdio.h>
void main(){
float sal,tax;
char name[10];
printf("Enter the name of the employee :");
scanf("%s",&name);
printf("Enter salary:");
scanf("%f",&sal);
printf("%s",name);

if(sal<=500000)
tax=0.05*sal;
else if(500000<sal<1000000)
tax=0.05*500000+0.1*(sal-500000);
else if(1000000<sal<2000000)
tax=0.05*500000+0.1*500000+0.2*(sal-1000000);
else
tax=0.05*500000+0.1*500000+0.2*1000000+0.3*(sal-2000000);
printf("Tax is %.2f",tax);
}