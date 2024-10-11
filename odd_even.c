//WAP to check given number is positive or odd using switch case

#include <stdio.h>

int main() {
    int number;
    char type;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number%2==0){
        type='e';
    }
    else{
        type='o';
    }

    switch(type){
    case 'e':
        printf("Number is even");
        break;
    case 'o':
        printf("Number is odd");
    }


    return 0;
}

