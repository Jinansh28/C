#include<stdio.h>
int main(){
    char ch;
    printf("Enter character :");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        printf("Character is uppercase");
    }
    else if(ch>=97 && ch<=122){
        printf("Character is smallcase");
    }
    else if(ch>=48 && ch<=57){
        printf("Character is digit");
    }
    else{
        printf("Character is special symbol");
    }
    return 0;
}