#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char a='A';
        for(int j=1;j<=n;j++){
            int z=i+j;
            if(z<=n+1){
            printf("%c",a++);
            }
            else{
                printf(" ");
                a++;
            }
        }
        a--;
        for(int j=1;j<=n-1;j++){
            int y=i-j;
            if(y>=2){
                printf(" ");
                --a;
            }
            else{
                printf("%c",--a);
            }
        }
        printf("\n");
    }
}