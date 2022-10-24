#include<stdio.h>
void main10()
{
    int i;
    int arr[] = {2, 3, 4};      // Compile time array initialization
    for(i = 0 ; i < 3 ; i++) 
    {
        printf("%d\t",arr[i]);
    }
}