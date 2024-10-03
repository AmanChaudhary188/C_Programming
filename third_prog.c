#include <stdio.h>

int main() {
    char grade;


    printf("Enter your grade : ");
    scanf(" %c", &grade);

    if (grade == 'E' || grade == 'e') {
        printf("Evaluation: Excellent\n");
    } else if (grade == 'V' || grade == 'v') {
        printf("Evaluation: Very Good\n");
    } else if (grade == 'A' || grade == 'a') {
        printf("Evaluation: Average\n");
    } else if (grade == 'G' || grade == 'g') {
        printf("Evaluation: Good\n");
    } else if (grade == 'F' || grade == 'f') {
        printf("Evaluation: Fail\n");
    } else {
        printf("Invalid grade entered. Please enter E, V, A, G, or F.\n");
    }

    return 0;
}
