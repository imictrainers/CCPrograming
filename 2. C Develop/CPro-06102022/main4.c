#include <stdio.h>
#include <stdlib.h>

int main4() {
	//1. Khai bao bien mang
	int n = 0;
	int length;
	int i;
	
	//2. Moi nhap
	printf("\n- Input number?");
	scanf("%d", &n);
	
	//3. Khai bao va khoi tao bien mang
	int arr[n];
	
	//4. Su dung cac phuong thuc xac dinh so phan tu
	length = (int)(sizeof(arr)/sizeof(arr[0]));
	printf("\nLength of array: %d\n", length);	
	
	//5. Su dung vong lap for de nhap du lieu vao	
	for(i = 0;i<length;i++){
		printf("\narr[%d] = ?",i);
		 scanf("%d", &arr[i]);
	}	
	
	//6. Su dung vong lap for de hien thi du lieu
	for(i = 0;i<length;i++){
		 printf("\narr[%d] = %d",i,arr[i]);
	}
	
	return 0;
}
