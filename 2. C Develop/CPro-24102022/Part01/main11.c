#include <stdio.h>
#include <stdlib.h>

void main11()
{
    int i;
    int arr[10];  
    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }   
    for(i = 0; i < 10; i++) 
    {
        printf("%d\t",arr[i]);
    }
}