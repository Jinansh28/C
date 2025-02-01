#include<stdio.h>
void prime(int n){
    for(int i=3;i<=n;i++){
        int a=1;
        for(int j=2;j<n;j++){
            if(i%j==0){
                continue;
            }
            else{
                a++;
            }
        }
        if(a==n-2){
                printf("%d\n",i);
        }
    }
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("2\n");
    prime(n);
    return 0;
}