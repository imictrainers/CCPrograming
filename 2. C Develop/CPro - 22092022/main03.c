#include <stdio.h>
#include <stdlib.h>

int main() {
	//1. Khai bao bien kieu so nguyen co ten la a (2 byte)
	int a;
	int b;
	long c; //Long số nguyên lớn
	
	//2. Gán giá tri cho 2 bien a & b (o nho trong thanh ram)
	//Su dung toan tu = de gan gia tri cho bien
	a = 32769;
	b = 32769;
	//%d: Cho các giá trị số nguyên
	//%s: Cho các giá trị là chuỗi
	//%.2f: Cho các giá trị là thập phân

	//c. Lay gia tri o bien de hien thi ra ben ngoai
	printf("Gia tri cua %d + %d = %d", a, b, a + b);	
	return 0;
}

