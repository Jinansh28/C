#include<stdio.h>
int main(){
    int age;
    char sex,pol,health;
    printf("Enter G for good health and P for poor health");
    scanf("%c",&health);
    printf("Enter age");
    scanf("%d",&age);
    printf("Enter gender M or F");
    scanf(" %c",&sex);
    printf("Enter place of living: V or C");
    scanf(" %c",&pol);
    if(sex=='m' && pol=='c' && age>=25 && age<=35 && health=='g'){
        printf("Premium is Rs 4 per thousand and policy amount is 2 lakhs");
    }
    else if(sex=='f' && pol=='c' && age>=25 && age<=35 && health=='g'){
        printf("Premium is Rs 3 per thousand and policy amount is 1 lakh");
    }
    else if(sex=='m' && pol=='v' && age>=25 && age<=35 && health=='p'){
        printf("remium is Rs 6 per thousand and policy amount is 10000");
    }
    else{
        printf("Person is not insured");
    }
    return 0;
}