#include<stdio.h>
int main(){
    int p,m,w,im,lm,iw,lw;
    p=80000;
    m=80000*52/100;
    w=p-m;
    lm=p*35/100;
    lw=p*13/100;
    im=m-lm;
    iw=w-lw;
    printf("Illiterate men is %d\n",im);
    printf("Illiterate women is %d",iw);
}