//WAP takes char from user and check weather it is vowel or constant using switch case in c
#include<stdio.h>

int main(){
    char c ;
    printf("Enter the value of character: ");
    scanf(" %c",&c);

    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("The character is vowel");
        break;
         case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("The character is vowel");
        break;
        default:
            printf("It is constraint\n");
    }
    return 0;
}
