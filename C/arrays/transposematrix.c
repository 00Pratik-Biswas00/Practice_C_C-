#include<stdio.h>
int main()
{
       int row,col,a[50][50],b[50][50];
       printf("Rows: ");
       scanf("%d", &row);
       printf("Cols: ");
       scanf("%d", &col);
       printf("Enter the matrix: \n");
       for(int i=0;i<row;i++)
       {
              for(int j=0;j<col;j++)
              {
                     scanf(" %d",&a[i][j]);
              }
       }
       for(int i=0;i<row;i++)
       {
              for(int j=0;j<col;j++)
              {
                     b[j][i]=a[j][i];
              }
       }
       printf("Transpose of the matrix: \n");
       for(int i=0;i<col;i++)
       {
              for(int j=0;j<row;j++)
              {
                     printf("%d ",b[i][j]);
              }
              printf("\n");
       }
       return 0;
}