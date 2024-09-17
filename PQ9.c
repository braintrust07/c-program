#include<stdio.h>
void main()
{
char ch;
printf("Enter any character :");
scanf("%c",&ch);
if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
printf("It is a ALPHABET");
else if(ch >= '0' && ch <= '9')
printf("It is a DIGIT");
else
printf("It is a SPECIAL CHARACTER");
}