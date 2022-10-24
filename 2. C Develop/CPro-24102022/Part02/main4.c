#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int rollNo;
    char fullName[25];
    int age;      
    char gender;
};

int main4() {
	//1. Khai bao bien tu struct
	struct Student std;
	
	//2. Thiet lap thong tin cho sinh vien
	std.rollNo = 100;
	strcpy(std.fullName, "Nguyen Van A");
	std.age = 200;
	std.gender = 'F';
	
	//3. Hien thi thong tin sinh vien
	printf("\n-RollNo: %d", std.rollNo);
	printf("\n-FullName: %s",std.fullName);
	printf("\n-Age: %d", std.age);
	printf("\n-Gender: %c", std.gender);
		
	return 0;
}


