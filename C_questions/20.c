#include<stdio.h>
int main(){
    char color;
    printf("Enter your input");
    scanf("%c",&color);
    switch(color){
        case '0': printf("Violet");
        break;
        case '1': printf("Indigo");
        break;
        case '2': printf("Blue");
        break;
        case '3': printf("Green");
        break;
        case '4': printf("Yellow");
        break;
        case '5': printf("Orange");
        break;
        case '6': printf("Red");
        break;
        default: printf("Not a valid input");
        break;
    }
}
