#include<stdio.h>
#include<math.h>
int main(){
    for(int i=0000;i<=8181;i++){
        int a=sqrt(i);
        if(i==a*a){
            int b=i/100;
            int c=i%100;
            int d=sqrt(b);
            int e=sqrt(c);
            if(d==b*b && e==c*c){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}