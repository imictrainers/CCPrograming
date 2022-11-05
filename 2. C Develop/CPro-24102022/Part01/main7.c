#include<stdio.h>
//1. Khai bao Protype
int Cuoc_Taxi(int km);
int main7() 
{
    //1. Khai bao bien
    int km;    
    //2. Gan gia tri cho bien
    //km = 10;
    printf("- Km?");
    scanf("%d", &km);        
    //3. Su dung ham de tinh toan
    printf("%d", Cuoc_Taxi(km));    
    return 0;
}

int Cuoc_Taxi(int km)
{
	if(km == 1)
	  return 5000;
  else if(km < 30 && km > 1)
    return (km-1)*4000 + 1*5000;
  else
    return 5000 + 29*4000 + (km - 30)*3000;
}