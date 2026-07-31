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
    printf(" Table to be printed : \n");
    printf("Name        Roll        Marks\n");
    for (i=0; i<5; i++)
        printf("%s   %d      %f\n",s[i].name,s[i].rollNo,s[i].marks);
    return 0;
}