#include<stdio.h>
#include<math.h>
int main() {
   int a,b,c,d,e,f,g,r,h;
   e=0,c=0;
   printf("Enter a number");
   scanf("%d",&a);
   for(int i=1;;i++){
    b=a%10;
    c=c+b;
    a=a/10;
    d=i;
    e=e+b;
    if(a==0){
        break;
    }
    c=c*10;
   }
   printf("%d %d %d",d,c,e);
   return 0;
   }