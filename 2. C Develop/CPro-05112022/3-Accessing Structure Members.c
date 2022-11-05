#include<stdio.h>
#include<string.h>

struct Student
{
    char name[25];
    int age;
    char branch[10];
    //F for female and M for male
    char gender;
};

int main()
{
    struct Student s1;    
    /*
        s1 is a variable of Student type and 
        age is a member of Student
    */
    s1.age = 18;
    /*
        using string function to add name
    */
    strcpy(s1.name, "Mr ABC");
    /*
        displaying the stored values
    */
    printf("Name of Student 1: %s\n", s1.name);
    printf("Age of Student 1: %d\n", s1.age);    
    return 0;
}
/* Output
Name of Student 1: Mr ABC
Age of Student 1: 18
*/
//Chúng ta cũng có thể sử dụng scanf() nhập giá trị vào cấu trúc.
/*
    scanf("%s", s1.name);
    scanf("%d", &s1.age);
*/