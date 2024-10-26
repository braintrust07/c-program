#include<stdio.h>
int x=4,y=6;
int sum();

int main() {
  int result = sum();
  printf("%d", result);
  return 0;
}

int sum() {
int sum1=x+y;
    return sum1;
  }


