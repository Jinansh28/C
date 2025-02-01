#include<stdio.h>
int main(){
    int a[10],min;
    for(int i=0;i<10;i++){
        printf("Element %d :",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            min =a[i];
            if(a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("Element %d\n",a[i]);
    }
    return 0;
}