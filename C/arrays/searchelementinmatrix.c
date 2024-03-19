/*
#include<stdio.h>
int main()
{
       int p,row,col,a[50][50],flag=0;
       printf("rows : ");
       scanf("%d", &row);
       printf("cols : ");
       scanf("%d", &col);
       printf("enter matrix : \n");
       for(int i=0;i<row;i++)
       {
              for(int j=0;j<col;j++)
              {
                     scanf(" %d",&a[i][j]);
              }
       }
       printf("enter the number you want to search : ");
       scanf("%d",&p);
       int i=0,j=col-1;
       while(i<row && j>=0)
       {
              if(a[i][j]==p)
              {
                     printf("found at %d %d",i, j);
              }
              if(a[i][j]>p)
              {
                     j--;
              }
              else
              {
                     i++;
              }
       }
       return 0;
}
*/


#include<stdio.h>
int main()
{
       int i,j,p,row,col,a[50][50],flag=0;
       printf("rows: ");
       scanf("%d", &row);
       printf("cols: ");
       scanf("%d", &col);
       printf("Enter matrix: \n");
       for(int i=0;i<row;i++)
       {
              for(int j=0;j<col;j++)
              {
                     scanf(" %d",&a[i][j]);
              }
       }
       printf("Enter the number you want to search: ");
       scanf("%d",&p);
       for( i=0;i<row;i++)
       {
              for( j=0;j<col;j++)
              {
                     if(a[i][j]==p)
                     {
                            flag=1;
                            printf("Index of the element is: (%d,%d) and Position of the element is: (%d,%d) \n",i,j,(i+1),(j+1));
                            break;  
                     } 
              }                                                  
       }
       if(flag==0)
              printf("Element not found\n");        
       return  0;
}