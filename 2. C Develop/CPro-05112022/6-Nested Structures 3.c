#include <stdio.h>
#include <string.h>
 
struct College 
{
  char college_name[20];
  int ranking;   
  struct Student 
  {
    int student_id;
    char name[20];
    int roll_no;      
  } student1;
}; 
  
int main()
{
  struct College c = {"ĐH A", 7,{111, "Mr A", 278}};
  
  printf("College name : %s\n", c.college_name);
  printf("Ranking : %d\n", c.ranking);
  printf("Student id : %d\n", c.student1.student_id);
  printf("Student name : %s\n", c.student1.name);
  printf("Roll no : %d\n", c.student1.roll_no);
  return 0;
}