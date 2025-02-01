#include<stdio.h>
int main(){
    int l,b,area,perimeter;
    printf("Enter length");
    scanf("%d",&l);
    printf("Enter breadth");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter){
        printf("Area is greater than the perimter");
    }
    else if(area==perimeter){
        printf("Area and perimeter are equal");
    }
    else{
        printf("Area is less than perimeter");
    }
    return 0;
}