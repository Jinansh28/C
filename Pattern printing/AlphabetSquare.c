#include<stdio.h>
int main(){
    int n;
    printf("Side of Square");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(char j='a';j<=96+n;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}