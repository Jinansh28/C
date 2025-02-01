#include<stdio.h>
int HX(int e){
    switch(e){
        case 10: return 65; break;
        case 11: return 66; break;
        case 12: return 67; break;
        case 13: return 68; break;
        case 14: return 69; break;
        case 15: return 70; break;
    }
}
int main(){
    int n,b;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Enter base in which you want to convert :");
    scanf("%d",&b);
    int a=n,d=0;
    int c[100];
    int i=0;
        while(a!=0){
            int e=a%b;
            if(e>=10){
                e=HX(e);
            }
            c[i]=e;
            a=a/b;
            d++;
            i++;
        }
    for(int j=d-1;j>=0;j--){
        if(c[j]>=10){
            printf("%c",c[j]);
        }
        else{
            printf("%d",c[j]);
        }
    }
    return 0;
}