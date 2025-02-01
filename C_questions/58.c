#include<stdio.h>
int main(){
    int a,p=0,n=0,z=0;
    char choice;
    for(int i=0;;i++){
        scanf("%d",&a);
        if(a>0){
            p++;
        }
        else if(a<0){
            n++;
        }
        else if(a==0){
            z++;
        }
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y'){
            break;
        }
    }
    printf("Positive numbers entered : %d\n",p);
    printf("Negative numbers entered : %d\n",n);
    printf("Zeroes entered : %d",z);
    return 0;
}