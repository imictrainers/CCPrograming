#include <stdio.h>
#include <stdlib.h>

int main6() {
	//1. Khai bao bien
	int a,b,pt;	
		
	//2. Moi nhap gia tri cho bien a
	printf("- Moi nhap gia tri cho a:");
	scanf("%d",&a);
	
	printf("- Moi nhap gia tri cho b:");
	scanf("%d",&b);
	
	//3. Moi chon phep tinh toan
	printf("- Chon: 0-Cong; 1-Tru; 2-Nhan; 3-Chia?");
	scanf("%d",&pt);
	
	//4. Xet phep tinh -> thuc hien tinh toan
	if(pt == 0)	
		printf("-> Tong 2 so a & b: %d", a + b);
	else if(pt == 1)
		printf("-> Hieu 2 so a & b: %d", a - b);
	else if(pt == 2)
		printf("-> Tich 2 so a & b: %d", a * b);
	else if(pt == 3){
		printf("-> Thuong 2 so a & b: %d", a / b);
	}		
	return 0;
}

