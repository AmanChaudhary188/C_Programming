//WAP to take the sides of triangle and determine its lateral,isolate or scaler using switch case
#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    int Type;

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Sides of a triangle must be positive.\n");
        return 1;
    }

    if (side1 == side2 && side2 == side3) {
      Type = 1;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        Type = 2;
    } else {
        Type = 3;
    }

    switch (Type) {
        case 1:
            printf("The triangle is Equilateral.\n");
            break;
        case 2:
            printf("The triangle is Isosceles.\n");
            break;
        case 3:
            printf("The triangle is Scalene.\n");
            break;
        default:
            printf("Wrong Input.\n");
    }

    return 0;
}

