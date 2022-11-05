/*
1. Using Normal variable
2. Using Pointer variable
*/
//1. Using Normal variable
#include <stdio.h>
#include <string.h>

struct college_details
{
  int college_id;
  char college_name[50];    
};

struct student_detail
{
  int student_id;
  char student_name[20];
  float cgpa;  
  struct college_details clg;
} stu;

int main()
{
  struct student_detail stu = {12, "Mr A", 7.8, {14567, "ĐH A"}};
  
  printf("College ID : %d \n", stu.clg.college_id);
  printf("College Name : %s \n", stu.clg.college_name);
  printf("Student ID : %d \n", stu.student_id);
  printf("Student Name : %s \n", stu.student_name);
  printf("Student CGPA : %f \n", stu.cgpa);
  return 0;
}

//2. Using Pointer variable
#include <stdio.h>
#include <string.h>

struct college_details
{
  int college_id;
  char college_name[50];    
};
 
struct student_detail
{
  int student_id;
  char student_name[20];
  float cgpa;  
  struct college_details clg;
} stu, *stu_ptr;

int main()
{
  struct student_detail stu = {12, "Mr A", 7.8, {14567, "ĐH A"}};
    
  stu_ptr = &stu;   
  printf("College ID : %d \n", stu_ptr->clg.college_id);
  printf("College Name : %s \n", stu_ptr->clg.college_name);
  printf("Student ID : %d \n", stu_ptr->student_id);
  printf("Student Name : %s \n", stu_ptr->student_name);
  printf("Student CGPA : %f \n", stu_ptr->cgpa);
  return 0;
}