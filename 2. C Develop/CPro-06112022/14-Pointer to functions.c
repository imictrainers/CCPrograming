//Pointer to functions
//- Cú pháp: type (*pointer-name)(parameter);

//Example of Pointer to Function
#include <stdio.h>

int sum(int x, int y)
{
    return x+y;
}

int main()
{
    int (*fp)(int, int);jjk
    fp = sum;
    int s = fp(10, 15);
    printf("Sum is %d", s);
    return 0;
}