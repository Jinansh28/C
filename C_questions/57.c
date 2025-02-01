#include<stdio.h>
int random(int match){
    switch(match){
        case 19: return 1;
        case 18: return 2;
        case 17: return 3;
        case 16: return 4;
        case 14: return 1;
        case 13: return 2;
        case 12: return 3;
        case 11: return 4;
        case 9: return 1;
        case 8: return 2;
        case 7: return 3;
        case 6: return 4;
        case 4: return 1;
        case 3: return 2;
        case 2: return 3;
        case 1: return 4;
    }
}
int main(){
    int match=0,r;
    while(match<=21){
        scanf("%d",&r);
        match=match+r;
        if(match>=21){
            printf("Computer wins");
            break;
        }
        int a=random(match);
        printf("Computer picks : %d\n",a);
        match=match+a;
    }
    return 0;
}