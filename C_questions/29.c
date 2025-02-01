#include<stdio.h>
int main(){
    int R,S,A;
    printf("Age of Ram");
    scanf("%d",&R);
    printf("Age of Shyam");
    scanf("%d",&S);
    printf("Age of Ajay");
    scanf("%d",&A);
    if(A<S && A<R){
        printf("Youngest is Ajay");
    }
    if(S<A && S<R){
        printf("Youngest is Shyam");
    }
    if(R<A && R<S){
        printf("Youngest is Ram");
    }
    return 0;
}