#include<stdio.h>
 
int main()
{    
    int *p;         
    int (*ptr)[5];
    int arr[5];
    
    p = arr;        
    ptr = &arr;
     
    printf("p = %p, ptr = %p\n", p, ptr);     
    p++;
    ptr++;
     
    printf("p = %p, ptr = %p\n", p, ptr);     
    return 0;
}
/*
Output: 
p = 0x7fff4f32fd50, ptr = 0x7fff4f32fd50
p = 0x7fff4f32fd54, ptr = 0x7fff4f32fd64
*/