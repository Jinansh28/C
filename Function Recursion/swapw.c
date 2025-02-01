#include<stdio.h>
int swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    return 0;
}
int main(){
    int a=2;
    int b=9;
    printf("A is %d\nB is %d\n",a,b);
    swap(&a,&b);
     printf("A is %d\nB is %d",a,b);
}