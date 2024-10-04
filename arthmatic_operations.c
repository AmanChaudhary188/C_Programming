// c program thatrtakes two numbers and an arthmatic operator and then prform operation
#include <stdio.h>

int main(){
    int a,b;
    char c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);

    printf("Enter + for addition, Enter - for subtraction, Enter * for multiplication, Enter / for division: ");
    scanf(" %c",&c);

    if(c=='+'){
        printf("%d + %d= %d",a,b,(a+b));
    }
    else if(c=='-'){
        printf("%d - %d= %d",a,b,(a-b));
    }
    else if(c=='*'){
        printf("%d * %d= %d",a,b,(a*b));
    }
    else if(c=='/'){
        printf("%d / %d= %d",a,b,(a/b));
    }
    else{
        printf("Wrong Input");
    }
return 0;
}
