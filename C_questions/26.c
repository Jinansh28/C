#include<stdio.h>
int leapyear(int year){
    if((year%4==0)&&(year%100!=0)||(year%400==0)){
        return 1;
    }
    else{return 0;}
}
int month(int m,int y){
    switch(m){
        case 1: return 31;
        case 2: return leapyear(y)? 29:28;
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
int day(int day,int mon,int year){
    int total=0;
    total=total+day;
    for(int m=1;m<mon;m++){
        total=total+month(m,year);
    }
    for(int y=1;y<year;y++){
        total=total+(leapyear(y)?366:365);
    }
    return total;
}
int dayofWeek(int days){
    int d=days%7;
    switch(d){
        case 0: printf("Sunday");
        break;
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
    }
}
int main(){
    int d,m,y,week;
    scanf("%d %d %d",&d,&m,&y);
    week=day(d,m,y);
    dayofWeek(week);
    return 0;
}