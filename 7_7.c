#include <stdio.h>

void evenOdd(int x) {
    if (x%2==0) {
        printf("%d is even.\n", x);
    } else {
        printf("%d is odd.\n", x);
    }
}

void main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    evenOdd(n);
}
