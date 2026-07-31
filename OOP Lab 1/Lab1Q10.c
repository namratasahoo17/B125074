#include <stdio.h>
#include <stdlib.h>
typedef struct Student
{
    int rollNo;
    char name[50];
    float marks;
} student;

int main(){
    int n,h=0;
    printf("Enter no. of Students");
    scanf("%d",&n);
    student *s;
    s=(student *)malloc(n*sizeof(student));
    int i;
    for (i=0; i<n; i++){
        printf("Student No. %d\n", i+1);
        printf("Enter rollNo : ");
        scanf("%d", &s[i].rollNo);
        printf("Enter Name : ");
        scanf("%s", s[i].name);
        printf("Enter marks : ");
        scanf("%f",&s[i].marks);
    }
    for (i=0; i<n; i++){
        if (s[i].marks>s[h].marks){
            h=i;
        }}
    printf("Student record with higest marks is :\n");
    printf("%s   %d      %f\n",s[h].name,s[h].rollNo,s[h].marks);
    
    free(s);

    return 0;
}