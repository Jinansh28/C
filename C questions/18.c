#include<stdio.h>
int leap(int year){
    if(year%4==0){
        if(year%100==0 && year%400!=0){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}
int month(int m,int y){
    switch(m){
        case 1: return 31;
        case 2: return leap(y)?29:28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
    }
}
int day(int d,int m,int y){
    int total=0;
    int year=1;
    int mnt=1;
    while(year<y){
        if(leap(year)==0){
            total=total+365;
        }
        else{
            total=total+366;
        }
        year++;
    }
    while(mnt<m){
        total=total+month(mnt,y);
        mnt++;
    }
    total=total+d;
    return total;
}
int main(){
    int d1,m1,y1,d2,m2,y2,days,weeks;
    printf("Enter first date :");
    scanf("%d %d %d",&d1,&m1,&y1);
    printf("Enter second date :");
    scanf("%d %d %d",&d2,&m2,&y2);
    days=day(d2,m2,y2)-day(d1,m1,y1);
    weeks=days/7;
    printf("Days elapsed is %d \n",days);
    printf("Weeks is %d",weeks);
    return 0;
}