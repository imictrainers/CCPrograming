#include <stdio.h>
int main13()
{
    float arr1[5] = {1.5, 2.1, 3.7, 4.2, 5.5}, arr2[5];
    for(int i = 0; i < 5; i++)
        arr2[i] = arr1[i];

    for(int i = 0; i < 5; i++)
        printf("%d ", arr2[i]);
    return 0;
}