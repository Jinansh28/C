#include<stdio.h>
int Percentage(int sc,int m,int sa);
int main(){
    int m=98;
    int sc=90;
    int sa=80;
    printf("Percentage is %d",Percentage(m,sc,sa));
}
int Percentage(int sc,int m, int sa){
    return (sc+m+sa)/3;
}