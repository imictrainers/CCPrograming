#include <stdio.h>
#include <stdlib.h>

int main2() {
	//1. Khai bao bien kieu so nguyen co ten la a (2 byte)
	int a;
	
	//2. Moi nhap gia tri cho bien a
	printf("- Moi nhap gia tri cho a:");
	scanf("%d", &a);
	
	//3. Hien thi gia tri cua bien a vua nhap vao
	printf("-> Gia tri cua bien a la: %d", a);
	
	return 0;
}

