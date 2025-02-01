#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int a=n,count =0;
    while(a!=0){
        a=a/10;
        count++;
    }
    for(int i=1;i<=count;i++){
        int b=pow(10,count-i);
        int c=(n/b)%10;
        switch(c){
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
            case 0: printf("Zero "); break;
            default: break;
        }
    }
    return 0;
}