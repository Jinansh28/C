#include<stdio.h>
#include<math.h>
int main(){
    /*float a;
    printf("Enter a Year");
    scanf("%f",&a);
    float b;
    int c=a;
    b=a-c;
    if(b==0){
        if(c%4==0){
            printf("Leap Year");
        }
        else{
            printf("Not a Leap Year\n");
        }
    }
    else{
        printf("Invalid input");
    }
    if(c<0){
        c=c*(-1);
        printf("%d",c);
    }
    else{
        printf("%d",c);
    }
    int cp,sp;
    printf("Enter cost price");
    scanf("%d",&cp);
    printf("Enter selling price");
    scanf("%d",&sp);
    if(cp>sp){
        printf("Loss of %d",cp-sp);
    }
    else if(cp<sp){
        printf("Profit of %d",sp-cp);
    }
    int l,b,p,a;
    printf("Enter length");
    scanf("%d",&l);
    printf("Enter breadth");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    if(a>p){
        printf("Area>Perimeter");
    }
    else{
        printf("Area<Perimeter")
    }
    int m,n,o;
    printf("Enter age of Ram");
    scanf("%d",&n);
    printf("Enter age of Shyam");
    scanf("%d",&m);
    printf("Enter age of Ajay");
    scanf("%d",&o);
    if(m<n && m<o){
        printf("Youngest is Shyam");
    }
    else if(n<m && n<o){
        printf("Youngest is Ram");
    }
    else{
        printf("Youngest is Ajay");
    }
    int a,b,c;
    printf("Enter side a");
    scanf("%d",&a);
    printf("Enter side b");
    scanf("%d",&b);
    printf("Enter side c");
    scanf("%d",&c);
    if(a+b>c && b+c>a && a+c>b){
        printf("Sides of a triangle");
    }
    else{
        printf("Not sides of triangle");
    }
    int a,n;
    printf("Enter marks");
    scanf("%d",&n);
    if(n>=0 && n<=100){
        if(n>90 && n<=100){
            printf("Excellent");
        }
        else if(n>80 && n<=90){
            printf("Very good");
        }
        else if(n>70 && n<=80){
            printf("Good");
        }
        else if(n>60 && n<=70){
            printf("Can do better");
        }
        else if(n>50 && n<=60){
            printf("Average");
        }
        else if(n>40 && n<=50){
            printf("Below average");
        }
        else if(n>=0 && n<=40){
            printf("Fail");
        }
    }
    else{
        printf("Not valid marks");
    }
    float x1,x2,y1,y2,x3,y3;
    printf("Enter values of x1,y1");
    scanf("%f %f",&x1,&y1);
    printf("Enter values of x2,y2");
    scanf("%f %f",&x2,&y2);
    printf("Enter values of x3,y3");
    scanf("%f %f",&x3,&y3);
    float m1,m2;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("All points lies on straight line");
    }
    else{
        printf("Not on a straight line");
    }
    int x,y;
    printf("Enter the coordinates");
    scanf("%d %d",&x,&y);
    if(x==0 && y!=0){
        printf("Lies on x axis");
    }
    else if(y==0 && x!=0){
        printf("Lies on y axis");
    }
    else if(y==0 && x==0){
        printf("Point is origin");
    }*/
   int n,a;
   printf("Enter a number n");
   scanf("%d",&n);
   for(int i=1;i<=100;i++){
    if(i%2==0){
        continue;
    }
    printf("%d \n",i);
   }
}