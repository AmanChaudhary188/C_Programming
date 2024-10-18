//smallest numeber using ternery operator
#include<stdio.h>

int main(){
    int a,b;
    // int c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int c=(a>b)?b:a;

printf("%d is smallest num",c);
    return 0;
}