#include<stdio.h>
int main(){
    float sp,cp,p,l;
    printf("Selling price is ");
    scanf("%f",&sp);
    printf("Profit is ");
    scanf("%f",&p);
    cp=(sp-p)/15;
    printf("Cost price is %f",cp);
}