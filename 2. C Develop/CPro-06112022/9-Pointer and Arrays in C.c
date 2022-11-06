//Pointer and Arrays in C
//- Declare an array arr:
int arr[5] = { 1, 2, 3, 4, 5 };

#include<stdio.h>

void main()
{
   int a[3] = {1, 2, 3};
   int *p = a;    
   for (int i = 0; i < 3; i++)
   {
      printf("%d", *p);
      p++;
   }
  return 0;
}
/*
Output: 1 2 3
*/

//Syntax: *(a+i)  //pointer with an array
//is same as: a[i]

//Pointer and Character strings
char *str = "Hello";
char *str2;
str = "hello"; 
