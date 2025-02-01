#include<stdio.h>
int main(){
    float a,b,c,d,e;
    printf("Percentage in first sub: ");
    scanf("%f",&a);
    printf("Percentage in second sub: ");
    scanf("%f",&b);
    printf("Percentage in third sub: ");
    scanf("%f",&c);
    printf("Percentage in fourth sub: ");
    scanf("%f",&d);
    printf("Percentage in fifth sub: ");
    scanf("%f",&e);
    float total=(a+b+c+d+e)/5;
    if((a<40 && b<40)||(a<40 && c<40)||(a<40 && d<40)||(a<40 && e<40)||(b<40 && c<40)||(b<40 && d<40)||(b<40 && e<40)||(c<40 && d<40)||(c<40 && e<40)||(d<40 && e<40)){
        printf("Fail");
    }
    else if(a<40 || b<40 || c<40 || d<40 || e<40){
        printf("Paper is due");
    }
    else if (total < 33) {
        printf("Result: FAIL\n");
    } else if (total >= 33 && total < 45) {
        printf("Result: Third Division\n");
    } else if (total >= 45 && total < 60) {
        printf("Result: Second Division\n");
    } else if (total >= 60 && total < 70) {
        printf("Result: First Division\n");
    } else {
        printf("Result: PASS WITH HONS.\n");
    }
    return 0;
}