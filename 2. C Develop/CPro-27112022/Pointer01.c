/* Viết chương trình trong C để hiển thị khai báo cơ bản của con trỏ */
#include <stdio.h>
void main(void)
{
	int m=10,n,o;
	int *z=&m;

	printf("\n\n Hien thi khai bao co ban cua con tro :\n");
	printf("-------------------------------------------------------\n"); 
	printf(" Day la m=10, n va o la hai bien nguyen va *z la mot so nguyen");	
	printf("\n\n z luu dia chi cua m  = %p\n",  z); //z là một con trỏ nên %p sẽ in địa chỉ
	printf("\n *z luu tru gia tri cua m = %i\n",   *z); 
	printf("\n &m la dia chi cua m = %p\n",   &m); //&m đưa ra địa chỉ của biến số nguyên m
    // vì vậy %p là công cụ xác định cho địa chỉ đó
	printf("\n &n luu tru dia chi cua n = %p\n",   &n);
	printf("\n &o luu tru dia chi cua o = %p\n",   &o);
	printf("\n &z luu tru dia chi cua z = %p\n\n", &z); 	      
}