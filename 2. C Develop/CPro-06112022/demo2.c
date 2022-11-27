#include <stdio.h>
    
struct student
{
    int student_id;    
    int student_age;
    int student_class;
};

void input(struct student *);

void output(struct student *);

int main(void)
{
    fflush;
    printf("Ha ha\n");
    struct student stu[2];

    input(stu);

    output(stu);

    return 0;
}

void input(struct student *ptr)
{
    int i;
    for (i=0;i<3;i++)
    {
        printf("Student ID: ");
        scanf("%d", &ptr->student_id);               
        printf("Age: ");
        scanf("%d", &ptr->student_age);        
        printf("Class: ");
        scanf("%d", &ptr->student_class);
        ptr++;
    }
}

void output(struct student *ptr)
{
    int i;
    for (i=0;i<3;i++)
    {
        printf("\nStudent ID: %d", ptr->student_id);
        printf("\nStudent Age: %d", ptr->student_age);
        printf("\nStudent Class: %d", ptr->student_class);
        ptr++;
    }
}