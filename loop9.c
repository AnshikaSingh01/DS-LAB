#include<stdio.h>
void main()
{
   int i,j,rows,k,l;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i)
     {
      for (j= 1; j<= rows - i; j++)
       {
         printf(" ");
       }
      for(k=1;k<=2*i-1;k++)
       {
         printf("*");
       }
      printf("\n");
   }
   for (i= 1; i<= rows- 1; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf(" "); 
    }
       for (j = 1 ; j <= 2*(rows-i)-1; j++)
         {
          printf("*");  
         }
         printf("\n");
  }
}