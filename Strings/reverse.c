#include<stdio.h>
#include<limits.h>
int main(){
    char a[50];
    gets(a);
    puts(a);
    int k=0;
    int size=0;
    while(a[k]!='\0'){
        k++;
        size++;
    }
    printf("No. of characters in strings is %d\n",k);
    for(int i=0,j=k-1;i<j;i++,j--){
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    puts(a);
}