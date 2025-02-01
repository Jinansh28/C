#include<stdio.h>
int main(){
    int count;
    for(int i=1;i<=333;i++){
        for(int j=1;j<=499;j++){
            for(int k=1;k<=997;k++){
                int l=i+j+k;
                if(l<=1000 && i<j && j<k && k<l){
                    printf("%d %d %d %d\n",i,j,k,l);
                    count++;
                }
            }
        }
    }
    printf("Total number of combinations is:%d",count);
    return 0;
}