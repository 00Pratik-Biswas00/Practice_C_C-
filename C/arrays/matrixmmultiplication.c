#include<stdio.h>
int main()
{
       int row1,col1,row2,col2,a[100][100],b[100][100],c[100][100];
       printf("Row 1: ");
       scanf("%d", &row1);
       printf("Col : ");
       scanf("%d", &col1);
       printf("Row 2: ");
       scanf("%d", &row2);
       printf("Col 2: ");
       scanf("%d", &col2);
       if(col1==row2)
       {
       printf("Enter 1st matrix: \n");
       for(int i=0;i<row1;i++)
       {
              for(int j=0;j<col1;j++)
              {
                     scanf("%d",&a[i][j]);
              }
       }
       printf("Enter 2nd matrix: \n");
       for(int i=0;i<row2;i++)
       {
              for(int j=0;j<col2;j++)
              {
                     scanf("%d",&b[i][j]);
              }
       }
       for(int i=0;i<row1;i++)
       {
              for(int j=0;j<col2;j++)
              {
                     c[i][j]==0;
                     for(int k=0;k<row2;k++)
                     {
                            c[i][j]+=a[i][k]*b[k][j];
                     }
              }
       }
       printf("Mul of two matrices: \n");
       for(int i=0;i<row1;i++)
       {
              for(int j=0;j<col2;j++)
              {
                     printf("%d ",c[i][j]);
              }
              printf("\n");
       }
       }
       else
       {
              printf("Not possible to calculate\n");
       }
       return 0;
}                          












