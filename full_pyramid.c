#include <stdio.h>
void main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);//Taking the incput for te rows
   for (i = 1; i <= rows; ++i, k = 0) {//iterating for the rows
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");//for the spaces
      }
      while (k != 2 * i - 1) {
         printf("* ");// for the stars
         ++k;
      }
      printf("\n");//new line after each row
   }
}