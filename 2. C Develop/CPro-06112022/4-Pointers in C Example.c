//Pointers in C Example
#include<stdio.h>

int main(void)
{
    int x = 99;
    int y = 100;
    //1. Khai báo 1 biến con trỏ
    int *ptr;

    //2. Gán giá trị cho con trỏ
    ptr = &x;
    ptr = &y;

    printf("Value at ptr is: %d \n", *ptr);
    printf("Address pointed by ptr is: %p \n", ptr);
    
    return 0;
}
/*
Value at ptr is: 99
Address pointed by ptr is: 0x7fff99c0e6c4
*/