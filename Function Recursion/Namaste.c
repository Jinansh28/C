#include<stdio.h>
void Namaste();
void Bonjour();
int main(){
    char a;
    printf("Enter your nationality");
    scanf("%c",&a);
    if(a=='i'){
        Namaste();
    }
    if(a=='f'){
        Bonjour();
    }
    return 0;
}
void Namaste(){
    printf("Namaste\n");
}
void Bonjour(){
    printf("Bonjour");
}