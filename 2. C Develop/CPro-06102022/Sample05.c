#include <stdio.h>
#include <stdlib.h>

int Sample05() {
	//1. Khai bao bien mang
	int arr[3];
	
	//2. Dua cac gia tri vao bien mang
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	//arr[3] = 40;
	
	//3. Lay gia tri va hien thi ra ben ngoai
	printf("\narr[%d] = %d",0, arr[0]);
	printf("\narr[%d] = %d",1, arr[1]);
	printf("\narr[%d] = %d",2, arr[2]);
		
	return 0;
}
