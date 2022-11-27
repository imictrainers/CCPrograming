/* Viết chương trình C cộng hai số bằng con trỏ */
#include <stdio.h>

void main(void)
{
   int a, b, *ptr, *qtr, sum;
   
   printf("\n\n Pointer : Cong 02 so voi con tro :\n"); 
   printf("--------------------------------\n");   
 
   printf("- Nhap so thu 1: ");
   scanf("%d", &a);
   printf("- Nhap so thu 2: ");
   scanf("%d", &b);   
 
   ptr = &a;
   qtr = &b;
 
   sum = *ptr + *qtr;
 
   printf("- Tong cua 2 so : %d\n\n",sum); 
}
/* Output */
/*
     Pointer : Cong 02 so voi con tro :
    -----------------------------------
    - Nhap so thu 1: 10
    - Nhap so thu 2: 20
    - Tong cua 2 so : 30
*/