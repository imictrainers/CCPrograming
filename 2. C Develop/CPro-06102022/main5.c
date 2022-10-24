#include <stdio.h>
#include <stdlib.h>

int main5() {
	//1. Khai bao bien mang
	int n = 0;
	int length;
	int i;
	int opt;
	
	//2. Moi nhap
	//printf("\n- Input number?");
	//scanf("%d", &n);
	
	//3. Khai bao va khoi tao bien mang
	int arr[3];
	
	//4. Su dung cac phuong thuc xac dinh so phan tu
	length = (int)(sizeof(arr)/sizeof(arr[0]));
	printf("\nLength of array: %d\n", length);	
	
	//5. Su dung vong lap for de nhap du lieu vao	
	for(i = 0;i<length;i++){
		printf("\narr[%d] = ?",i);
		 scanf("%d", &arr[i]);
	}
	
	//6. Xac dinh max
	printf("- Max(0)& Min(1)?");
	scanf("%d", &opt);
	
	switch(opt){
		 case 0: {
		 	  int max=arr[0];
				for(i = 1;i<length;i++){
					 if(max < arr[i]){
					 	  max = arr[i];
					 }
				}
			  printf("\nMax = %d", max);
		 } break;
		 case 1:{
			  int min=999;
				for(i = 0;i<length;i++){
					 if(min > arr[i]){
					 	  min = arr[i];
					 }
				} 
			  printf("\nMin = %d", min);
		 } break;
	}
		
	//6. Su dung vong lap for de hien thi du lieu
	for(i = 0;i<length;i++){
		 printf("\narr[%d] = %d",i,arr[i]);
	}	
	return 0;
}
