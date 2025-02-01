#include<stdio.h>
int main(){
    float h,cc,ts;
    printf("Enter hardness");
    scanf("%f",&h);
    printf("Enter carbon content");
    scanf("%f",&cc);
    printf("Enter tensile strength");
    scanf("%f",&ts);
    if(h>50 && cc<0.7 && ts>5600){
        printf("Grade 10");
    }
    else if(h>50 && cc<0.7 && ts<5600){
        printf("Grade 9");
    }
    else if(h<50 && cc<0.7 && ts>5600){
        printf("Grade 8");
    }
    else if(h>50 && cc>0.7 && ts>5600){
        printf("Grade 7");
    }
    else if(h>50 || cc<0.7 || ts>5600){
        printf("Grade 6");
    }
    else{
        printf("Grade 5");
    }
    return 0;
}