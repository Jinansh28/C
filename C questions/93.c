#include<stdio.h>
int main(){
    int n,grace;
    char class;
    printf("Enter class:F/S/T:");
    scanf("%c",&class);
    printf("Enter no. of subjects failed in:");
    scanf("%d",&n);
    if(class=='f'){
        switch(n){
            case 1: printf("Grace 5 marks per subject"); break;
            case 2: printf("Grace 5 marks per subject"); break;
            case 3: printf("Grace 5 marks per subject"); break;
            default: printf("No grace"); break;
        }
    }
    if(class=='s'){
        switch(n){
            case 1: printf("Grace 5 marks per subject"); break;
            case 2: printf("Grace 5 marks per subject"); break;
            default: printf("No grace"); break;
        }
    }
    if(class=='t'){
        switch(n){
            case 1: printf("Grace 5 marks per subject"); break;
            default: printf("No grace"); break;
        }
    }
    return 0;
}