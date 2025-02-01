#include<stdio.h>
int main(){
    char a[5]={'a','s','s','p','t'};
    printf("%c\n",a[2]);
    char b[]="hello world \0";
    int i=0;
    while(b[i]!='\0'){
        printf("%c",b[i]);
        i++;
    }
    printf("%d",i);
}