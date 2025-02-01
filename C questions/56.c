#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<10;j++){
            for(int k=1;k<10;k++){
                int a,b;
                a=(i*100)+(j*10)+(k*1);
                b=(i*i*i)+(j*j*j)+(k*k*k);
                if(a==b){
                    printf("%d\n",a);
                }
            }
        }
    }
    return 0;
}