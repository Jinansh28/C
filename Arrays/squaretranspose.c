#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b,c,temp;
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0,k=2;j<k;j++,k--){
            temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}