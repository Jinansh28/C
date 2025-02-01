#include<stdio.h>
float Temperature(float n);
int main(){
    float n;
    printf("Enter temperature in celcius");
    scanf("%f",&n);
    printf("Temperature in fahrenheits is %f",Temperature(n));
}
float Temperature(float n){
    return n*9/5+32;
}