#include <stdio.h>
struct Employee 
{
  int employee_id;
  char name[20];
  int salary;
};

struct Organisation 
{
  char organisation_name[20];
  char org_number[20];
  struct Employee emp; 
};
  
void show(char organisation_name[], 
          char org_number[],
          int employee_id, 
          char name[], int salary);

int main8()
{
  struct Organisation org = {"ĐH A", "GFG111", {278, "Mr A",5000}};     
  show(org.organisation_name, org.org_number,
       org.emp.employee_id, org.emp.name,
       org.emp.salary);
}
  
//Định nghĩa chi tiết xử lý cho hàm
void show(char organisation_name[], 
          char org_number[],
          int employee_id, 
          char name[], int salary)
{  
  printf("Printing the Details :\n"); 
  printf("Organisation Name : %s\n", organisation_name);  
  printf("Organisation Number : %s\n", org_number);  
  printf("Employee id : %d\n", employee_id);  
  printf("Employee name : %s\n", name);  
  printf("Employee Salary : %d\n", salary);  
}