#include<stdio.h>

int main(){
    int math,phy,chem;
    printf("Enter the marks in math");
    scanf("%d",&math);

     printf("Enter the marks in physics");
    scanf("%d",&phy);

     printf("Enter the marks in chemistry");
    scanf("%d",&chem);

    int totalSum=math+phy+chem;
    int mpTotal=math+phy;

    printf("Total marks of math, physics and chemistry is: %d\n",totalSum);
    printf("Total marks of math and physics is: %d\n",mpTotal);

    if(totalSum>=190 && mpTotal>=140){
        printf("\nCandidate is eligible for admmision\n");
    }
    else{
        printf("\nThe Candidate is not eligible for admmision");
    }
    return 0;
}
