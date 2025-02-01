#include<stdio.h>
int main(){
    char c;
    printf("Enter a character");
    scanf(" %c",&c);
    if(c>=97 && c<=122){
        printf("Character is small case");
    }
    else if((c>=0 && c<=47)||(c>=58 && c<=64)||(c>=91 && c<=96)||(c>=123 && c<=127)){
        printf("Character is special symbol");
    }
    return 0;
}