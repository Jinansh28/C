#include<stdio.h>
void hello();
void Goodbye();
int main(){
    hello();
    Goodbye();
    hello();
    return 0;
}
void hello(){
    printf("Hello!\n");
}
void Goodbye(){
    printf("Goodbye\n");
}