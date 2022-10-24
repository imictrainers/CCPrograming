#include <stdio.h>
#include <string.h>
int main5()
{
     char s1[20] = "Chao cac";
     char s2[20] = "Ban";
     
     if (strcmp(s1,s2) ==0)     
        printf("string 1 and string 2 are equal\n");
     else      
         printf("string 1 and 2 are different\n");
         
     if(strcmp(s1,s2) == 0)
     	 printf("= 0");
		 else if(strcmp(s1,s2) > 0)
		   printf("> 0"); 
		 else
		   printf("< 0");  								
     
     return 0;
}
