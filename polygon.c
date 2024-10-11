#include <stdio.h>

int main() {
    int sides;

    printf("Enter the number of sides (3, 4, or 5): ");
    scanf("%d", &sides);

    switch (sides) {
        case 3:
            printf("Triangle\n");
            break;
        case 4:
            printf("Quadrilateral\n");
            break;
        case 5:
            printf("Pentagon\n");
            break;
        default:
            printf("Invalid number of sides\n");
            break;
    }

    return 0;
}
