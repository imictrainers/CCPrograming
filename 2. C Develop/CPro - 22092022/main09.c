#include <stdio.h>
#include <stdlib.h>

int main9() {
	//1. khai bao bien
	int a;
	
	//2. Su dung nested if else statement
	if(a == 0)
		printf("-> Gia tri cua a = 0");
	else if(a == 5)
		printf("-> Gia tri cua a = 5");
	else if(a == 10)
		printf("-> Gia tri cua a = 10");
	else{
		printf("-> Gia tri cua a = ...");		
	}				
	return 0;
}

