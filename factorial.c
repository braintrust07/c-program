#include <stdio.h>

void main() {
  int i = 1,number,fact=1;
printf("enter number:");
scanf("%d",&number);
for(int i=1;i<=number;i++){
fact=fact*i;
 } 
printf("%d\n",fact);
}