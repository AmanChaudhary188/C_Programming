#include <stdio.h>

int main() {
    int num, reverse = 0, originalNum, rem;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
   
    do {
        rem = num % 10;          
        reverse = reverse * 10 + rem; 
        num /= 10;                     
    } while (num != 0);
    
    if (originalNum == reverse) {
        printf("%d is a palindrome\n", originalNum);
    } else {
        printf("%d is not a palindrome\n", originalNum);
    }

    return 0;
}
