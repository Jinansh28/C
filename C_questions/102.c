#include<stdio.h>
int main(){
    char c;
    printf("Enter + or - :");
    scanf(" %c",&c);
    int a[3][3],b[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]=i+j;
            b[i][j]=a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(c=='-'){
                a[i][j]=a[i][j]-b[i][j];
            }
            else if(c=='+'){
                a[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}