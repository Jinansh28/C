#include<stdio.h>
float factorial(int i){
    if(i==1|| i==0){
        return 1;
    }
    float f=i*factorial(i-1);
    return f;
}
int main(){
    float  n;
    float total =0;
    printf("Enter a number");
    scanf("%f",&n);
    for(int i=1;i<=n;i++){
        float a=factorial(i);
        // printf("%f ",a);
        float b=i/a;
        // printf("%f\n",b);
        total+=b;
    }
    printf("Sum is %f",total);
    return 0;
}