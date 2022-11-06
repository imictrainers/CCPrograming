#include <stdio.h>

struct Employee
{
    char fullname[25];
    int salary;
};

int main6() {
	//1. Khai bao bien 
	int n;
	int i;
	char str[5];
	
	//2. Moi nhap
	//printf("- Ban can may nhan vien");
	//scanf("%d", &n);
	//n = 2;
	
	//3. Khai bao bien struct
	struct Employee emp[2];
	//struct Employee em;
	
	//4. Nhap thong tin cho cac nhan vien
	for(i = 0; i < n; i++)
  {	  
    //printf("\nEnter %d Employee No:\n", i+1);
    printf("\nEmployee name:");
    //scanf("%s", em.fullname);
    gets(emp[i].fullname);
        
    printf("\nEnter Salary:");
    scanf("%d", &emp[i].salary);
    
		gets(str);    
  }
	
	//5. Hien thi thong tin cua nhan vien
	printf("\nDisplaying Employee record:\n");
  for(i = 0; i < n; i++)
  {	
      printf("\nEmployee name is %s", emp[i].fullname);
      printf("\nSlary is %d", emp[i].salary);
  }	
	return 0;
}
