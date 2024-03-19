#include<stdio.h>
int main()
{
       int row, col, a[100][100], b[100][100], sum[100][100], i, j;
       printf("Enter the number of rows : ");
       scanf("%d", &row);
       printf("Enter the number of columns : ");
       scanf("%d", &col);
       printf("Enter elements of 1st matrix:\n");
       for (i = 0; i < row; i++)
       {
              for (j = 0; j < col; j++) 
              {
                     scanf("%d", &a[i][j]);
              }
       }
       printf("Enter elements of 2nd matrix:\n");
       for (i = 0; i < row; i++)
       {
              for (j = 0; j < col; j++) 
              {
                     scanf("%d", &b[i][j]);
              }
       }
       for (i = 0; i < row; i++)
       {
              for (j = 0; j < col; j++) 
              {
                     sum[i][j] = a[i][j] + b[i][j];
              }
       }
       printf("Sum of two matrices: \n");
       for (i = 0; i < row; i++)
       {
              for (j = 0; j < col; j++) 
              {
              printf("%d ", sum[i][j]);
              if (j == col - 1) 
              {
                     printf("\n");
              }
              }
       }
       return 0;
}