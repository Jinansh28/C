#include<stdio.h>
int main(){
    int d;
    printf("Enter no. of days");
    scanf("%d",&d);
    float c;
    if(d>0 && d<=5){
        printf("Fine is %f",0.5*d);
    }
    else if(d>=6 && d<=10){
        printf("Fine is %f",2.5+(1*(d-5)));
    }
    else if(d>10 && d<30){
        printf("Fine is %f",7.5+(5*(d-10)));
    }
    else{
        printf("Your membership is cancelled");
    }
    return 0;
}