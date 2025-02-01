#include<stdio.h>
#include<math.h>
float AreaofSquare(float side);
float AreaofCircle(float radius);
float AreaofRectangle(float l,float b);
int main(){
    float n,a,radius,side,l,b;
    printf("Enter a number");
    scanf("%f",&n);
    a=pow(n,2);
    printf("%f\n",a);
    printf("\nEnter radius");
    scanf("%f",&radius);
    float r=AreaofCircle(radius);
    printf("%f\n",r);
    printf("Enter side");
    scanf("%f",&side);
    float s=AreaofSquare(side);
    printf("%f\n",s);
    printf("\nEnter Length of rectangle");
    scanf("%f",&l);
    printf("\nEnter breadth of rectangle");
    scanf("%f",&b);
    float R=AreaofRectangle(l,b);
    printf("%f",R);
}
float AreaofCircle(float radius){
    return 3.14*radius*radius;
}
float AreaofSquare(float side){
    return side*side;
}
float AreaofRectangle(float l, float b){
    return l*b;
}
