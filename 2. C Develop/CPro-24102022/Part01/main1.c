#include <stdio.h>
#include <stdlib.h>

/* data-type variable-name[size];
   data-type array-name[size] = { list of values };
*/
int main(void) {
  //1. khai bao mang ky tu
	char str[20];

	/* Example of array declaration */
  char a[5];    /* char type value array */
  float ar[9];  /* float type value array */
  int arr[10];  /* int type value array */

	//2. Yeu cau nhap vao
  printf("Enter a string:");
  scanf("%[^\n]", &str);
  
  //3. Hien thi ket qua
  printf("%s", str);
	return 0;
}
