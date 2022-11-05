#include<stdio.h>

//1. Khai bao Protype
/* Có 2 tham số đầu vào kiểu số nguyên */
int multiply(int a, int b);

int main6() 
{
    //1. Khai bao bien
    int a, b;
    
    //2. Gan gia tri cho bien
    a = 100;
    b = 200;
    
    //3. Su dung ham de tinh toan
    printf("%d", multiply(a,b));
    
    return 0;
}

int multiply(int a, int b)
{
    return (a*b);
}
