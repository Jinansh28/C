#include<stdio.h>
int main(){
    int a[25],p=0,n=0,e=0,o=0;
    for(int i=0;i<25;i++){
        printf("Number %d :",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<25;i++){
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            n++;
        }
        if(a[i]%2==0){
            e++;
        }
        else if(a[i]%2==1){
            o++;
        }
    }
    printf("Positive numbers : %d\n",p);
    printf("Negative numbers : %d\n",n);
    printf("Odd numbers : %d\n",o);
    printf("Even numbers : %d\n",e);
    return 0;
}