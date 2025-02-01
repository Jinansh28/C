#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Marks in ENG");
    scanf("%d",&a);
    printf("Marks in Science");
    scanf("%d",&b);
    printf("Marks in Hindi");
    scanf("%d",&c);
    printf("Marks in Maths");
    scanf("%d",&d);
    printf("Marks in SST");
    scanf("%d",&e);
    float total=a+b+c+d+e;
    printf("Aggregate marks is %d\n",a+b+c+d+e);
    printf("Percentage is %f",total/5);
}