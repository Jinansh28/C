#include<stdio.h>
int main(){
    int a[5][5]={{0,0,0,0,0},{0,0,0,0,1},{1,1,1,1,1},{1,0,1,0,1},{1,0,1,1,1}};
    int max=a[0][0];
    for(int i=0;i<=4;i++){
        int b=0,d;
        for(int j=0;j<=4;j++){
            if(a[i][j]==1){
                b++;
            }
        }
        if(b>max){
            max=b;
        }
    }
    printf("%d",max);
}