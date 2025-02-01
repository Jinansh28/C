#include<stdio.h>
int main(){
    int a[10][2];
    a[0][0]=1;
    for(int i=0;i<=9;i++){
        for(int j=0;j<=1;j++){
           a[i][j]=(i+1)*(j+2);
        }
    }
    printf("%d %d %d %d %d",a[2][1],a[0][0],a[9][0],a[7][0],a[9][1]);
}