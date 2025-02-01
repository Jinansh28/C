#include<stdio.h>
int main(){
    int distance;
    printf("Distance btw the citiesin km is");
    scanf("%d",&distance);
    printf("The distance in m is %d\n",distance*1000);
    printf("The distance in cm is %d\n",distance*100000);
    printf("The distance in feet is %f\n",distance*3.28*1000);
    printf("The distance in inches is %f\n",distance*3.28*12*1000);
}