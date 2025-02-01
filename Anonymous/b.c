#include<stdio.h>
int main(){
    int n,m,o;
    printf("Enter a number");
    scanf("%d",&n);
    // printf("Enter a number");
    // scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            m=i+j;
            if(m<=n){
                printf(" ");
            }
            else if(m>n){
                printf("*");
            }
        }
        for(int j=n+1;j<=n+i-1;j++){
            printf("*");
        }
         
    printf("\n");
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
           
            printf(" ");
        }
        for(int k=1;k<=2*(n-i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}
