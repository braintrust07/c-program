#include<stdio.h>
void main()
{
char ch;
printf("Enter any character :");
scanf("%c",&ch);

if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
printf("It is a VOWEL");
else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
printf("It is a CONSONANT");
else
printf("It is not a character");
}