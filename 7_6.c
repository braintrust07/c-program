#include<stdio.h>
void max( int a, int b ,int c);

void main()
{
max(5,12,8);
}
void max( int a, int b ,int c)
{
if( a>b&a>c)
printf("%d is max",a);

else if(b>a&b>c)

printf("%d is max",b);
else
printf("%d is max",c);

}