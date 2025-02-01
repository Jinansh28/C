#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int a=1,i=1;
    while(i<=n){
        int j=n-i+1;
        while(j>=1){
            printf("%d",a%10);
            a++;
            j--;
        }
        printf("\n");
        i++;
    }
    return 0;
}