#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int a=n,count=0,c=4,d,f=n;
    while(a!=0){
        a=a/10;
        count++;
    }
    for(int i=1;i<=count;i++){
        int g=pow(10,count-i);
        int b=f/g;
        int d=(n%100)/10;
        b=b%10;
        int e=n%10;
        if(c==4){
            switch(b){
                case 1: printf("One Thousand "); break;
                case 2: printf("Two Thousand "); break;
                case 3: printf("Three Thousand "); break;
                case 4: printf("Four Thousand "); break;
                case 5: printf("Five Thousand "); break;
                case 6: printf("Six Thousand "); break;
                case 7: printf("Seven Thousand "); break;
                case 8: printf("Eight Thousand "); break;
                case 9: printf("Nine Thousand "); break;
                default: break;
            }
        }
        if(c==3){
            switch(b){
                case 1: printf("One Hundred "); break;
                case 2: printf("Two Hundred "); break;
                case 3: printf("Three Hundred "); break;
                case 4: printf("Four Hundred "); break;
                case 5: printf("Five Hundred "); break;
                case 6: printf("Six Hundred "); break;
                case 7: printf("Seven Hundred "); break;
                case 8: printf("Eight Hundred "); break;
                case 9: printf("Nine Hundred "); break;
                case 0: printf(""); break;
                default: break;
            }
        }
        if(c==2){
            switch(b){
                case 1: switch(e){
                    case 1: printf("Eleven "); break;
                    case 2: printf("Twelve "); break;
                    case 3: printf("Thirteen "); break;
                    case 4: printf("Fourteen "); break;
                    case 5: printf("Fifteen "); break;
                    case 6: printf("Sixteen "); break;
                    case 7: printf("Seventeen "); break;
                    case 8: printf("Eighteen "); break;
                    case 9: printf("Nineteen "); break;
                    case 0: printf("Ten "); break;
                    default: break;
                }; break;
                case 2: printf("Twenty "); break;
                case 3: printf("Thirty "); break;
                case 4: printf("Forty "); break;
                case 5: printf("Fifty "); break;
                case 6: printf("Sixty "); break;
                case 7: printf("Seventy "); break;
                case 8: printf("Eighty "); break;
                case 9: printf("Ninety "); break;
                default: break;  
            }
        }
        if(c==1 && d!=1){
            switch(b){
                case 1: printf("One "); break;
                case 2: printf("Two "); break;
                case 3: printf("Three "); break;
                case 4: printf("Four "); break;
                case 5: printf("Five "); break;
                case 6: printf("Six "); break;
                case 7: printf("Seven "); break;
                case 8: printf("Eight "); break;
                case 9: printf("Nine "); break;
                default: break;
            }
        }
        c--;
    }
    return 0;
}