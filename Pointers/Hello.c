#include<stdio.h>
int main(){
    int age=10;
    int *ptr=&age;
    int _age=*ptr;
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);
    printf("%d\n",*(&age));
    float price =100.00;
    float *Ptr=&price;
    float **pptr=&Ptr;
    printf("%f\n",**pptr);
}