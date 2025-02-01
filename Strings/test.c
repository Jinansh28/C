#include<stdio.h>
#include<string.h>
typedef struct stu{
    char name[100];
    int roll;
    int marks;
    int contact;
    int sem;
    char add[30];
} stu;
int main(){
    stu ECE[100];
    for(int i=0;i<2;i++){
        gets(ECE[i].name);
        scanf("%d",&ECE[i].roll);
        scanf("%d",&ECE[i].marks);
        scanf("%d",&ECE[i].contact);
        scanf("%d",&ECE[i].sem);
        gets(ECE[i].add);
    }
    for(int i=1;i<9;i++){
        for(int j=0;j<2;j++){
            if(ECE[i].sem==i){
            puts(ECE[i].name);
            printf("%d",ECE[i].roll);
            printf("%d",ECE[i].marks);
            printf("%d",ECE[i].contact);
            printf("%d",ECE[i].sem);
            puts(ECE[i].add);
            }
        }
    }
}