#include<stdio.h>

//1. Khai bao Protype
int Chan_Le(int gt);

int main() 
{
    //1. Khai bao bien
    int gt;    
    
    //2. Moi nhap
    printf("\n- Input a?");
    scanf("%d", &gt);  		     
		  
    //3. Goi ham tinh toan va hien thi kq
    if(Chan_Le(gt) == 0)    
       printf("-> This is even number");
    else
       printf("-> This is odd number");
    
    return 0;
}

/*
 - return 0: Chan
 - return 1: le
*/
int Chan_Le(int gt)
{
	return (gt %2 == 0)? 0 : 1;
}

