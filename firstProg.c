#include<stdio.h>

int main(){
    int m,n;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    if(m==0){
        printf("The value of n is 0");
    }
    else if(m>0){
        printf("The value of n is 1");
    }
    else if(m<0){
        printf("The value of n is -1");
    }
    return 0;
}
