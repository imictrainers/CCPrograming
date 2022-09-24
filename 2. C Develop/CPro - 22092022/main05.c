#include <stdio.h>
#include <stdlib.h>

int main5() {
	//1. Khai bao bien kieu thap phan co ten la a,b (4 byte)
	float a;
	float b;
	int c = 10;  //c = 0
	int d = 10;
	
	//2. Moi nhap gia tri cho bien a
	printf("- Moi nhap gia tri cho a:");
	scanf("%f",&a);
	
	printf("- Moi nhap gia tri cho b:");
	scanf("%f",&b);
	
	//3. Hien thi gia tri cua bien a vua nhap vao
	printf("-> Gia tri cua bien a + b la: %.2f\n", a + b);
	printf("-> Gia tri cua bien a - b la: %.2f\n", a - b);
	printf("-> Gia tri cua bien a * b la: %.2f\n", a * b);
	printf("-> Gia tri cua bien a / b la: %.2f\n", a / b);
	
	c++;  //c = c + 1
	//c = c + 1;
	printf("-> Gia tri cua bien c la: %d\n", c);
	
	d--;
	//d = d - 1;
	printf("-> Gia tri cua bien d la: %d\n", d);
	
	return 0;
}

