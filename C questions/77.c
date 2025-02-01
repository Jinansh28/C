#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            int a=i+j;
            if(a<=n){
                printf(" ");
            }
            else{
                printf("*");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}