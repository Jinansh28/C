#include<stdio.h>
int main(){
    int x,y;
    printf("Enter coordinates of points");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("point is origin");
    }
    if(x==0 && y!=0){
        printf("Point lies on y axis");
    }
    if(x!=0 && y==0){
        printf("Point lies on x axis");
    }
}