#include<stdio.h>
int main(){
    int l,b;
    float r;
    printf("Length of rectangle is :");
    scanf("%d",&l);
    printf("readth of rectangle is :");
    scanf("%d",&b);
    printf("Radius of circle is :");
    scanf("%f",&r);
    printf("Area of rectangle is %d\n",l*b);
    printf("Area of circle is %f",3.14*r*r);
}