//Pointer to an Array
#include<stdio.h>
 
int main()
{
  int arr[5] = { 1, 2, 3, 4, 5 };
  int *ptr = arr;
 
  printf("%p\n", ptr);
  return 0;
}

//Syntax: data_type (*var_name)[size_of_array];
//Example: int (*ptr)[10];

