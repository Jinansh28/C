#include<stdio.h>
int main(){
    int a[7]={1,2,3,0,3,2,1};
    int b;
    for(int i=0;i<=6;i++){
        int b=1;
        for(int j=i+1;j<=6;j++){
            if(a[i]==a[j]){
                b=0;
            }
        }
        if(b==1){
            printf("%d",a[i]);
            break;
        }
    }
}