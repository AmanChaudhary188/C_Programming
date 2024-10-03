#include<stdio.h>

int main(){

int rollNo,physics,chemistry,computer;
char name[100];

printf("Enter Roll No of student: ");
scanf("%d",&rollNo);

 printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter the marks of physics,chemistry,computer: ");
    scanf("%d %d %d ",&physics &chemistry &computer);

    printf("Roll No: %d",rollNo);
    printf("Name of student: %s",name);

    int total=physics+chemistry+computer;
    float percentage=(physics+chemistry+computer)/300*100;

    printf("Marks in Physics : %d\n",physics);
    printf("Marks in Chemistry : %d\n",chemistry);
    printf("Marks in Computer Application : %d\n",computer);

    printf("Total marks is: %d\n",total);
    printf("Percentage: %f\n", percentage);
return 0;
}
