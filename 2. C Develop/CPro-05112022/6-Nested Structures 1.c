#include <stdio.h>
#include <string.h>

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
  
int main()
{
  // Khai báo biến struct
  struct Organisation org; 
    
  // Thiết lập thông tin cho struct
  org.emp.employee_id = 101;  
  strcpy(org.emp.name, "Robert");
  org.emp.salary = 400000;
  strcpy(org.organisation_name, "IMIC Technology");
  strcpy(org.org_number, "GFG123768");   
    
  // Hiển thị thông tin chi tiết
  printf("Organisation Name : %s\n", org.organisation_name);  
  printf("Organisation Number : %s\n", org.org_number);  
  printf("Employee id : %d\n", org.emp.employee_id);  
  printf("Employee name : %s\n", org.emp.name);  
  printf("Employee Salary : %d\n", org.emp.salary);  
}