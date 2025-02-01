#include<stdio.h>
int main(){
    int a[3][2]={{1,2},{1,9},{1,20}};
    int b=a[0][0],max=a[0][0];
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<2;j++){
            sum=sum+a[i][j];
        }
        if(max<sum){
            max=sum;
            b=i;
        }
    }
    printf("%d %d",b,max);
}