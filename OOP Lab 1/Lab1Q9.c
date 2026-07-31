#include <stdio.h>
typedef struct Student
{
    int rollNo;
    char name[50];
    float marks;
} student;

int main(){
    
    student s;
    student *ptr = &s;
    printf("Enter rollNo : ");
    scanf("%d", &ptr->rollNo);
    printf("Enter Name : ");
    scanf("%s", &ptr->name);
    printf("Enter marks : ");
    scanf("%f",&ptr->marks);
    
    printf("Display Stdent info\n");
    printf("%s   %d      %f\n",ptr->name,ptr->rollNo,ptr->marks);
    return 0;
}