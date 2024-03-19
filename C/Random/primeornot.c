#include<stdio.h>
int main()
{
       int n;
       printf("Enter  a number : ");
       scanf("%d",&n);
       int i=2;
       for(i=2;i<n;i++)
       {
              if(n%i==0)
              {
                     printf("Non-prime number\n");
                     break;
              }
       }
       if(i==n)
       {
              printf("Prime number\n");
       }
       return 0;
}