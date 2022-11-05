#include <stdio.h>
#include <string.h>

int main4() {
   char str1[50], str2[50];

   //destination string
   strcpy(str1, " abcd ");
 
   //source string
   strcpy(str2, ", efgh ");
   
   strcpy(str2, str1);

   //concatenating the string str2 to the string str1
   strcat(str1, str2);

   //displaying destination string
   printf("String after concatenation: %s", str1);
	printf("String after concatenation: %s", str2);
	 
   return(0);
}
