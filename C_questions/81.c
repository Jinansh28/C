#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int a=(n+1)/2,b=n/2;
    int i=1;
    while(i<=a){
        int j=1;
        while(j<=a){
            int c=i+j;
            if(c<=a){
                printf(" ");
            }
            else{
                printf("*");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    int k=1;
    while(k<=b){
        int l=1;
            if(n%2==0){
                while(l<=b){
                if(k>l){
                    printf(" ");
                    l++;
                }
                else{
                    printf("*");
                    l++;
                }
                }
            }
            else{
                while(l<=b+1){
                if(k>=l){
                    printf(" ");
                    l++;
                }
                else{
                    printf("*");
                    l++;
                }
            }
        }
        printf("\n");
        k++;
    }
    return 0;
}