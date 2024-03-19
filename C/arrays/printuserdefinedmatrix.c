#include<stdio.h>
int main()
{
       int row,col,a[50][50];
       printf("Rows : ");
       scanf("%d", &row);
       printf("Cols : ");
       scanf("%d", &col);
       printf("Enter matrix : \n");
       for(int i=0;i<row;i++)
       {
              for(int j=0;j<col;j++)
              {
                     scanf(" %d",&a[i][j]);
              }
       }
       printf("Your answer : \n");
       for(int i=0;i<row;i++)
       {
              for(int j=0;j<col;j++)
              {
                     printf("%d ",a[i][j]);
              }
              printf("\n");
       }
       return 0;
}