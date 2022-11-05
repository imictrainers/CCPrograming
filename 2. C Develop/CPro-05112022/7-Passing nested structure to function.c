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

//protype
void show(struct Organisation);

int main()
{
  struct Organisation org = {"ĐH A", "GFG111",{278, "Mr A",5000}};   
  show(org);
}
 
void show(struct Organisation org )
{
  //Hiện thị thông tin chi tiết
  printf("Printing the Details :\n"); 
  printf("Organisation Name : %s\n", org.organisation_name);  
  printf("Organisation Number : %s\n", org.org_number);  
  printf("Employee id : %d\n", org.emp.employee_id);  
  printf("Employee name : %s\n", org.emp.name);  
  printf("Employee Salary : %d\n", org.emp.salary);  
}