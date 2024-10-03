#include<stdio.h>

int main(){
int temp;
printf("Enter temperature: ");
scanf("%d",&temp);

if(temp<0){
    printf("Freezing Weather");
}
else if(temp<=10 && temp==0){
    printf("Very cold weather");
}
else if(temp>=10 && temp<=20){
    printf("Cold Weather");
}
else if(temp>=20 && temp<=30){
    printf("Normal in temperature");
}
else if(temp>=30 && temp<=40){
    printf("Hot Weather");
}
else if(temp>=40){
    printf("Very hot Weather");
}
return 0;
}
