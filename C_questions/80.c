#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int a=(n+1)/2,b=n/2;
    int i=1;
    while(i<=a){
        int j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    int k=1;
    while(k<=b){
        int l=b-k;
        while(l>=0){
            printf("*");
            l--;
        }
        printf("\n");
        k++;
    }
    return 0;
}