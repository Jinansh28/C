#include<stdio.h>
void printaddress(int *n);
int main(){
    int n=4;
    printf("%u\n",&n);
    printaddress(&n);
}
void printaddress(int *n){
    printf("%u",n);
}