/* Viết chương trình bằng C để trình bày cách xử lý các con trỏ trong chương trình */
#include <stdio.h>
void main(void)
{
   int* ab;
   int m;
   m=29;

   printf("\n\n Pointer : Cach xu ly con tro trong chuong trinh :\n"); 
   printf("------------------------------------------------------\n");
   printf(" Khai bao ab = int pointer, int m= 29\n\n");
    
   printf(" Dia chi cua m : %p\n",&m);
   printf(" Gia tri cua m : %d\n\n",m);
   ab = &m;

   printf(" Con tro ab da duoc nhan dia chi cua m\n");
   printf(" Dia chi con tro ab : %p\n",ab);
   printf(" Gia tri cua con tro ab : %d\n\n",*ab);
   m = 34;

   printf(" Bien m gan gia tri 34 \n");
   printf(" Dia chi con tro ab : %p\n",ab);
   printf(" Gia tri cua con tro ab : %d\n\n",*ab);
   *ab = 7;

   printf(" Bien con tro ab duoc gan gia tri = 7 \n");
   printf(" Dia chi cua m : %p\n",&m);
   /* vì ab chứa địa chỉ của m nên *ab đã thay đổi giá trị của m và bây giờ m trở thành 7*/
   printf(" Gia tri cua m : %d\n\n",m);  
}