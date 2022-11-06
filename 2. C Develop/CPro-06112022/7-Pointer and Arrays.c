//Pointer and Arrays

//For example:
int a  = 5;
int *ptr1 = &a;
float b = 5.5;
float *ptr2 = &b;
// *ptr1 = 2 is equivalent to a = 2
// (*ptr1)++ is equivalent to a++
// float z = *ptr2 + 4.2 is equivalent to float z = b + 4.2;

//Here is one complete program:
#include <stdio.h>

int main()
{
    int a;  
    a = 10;
    int *p = &a;     // declaring and initializing the pointer

    //prints the value of 'a'
    printf("%d\n", *p);  
    printf("%d\n", *&a);  
    //prints the address of 'a'
    printf("%u\n", &a);    
    printf("%u\n", p);     
    
    printf("%u\n", &p);    //prints address of 'p'
    
    return 0;
}
//Output:
/* 
10
10
3795480300
3795480300
3795480304
*/