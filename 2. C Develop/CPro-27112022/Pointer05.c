/* Viết chương trình trong C để tìm số lớn nhất giữa hai số bằng con trỏ */
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int a,b,*ptr1=&a,*ptr2=&b;
    
    printf("\n\n Pointer : Tim gia tri lon nhat giua 2 so :\n"); 
    printf("-----------------------------------------------\n");   
    
    printf("- Nhap vao so thu 1: ");
    scanf("%d", ptr1);
    printf("- Nhap vao so thu 2: ");
    scanf("%d", ptr2); 

    if(*ptr1 > *ptr2)    
        printf("\n\n %d la so lon nhat.\n\n", *ptr1);   
    else   
        printf("\n\n %d la so lon nhat.\n\n", *ptr2);  
}