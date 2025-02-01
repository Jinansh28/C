#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int i=1,j,k;
    int a=(n+1)/2,b=n/2;
    int z=1;
    while(i<=a){
        j=1;
        while(j<=a){
            int c=i+j;
            if(c<=a){
                printf(" ");
            }
            else{
                printf("%d",z%10);
                z++;
            }
            j++;
        }
        k=1;
        while(k<i){
            printf("%d",z%10);
            z++;
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
                }
                else{
                    printf("%d",z%10);
                    z++;
                }
                q++;
            }
            r=1;
            while(r<=b-p){
                printf("%d",z%10);
                z++;
                r++;
            }
        }
        else{
            q=1;
            while(q<=b+1){
                if(p>=q){
                    printf(" ");
                }
                else{
                    printf("%d",z%10);
                    z++;
                }
                q++;
            }
            r=1;
            while(r<=b-p){
                printf("%d",z%10);
                z++;
                r++;
            }
        }
        printf("\n");
        p++;
    }
    return 0;
}