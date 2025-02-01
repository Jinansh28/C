#include<stdio.h>
int main(){
    int time;
    printf("Enter time to complete the work");
    scanf("%d",&time);
    if(time>=2&& time<3){
        printf("Worker is highly efficient");
    }
    else if(time <4 && time>=3){
        printf("Worker is ordered to iprove efficiency");
    }
    else if(time<5 && time>=4){
        printf("Worker is given training to improve his speed");
    }
    else if(time>=5){
        printf("Worker has to leave the company");
    }
    return 0;
}