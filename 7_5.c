#include <stdio.h>
int Area(int a) {
    return a*a;
}
int Perimeter(int a) {
    return 4*a;
}

int main() {
    int side;
    printf("Enter the length of the side of the square: ");
    scanf("%d", &side);
    int area = Area(a);
    int perimeter = Perimeter(a);
    printf("Area of the square: %d\n", area);
    printf("Perimeter of the square: %d\n", perimeter);
    
    return 0;
}
