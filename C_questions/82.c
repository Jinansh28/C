#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int a=(n+1)/2,b=n/2;
    int i=1;
    while(i<=a){
        int j=1,k=1;
        while(j<=a){
            int c=i+j;
            if(c<=a){
                printf(" ");
                j++;
            }
            else{
                printf("*");
                j++;
            }
        }
        while(k<i){
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
    int p=1,q,r;
    while(p<=b){
        if(n%2==0){
            q=1;
            while(q<=b){
                if(p>q){
                    printf(" ");
                    q++;
                }
                else{
                    printf("*");
                    q++;
                }
            }
            r=1;
            while(r<=b-p){
                printf("*");
                r++;
            }
            printf("\n");
            p++;
        }
        else{
            q=1;
            while(q<=b+1){
                if(p>=q){
                    printf(" ");
                    q++;
                }
                else{
                    printf("*");
                    q++;
                }
            }
            r=1;
            while(r<=b-p){
                printf("*");
                r++;
            }
            printf("\n");
            p++;
        }
    }
    return 0;
}