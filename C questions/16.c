#include<stdio.h>
int main(){
    int i,j;
    printf("Enter first number");
    scanf("%d",&i);
    printf("Enter round off number");
    scanf("%d",&j);
    int o=j;
    while(i>j){
        j=j+o;
    }
    printf("Nearest multiple of %d near %d is %d",o,i,j);
}