#include <stdio.h>

int main()
{
	//1. Khai bao bien
	int i,n,opt;
	
	//2. 
	printf("- n = ?");
	scanf("%d", &n);
	
	fflush(stdin);
	printf("- opt = ?");
	scanf("%d", &opt);
	
	//3. Su dung vong lap
	for(i=0;i<n;i++){
		if(opt == 0){
			if(i%2==0)
				printf(i);
		}else{
			if(i%2!=0)
				printf(i);
		}
	}
   return 0;
}
