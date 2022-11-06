#include <stdio.h>
#include <stdlib.h>
struct student
{
    int student_id;
    //char student_name[50];
    int student_age;
    int student_class;
};

void input(struct student);
void output(struct student);

int main()
{
    struct student stu[2];
    int i;

    for (i=0;i<2;i++)
    {
        //input(stu[i]);
        printf("\nStudent ID: ");
        scanf("%d", &stu[i].student_id);
        //printf("\nName: ");
        //gets(stu.student_name);
        printf("\nAge: ");
        scanf("%d", &stu[i].student_age);
        printf("\nClass: ");
        scanf("%d", &stu[i].student_class);
    }
    for (i=0;i<2;i++)
    {
        output(stu[i]);        
    }
    return 0;
}

void input(struct student stu)
{
    printf("\nStudent ID: ");
    scanf("%d", &stu.student_id);
    //printf("\nName: ");
    //gets(stu.student_name);
    printf("\nAge: ");
    scanf("%d", &stu.student_age);
    printf("\nClass: ");
    scanf("%d", &stu.student_class);
}

void output(struct student stu)
{
    printf("\nStudent ID: %d", stu.student_id);
    //printf("\nName: %s", stu.student_name);
    printf("\nAge: %d", stu.student_age);
    printf("\nClass: %d", stu.student_class);
}