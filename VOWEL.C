#include<stdio.h>
void vowel();

void vowel(char c){
    // if(c=='a'||c=='e'|| c=='i'||c=='o'||c=='u'){
    //     printf("Character is vowel");
    // }else{
    //     printf("Character is Not Vowel");
    // }
switch(c){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("Character is vowel");
    break;
    default:
    printf("Character is not vowel");
}
}
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    vowel(c);
    return 0;
}
