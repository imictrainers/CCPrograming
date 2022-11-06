//Accessing Structure Members with Pointer
#include <stdio.h>

struct my_structure {
    char name[20];
    int number;
    int rank;
};

int main11()
{
    struct my_structure variable = {"IMIC", 35, 1};

    struct my_structure *ptr;
    ptr = &variable;

    printf("NAME: %s\n", ptr->name);
    printf("NUMBER: %d\n", ptr->number);
    printf("RANK: %d", ptr->rank);

    return 0;
}
/*
NAME: IMIC
NUMBER: 35
RANK: 1
*/