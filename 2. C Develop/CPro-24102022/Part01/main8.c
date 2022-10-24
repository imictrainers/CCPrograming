#include<stdio.h>

//1. Khai bao Protype
float Tinh_Toan(float a, float b, int opt);

int main8() 
{
    //1. Khai bao bien
    float a, b;
    int opt;
    
    //2. Moi nhap
    printf("\n- Input a?");
    scanf("%f", &a);   
		 
    printf("\n- Input b?");
    scanf("%f", &b);    
    
    printf("\n- Input Option?");
    scanf("%d", &opt);  
		  
    //3. Goi ham tinh toan va hien thi kq
    printf("%.2f", Tinh_Toan(a,b,opt));
    
    return 0;
}
/*
- float a: Tham so a
- float b: Tham so b
	- opt = 0: Tong
	- opt = 1: Hieu
	- opt = 2: Tich
	- opt = 3: Thuong
*/
float Tinh_Toan(float a, float b, int opt)
{
	if(opt == 0)
    return a +b;
  else if(opt == 1)
    return a-b;
  else if(opt == 2)
    return a*b;
  else
    return a/b;	
}

