#include <stdio.h>
#include <stdlib.h>

int main2() {
	//1. Khai bao bien kieu so nguyen co ten la a (2 byte)
	//<kieu du lieu> <ten bien>;
	//- Qui tac:
	//+ Ko chua ky tu dac biet.
	//+ Ko chua ky tu dau.
	//+ Ko bat dau bang so.
	//+ Ko chua khoang trang
	//+ Ko trung cac tu khoa cua ngon ngu lap trinh	
	int a;
	
	//2. Gán gía tri cho bien a (o nho trong thanh ram)
	//Su dung toan tu = de gan gia tri cho bien
	a = 100;
	
	//c. Lay gia tri o bien de hien thi ra ben ngoai
	printf("Gia tri cua a la: %d", a);
	
	return 0;
}

