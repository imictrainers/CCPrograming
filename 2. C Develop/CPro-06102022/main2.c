#include <stdio.h>
#include <stdlib.h>

int main2() {
	//1. Khai bao bien mang
	int arr[] = {10,20,30,40};
	int arr2[5] = {10,20,30,40,50};
		
	//2. Lay gia tri va hien thi ra ben ngoai
	printf("\narr[%d] = %d",0,arr[0]);
	printf("\narr[%d] = %d",1,arr[1]);
	printf("\narr[%d] = %d",2,arr[2]);
	printf("\narr[%d] = %d",3,arr[3]);
	
	printf("\n");
	printf("\narr[%d] = %d",0,arr2[0]);
	printf("\narr[%d] = %d",1,arr2[1]);
	printf("\narr[%d] = %d",2,arr2[2]);
	printf("\narr[%d] = %d",3,arr2[3]);
	printf("\narr[%d] = %d",4,arr2[4]);
	
	return 0;
}
