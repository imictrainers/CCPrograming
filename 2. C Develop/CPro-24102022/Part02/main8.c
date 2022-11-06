#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNo;
    char fullName[25];
    int age;      
    char gender[5];
};

int main8() {
	//1. Khai bao bien 
	int n;
	int i;
	char str[5];
	
	//2. Moi nhap
	printf("- Ban can may sinh vien");
	scanf("%d", &n);
	gets(str);
	
	//3. Khai bao bien struct
	struct Student std[5];
	//struct Employee em;
	
	//4. Nhap thong tin cho cac nhan vien
	for(i = 0; i < n; i++)
  {	  
    printf("\nEnter %d student No:\n", i+1);
    printf("\nrollNo:");
    scanf("%d", &std[i].rollNo);
    gets(str);
    
    printf("\nStudent name:");    
    gets(std[i].fullName);
        
    printf("\nEnter Age:");
    scanf("%d", &std[i].age);
    gets(str);
    
    printf("\nStudent gender:");    
    gets(std[i].gender);		 
  }
	
	//5. Hien thi thong tin cua nhan vien
	printf("\nDisplaying Employee record:\n");
  for(i = 0; i < n; i++)
  {	
      printf("\n-RollNo: %d", std[i].rollNo);
			printf("\n-FullName: %s",std[i].fullName);
			printf("\n-Age: %d", std[i].age);
			printf("\n-Gender: %s", std[i].gender);
  }	
  
	return 0;
}
