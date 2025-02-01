#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int a=1;
    int b=(n+1)/2,c=n/2;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=b;j++){
            if(i<=b-j){
                printf(" ");
            }
            else{
                printf("%d",a%10);
                a++;
            }
        }
        for(int j=1;j<i;j++){
            printf("%d",a%10);
            a++;
        }
        printf("\n");
    }
    for(int i=1;i<=c;i++){
        if(n%2==0){
            for(int j=1;j<=c;j++){
                if(i>j){
                    printf(" ");
                }
                else{
                    printf("%d",a%10);
                    a++;
                }
            }
            for(int j=c-i;j>=1;j--){
                printf("%d",a%10);
                a++;
            }
            printf("\n");
        }
        else{
            for(int j=1;j<=c+1;j++){
                if(i>=j){
                    printf(" ");
                }
                else{
                    printf("%d",a%10);
                    a++;
                }
            }
            for(int j=1;j<=c-i;j++){
                printf("%d",a%10);
                a++;
            }
            printf("\n");
        }
    }
    return 0;
}