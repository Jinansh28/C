#include<stdio.h>
int main(){
    float t;
    printf("Temperature in fahrenheits is: ");
    scanf("%f",&t);
    printf("Temperature in celsius is %f",5*(t-32)/9);
}