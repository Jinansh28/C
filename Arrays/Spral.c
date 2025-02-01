#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int minr,minc,maxr,maxc;
         minr=0;
         minc=0;
         maxr=2;
         maxc=2;
         int count=0;
    while(count<=5){
        for(int i=minc;i<=maxc;i++){
            printf("%d",a[minr][i]);
            count++;
        }
    minr++;
        for(int j=minr;j<=maxr;j++){
            printf("%d",a[j][maxc]);
            count++;
        }
    maxc--;
        for(int i=maxc;i>=minc;i--){
            printf("%d",a[maxr][i]);
            count++;
        }
    maxr--;
        for(int i=maxr;i>=minr;i--){
            printf("%d",a[i][minc]);
            count++;
        }
    maxc--;
    }
    return 0;
}