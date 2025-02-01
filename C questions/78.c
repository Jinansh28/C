#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n+1-i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}