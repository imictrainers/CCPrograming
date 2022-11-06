//Pointer to Array of Structures in C
#include <stdio.h>

struct Book
{
    char name[10];
    int price;
};

int main10()
{
    struct Book a;      //Single structure variable
    struct Book* ptr;   //Pointer of Structure type
    ptr = &a;
 
    struct Book b[10];  //Array of structure variables
    struct Book* p;     //Pointer of Structure type
    p = &b;  
    
    return 0;
}