/*#include<stdio.h>
int main(){
    int a[5]={1,2,3,2,0};
    for(int i=0,j=4;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<=5/2;i++){
        if(a[i]==a[4-i]){
            printf("Pallindrome");
            break;
        }
        else{
            printf("Not a Pallindrome");
            break;
        }
    }
    printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}*/
#include<stdio.h>
int main(){
    int a[5]={1,2,3,2,1};
    int b;
    for(int i=0,j=4;i<5/2;i++,j--){
        if(a[i]==a[4-i]){
            b=1;
        }
        else{
            b=0;
        }
    }
    if(b==0){
        printf("Not a pallindrome");
    }
    if(b==1){
        printf("Pallindrome");
    }
}