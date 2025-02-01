#include<stdio.h>
int main(){
    float x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Enter coordinates of first point");
    scanf("%f %f",&x1,&y1);
    printf("Enter coordinates of second point");
    scanf("%f %f",&x2,&y2);
    printf("Enter coordinates of third point");
    scanf("%f %f",&x3,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("Points are on same line");
    }
    else{
        printf("Points are not on same line");
    }
    return 0;
}