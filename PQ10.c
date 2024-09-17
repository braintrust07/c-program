#include<stdio.h>
void main()
{
char ch;
printf("Enter any alphabet :");
scanf("%c",&ch);
if(ch >= 'a' && ch <= 'z')
printf("It is a lower case alphabet");
else if(ch >= 'A' && ch <= 'Z')
printf("It is a upper case alphabet");
}