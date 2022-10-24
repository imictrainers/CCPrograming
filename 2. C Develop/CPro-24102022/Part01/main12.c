#include<stdio.h>
void main12(){
    int i=0;
    int arr[5];
    printf("Enter array elements:");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are:");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    int sum = 0;
    for(int i = 0; i < 5; i++)
        sum += arr[i];
    printf("Sum =%d", sum);
}