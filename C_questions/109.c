#include<stdio.h>
int main(){
    int m,n;
    printf("Enter number of elements in both the arrays :");
    scanf("%d %d",&m,&n);
    int a[m],b[n];
    for(int i=1;i<=m;i++){
        printf("Enter element %d :",i);
        scanf("%d",&a[i-1]);
    }
    for(int i=1;i<=n;i++){
        printf("Enter element %d :",i);
        scanf("%d",&b[i-1]);
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            int min=a[i];
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int min=b[i];
            if(b[i]>b[j]){
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(int i=0;i<m;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    int c[m+n];
    for(int i=0,j=0;i<m+n,j<n;i++){
        if(i<m){
            c[i]=a[i];
        }
        else{
            c[i]=b[j];
            j++;
        }
    }
    for(int i=0;i<m+n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}