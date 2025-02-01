#include<stdio.h>
#include<math.h>
int main(){
    float x,y,x1,y1,r,s;
    printf("Enter coordinates of center of circle");
    scanf("%f %f",&x,&y);
    printf("Enter radius");
    scanf("%f",&r);
    printf("Coordinates of point");
    scanf("%f %f",&x1,&y1);
    s=sqrt(pow(x-x1,2)+pow(y-y1,2));
    if(s>r){
        printf("Point lies outside of circle");
    }
    else if(s==r){
        printf("Points lies on the circle");
    }
    else{
        printf("Points lies inside of circle");
    }
    return 0;
}