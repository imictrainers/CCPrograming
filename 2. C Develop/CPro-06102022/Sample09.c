#include <stdio.h>

void main(){
    //1. Khai bao bien
    int n,i;
    int opt;
    
    //2. Moi nhap so n?
    printf("\n- Input:");
    scanf("%d", &n);
    
    //3. Moi nhap lua chon Even hoac Odd
    fflush(stdin);    
    printf("\nOption: 0-Even; 1-Odd");
    scanf("%d", &opt);
    
    //4. Duyet danh sach
    for(i=0;i<n;i++){
    	if(opt == 0){
			if(i % 2 == 0)	
				printf("%d",i);
		}else{
			if(i % 2 != 0)	
				printf("%d",i);
		}		
	}
}
