#include<stdio.h>
int main(){
    for(int y=1;y<=6;y++){
        for(float x=5.5;x<=12.5;x++){
            float i=2+y+(0.5)*x;
            printf("i:%f x:%f y:%d\n",i,x,y);
        }
    }
    return 0;
}