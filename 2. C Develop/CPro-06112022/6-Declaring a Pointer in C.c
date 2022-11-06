//1) Declaring a Pointer in C:

//- Cú pháp: type *pointer_name;
//- Khai báo:
    int *ptr;     //pointer to int
    float *ptr;   //pointer to float
    char *ptr;    //pointer to char
    double *ptr;  //pointer to double

//2) Assigning Value to a Pointer Variable:
#include<stdio.h>

int main(void)
{
    int a = 10;
    //Khai báo biến con trỏ
    int *ptr;
    //Gán giá trị cho biến con trỏ
    ptr = &a;

    printf("Value at ptr is: %d \n", *ptr);
    printf("Address pointed by ptr is: %p \n", ptr);
    return 0;
}

//3) Pointer to Pointer Assignment in C:
#include<stdio.h>

int main(void)
{
    float a = 10;
    // Khai báo 2 con trỏ
    int *p1, *p2;

    // Gán giá trị cho con trỏ
    p1 = &a;
    // Gán giá trị từ 1 con trỏ khác
    p2 = p1;

    printf("Value at p1 and p2: %d %d \n", *p1, *p2);
    printf("Address pointed by p1 and p2: %p %p \n", p1, p2);
    return 0;
}
/* 
Output:
Value at p1 and p2: 10 10
Address pointed by p1 and p2: 0x7fff99c0e6c4 0x7fff99c0e6c4
*/