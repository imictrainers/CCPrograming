#include <stdio.h>
int sample2()
{
     float marks[2][3], total[2];

     for(int i = 0; i < 2; i++) {
         for(int j = 0; j < 3; j++){
              scanf("%f", &marks[i][j]);
         }  
     }

     for(int i = 0; i < 2; i++) {
         float sum = 0;
         for(int j = 0; j < 3; j++){
              sum += marks[i][j];
         }
         total[i] = sum;
     }

     for(int i = 0; i < 2; i++)
         printf("%d : %f\n", i + 1, total[i]);

     return 0;
}