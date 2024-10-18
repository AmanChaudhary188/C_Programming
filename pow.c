//CALCULATE POWER OF A NUMBER 
#include<stdio.h>

int power(int a,int b);

int power(int a,int b){
    int p=a;
    for(int i=1;i<b;i++){
        p=p*a;
    }
    return p;
}

int main(){
    int num,pow;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Enter the power: ");
    scanf("%d",&pow);

    printf("The power of %d is %d",num,power(num,pow));

    return 0;
}