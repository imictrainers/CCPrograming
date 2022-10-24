#include <stdio.h>
#include <stdlib.h>

int main2() {
  //1. khai bao mang ky tu
	char str[20];
	
	//2. Yeu cau nhap vao
  printf("Enter a string: \n");
  //scanf("%[^\n]", &str);
  gets(str);
  
  //3. Hien thi ket qua
  printf("%s", str);
	return 0;
}
