#include<stdio.h>
int main (){
    unsigned int timeEntry;
    printf("Enter 2 byte time entry");
    scanf("%hu",&timeEntry);
    printf("%02u:%02u:%02u",(timeEntry>>11)&0x1F,(timeEntry>>6)&0x1F,timeEntry & 0x3F);
    return 0;
}