#include<stdio.h>
int main(){
    int a[10],total=0;
    for(int i=0;i<10;i++){
        printf("Enter marks :");
        scanf("%d",&a[i]);
        total=total+a[i];
    }
    printf("Average is %d",total/10);
}