/* Hoán đổi các phần tử bằng cách sử dụng con trỏ */
#include <stdio.h>

void swapNumbers(int *x,int *y,int *z);

void main(void)
{
    int a,b,c;
	printf("\n\n Pointer :Hoan doi vi tri su dung con tro :\n"); 
	printf("-----------------------------------------------\n");	
    printf("- Nhap vao so thu 1: ");
    scanf("%d",&a);
	printf("- Nhap vao so thu 2: ");
    scanf("%d",&b);
	printf("- Nhap vao so thu 3: ");
    scanf("%d",&c);
		
    printf("\n Gia tri truoc khi hoan doi :\n");
    printf("a = %d\n b = %d\n c = %d\n", a,b,c);

    swapNumbers(&a,&b,&c);

    printf("\n Gia tri sau khi hoan doi :\n");
    printf("a = %d\n b = %d\n c = %d\n\n", a,b,c);   
}
void swapNumbers(int *x,int *y,int *z)
{
    int tmp;
    tmp=*y;
    *y=*x;
    *x=*z;
    *z=tmp;
}