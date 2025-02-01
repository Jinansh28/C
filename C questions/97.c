#include<stdio.h>
#include<math.h>
int main(){
    for(int i=1000;i<=9999;i++){
        int a=sqrt(i);
        if(i==a*a){
            int b=i/1000;
            int c=(i/100)%10;
            int d=(i/10)%10;
            int e=(i%10);
            if(b==c && d==e){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}