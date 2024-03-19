#include<stdio.h>
int main()
{
       int x[50],n,t;
       printf("size");
       scanf("%d",&n);
       for(int i=0;i<n;i++)
       {
              scanf("%d",&x[i]);
       }
       for(int i=0;i<n-1;i++)
       {
              for (int j = 0; j < n-i-1; j++)
              {
                     if (x[j]>x[j+1])
                     {
                            t=x[j];
                            x[j]=x[j+1];
                            x[j+1]=t;
                     }
                     
              }
              
       }
       for(int i=0;i<n;i++)
       {
              printf("%d",x[i]);
       }
       return 0;
}