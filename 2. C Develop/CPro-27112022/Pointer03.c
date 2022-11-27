/* Viết chương trình bằng C để minh họa việc sử dụng toán tử 
    &(address of) và *(value at address).*/
#include <stdio.h>

void main(void)
{
  int m = 300;
  float fx = 300.60;
  char cht = 'z';
  
  printf("\n\n Pointer : Minh hoa viec su dung toan tu & va *:\n"); 
  printf("----------------------------------------------------\n");
 
  int *pt1;
  float *pt2;
  char *pt3;

  pt1 = &m;
  pt2 = &fx;
  pt3 = &cht;

  printf(" m = %d\n",m);
  printf(" fx = %f\n",fx);
  printf(" cht = %c\n",cht);

  printf("\n Su dung toan tu & :\n"); 
  printf("-----------------------\n");  
  printf ("- Dia chi cua m = %p\n",&m);
  printf ("- Dia chi cua fx = %p\n",&fx);
  printf ("- Dia chi cua cht = %p\n",&cht);

  printf("\n Su dung toan tu & va * :\n"); 
  printf("-----------------------------\n"); 
  printf ("- Gia tri tai dia chi cua m = %d\n",*(&m));
  printf ("- Gia tri tai dia chi cua fx = %f\n",*(&fx));
  printf ("- Gia tri tai dia chi cua cht = %c\n",*(&cht));

  printf("\n Chi su dung bien con tro :\n"); 
  printf("------------------------------\n"); 
  printf ("- Dia chi cua m = %p\n",pt1);
  printf ("- Dia chi cua fx = %p\n",pt2);
  printf ("- Dia chi cua cht = %p\n",pt3);

  printf("\n Chi su dung toan tu voi con tro :\n"); 
  printf("----------------------------------\n"); 
  printf ("- Gia tri tai dia chi cua m = %d\n",*pt1);
  printf ("- Gia tri tai dia chi cua fx= %f\n",*pt2);
  printf ("- Gia tri tai dia chi cua cht= %c\n\n",*pt3);
}

/* Output */
/*
    Pointer : Minh hoa viec su dung toan tu & va *:
    ----------------------------------------------------
    m = 300
    fx = 300.600006
    cht = z

    Su dung toan tu & :
    -----------------------
    - Dia chi cua m = 0061FF10
    - Dia chi cua fx = 0061FF0C
    - Dia chi cua cht = 0061FF0B

    Su dung toan tu & va * :
    -----------------------------
    - Gia tri tai dia chi cua m = 300
    - Gia tri tai dia chi cua fx = 300.600006
    - Gia tri tai dia chi cua cht = z

    Chi su dung bien con tro :
    ------------------------------
    - Dia chi cua m = 0061FF10
    - Dia chi cua fx = 0061FF0C
    - Dia chi cua cht = 0061FF0B

    Chi su dung toan tu voi con tro :
    ----------------------------------
    - Gia tri tai dia chi cua m = 300
    - Gia tri tai dia chi cua fx= 300.600006
    - Gia tri tai dia chi cua cht= z
*/