#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("The lengths must be positive numbers.\n");
    }

    else if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        }
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is Isosceles.\n");
        } else if{
            printf("The triangle is Scalene.\n");
        }
    else {
        printf("The lengths do not form a triangle.\n");
    }

    return 0;
}
