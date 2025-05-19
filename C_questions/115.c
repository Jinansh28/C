#include<stdio.h>

int main(){
    int a[5][5]={{1,2,31,3,2324},{312,321,14,421,421},{1421,32,34,24214,14},{124,412,325,532,4221},{142532,32,53235,235,5232}};
    int max=a[0][0];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    printf("%d",max);
    return 0;
}