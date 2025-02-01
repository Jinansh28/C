#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(char j='a';j<=96+i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}