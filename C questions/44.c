#include<stdio.h>
int main(){
    int a,b;
    printf("Enter percentage in a,b:");
    scanf("%d %d",&a,&b);
    if(a>=55 && b>=45){
        printf("Pass");
    }
    else if(a>=45 && a<55 && b>=55){
        printf("Pass");
    }
    else if(a>=65 && b<45){
        printf("Reexamination");
    }
    else{
        printf("Fail");
    }
    return 0;
}