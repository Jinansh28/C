#include<stdio.h>
#include<math.h>
int main(){
    int r;
    printf("Enter radius");
    scanf("%d",&r);
    for(int x=1-r;x<r;x++){
        for(int y=1-r;y<r;y++){
    int a=(x*x)+(y*y);
    int b=sqrt(a);
    if(b<r){
        printf("%d %d\n",x,y);
    }
        }
    }
    return 0;
}