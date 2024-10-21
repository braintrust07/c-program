#include<stdio.h>
int main()
{
  float a,b,result;
  char ch;
  
  printf("enter operation");
  scanf("%c",&ch);

  printf("enter a,b=");
  scanf("%f %f",&a,&b);

  switch (ch) {
    case '+':
    result=a+b;
      printf("Result is %f",result);
      break;
    case '-':
       result=a-b;
      printf("Result is %f",result);
      break;
    case '*':
       result=a*b;
      printf("Result is %f",result);
      break;
    case '/':
      result=a/b;
      printf("Result is %f",result);
      break;
    
  }
}