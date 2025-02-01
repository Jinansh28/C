#include<stdio.h>
int main(){
    int a[25],n,count =0;
    for(int i=0;i<25;i++){
        printf("number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter number to search");
    scanf("%d",&n);
    for(int i=0;i<25;i++){
        if(n==a[i]){
            count++;
        }
    }
    if(count>0){
        printf("Number is present %d times",count);
    }
    return 0;
}