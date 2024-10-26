#include <stdio.h>

// Function prototype
void dectobin(int num);

int main() {
    int dec;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    printf("Binary equivalent: ");
    dectobin(dec);

    return 0;
}
void dectobin(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int n = 0;
    while (num > 0) {
        binary[n] = num % 2;
        num = num / 2;
        index++;
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}