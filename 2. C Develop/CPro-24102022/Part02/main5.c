#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int rollNo;
    char fullName[25];
    int age;      
    char gender[5];
};

int main5() {
	//1. Khai bao bien tu struct
	struct Student std;
	char temp[10];
	
	//2. Thiet lap thong tin cho sinh vien
	printf("- rollNo?");
	scanf("%d",&std.rollNo);
	gets(temp);
	
	printf("- fullname?");
	//scanf("%s", std.fullName);	
	gets(std.fullName);
	//gets(temp);
	
	printf("- age?");
	scanf("%d",&std.age);
	gets(temp);
	
	printf("- gender?");
	gets(std.gender);
	
	//3. Hien thi thong tin sinh vien
	printf("\n-RollNo: %d", std.rollNo);
	printf("\n-FullName: %s",std.fullName);
	printf("\n-Age: %d", std.age);
	printf("\n-Gender: %s", std.gender);
		
	return 0;
}


