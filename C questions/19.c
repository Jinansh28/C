#include<stdio.h>
#include<stdint.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=15;i>=0;i--){
        int bit = (n >> i) & 1;
        printf("%d",bit);
    }
    printf("\n");
    return 0;
}
