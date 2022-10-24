#include <stdio.h>
#include <stdlib.h>

int main3() {
	//1. Khai bao bien mang
	int arr[] = {10,20,30,40};
	int length = 0;
	
	//2. Su dung cac phuong thuc xac dinh so phan tu
	printf("sizeof(arr): %d\n", sizeof(arr));
	printf("sizeof(arr[0]): %d\n", sizeof(arr[0]));

	length = (int)(sizeof(arr)/sizeof(arr[0]));
	printf("Length of array: %d\n", length);	
	
	//3. Su dung vong lap for
	int i = 0;
	for(i = 0;i<length;i++){
		 printf("\narr[%d] = %d",i,arr[i]);
	}
	
	return 0;
}
