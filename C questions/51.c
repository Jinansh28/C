#include<stdio.h>
int main(){
    int workhours;
    printf("Enter workhours");
    scanf("%d",&workhours);
    if(workhours>40){
        printf("Overtime pay is %d",12*(workhours-40));
    }
    return 0;
}