#include<stdio.h>
#include<limits.h>
int main(){
    int n,min=INT_MAX,max=INT_MIN,a;
    char choice;
    for(;;){
        scanf("%d",&a);
        if(min>a){
            min=a;
        }
        if(max<a){
            max=a;
        }
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y'){
            break;
        }
    }
    printf("Range is %d",max-min);
    return 0;
}