#include <stdio.h>
#include <string.h>
  
struct Organisation 
{
  char organisation_name[20];
  char org_number[20];  
  struct Employee 
  {
    int employee_id;
    char name[20];
    int salary;    
  } emp; 
};  

int main66()
{
    //1. Khai báo biến struct
    struct Organisation org;  
    
    //2. Thiết lập giá trị cho biến
    org.emp.employee_id = 101;  
    strcpy(org.emp.name, "Robert");
    org.emp.salary = 400000;
    strcpy(org.organisation_name, "Mr A");
    strcpy(org.org_number, "GFG123768");       
        
    //3. Hiển thị thông tin chi tiết
    printf("Organisation Name : %s\n", org.organisation_name);  
    printf("Organisation Number : %s\n", org.org_number);  
    printf("Employee id : %d\n", org.emp.employee_id);  
    printf("Employee name : %s\n", org.emp.name);  
    printf("Employee Salary : %d\n", org.emp.salary);  
}