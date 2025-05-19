#include<stdio.h>
int main(){
    
    int a[10],min;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<10;i++){

        min=i;
        for(int j=i+1;j<10;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }

    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }

    return 0;

}