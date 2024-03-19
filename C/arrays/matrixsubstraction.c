#include<stdio.h>
int main()
{
       int row,col,a[100][100],b[100][100],c[100][100];
       printf("Rows: ");
       scanf("%d", &row);
       printf("Cols: ");
       scanf("%d", &col);
       printf("Enter 1st matrix: \n");
       for(int i=0;i<row;i++)
       {
              for(int j=0;j<col;j++)
              {
                     scanf("%d",&a[i][j]);
              }
       }
       printf("Enter 2nd matrix: \n");
       for(int i=0;i<row;i++)
       {
              for(int j=0;j<col;j++)
              {
                     scanf("%d",&b[i][j]);
              }
       }
       for(int i=0;i<row;i++)
       {
              for(int j=0;j<col;j++)
              {
                     c[i][j]=a[i][j]-b[i][j];
              }
       }
       printf("Sub of two matrices: \n");
       for(int i=0;i<row;i++)
       {
              for(int j=0;j<col;j++)
              {
                     printf("%d ",c[i][j]);
              }
              printf("\n");
       }
       return 0;
}