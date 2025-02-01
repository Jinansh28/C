#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            int a=i+j;
            if(a%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}