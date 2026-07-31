#include <stdio.h>
typedef struct Student
{
    int rollNo;
    char name[50];
    float marks;
} student;

int main(){
    student s[5];
    int i;
    for (i=0; i<5; i++){
        printf("Student No. %d\n", i+1);
        printf("Enter rollNo : ");
        scanf("%d", &s[i].rollNo);
        printf("Enter Name : ");
        scanf("%s", s[i].name);
        printf("Enter marks : ");
        scanf("%f",&s[i].marks);
    }
    int avg,h=0;
    for (i=0; i<5; i++){
        avg+=s[i].marks;
        if (s[i].marks>s[h].marks){
            h=i;
        }}
    printf("Student record with higest marks is :\n");
    printf("%s   %d      %f\n",s[h].name,s[h].rollNo,s[h].marks);
    printf("Average marks is : ", avg/5);
    return 0;
}