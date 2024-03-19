#include<stdio.h>
int fun(int m, int  n)
{
       if(m==0)
              return (n+1);
       else if(m>0 && n==0)
              return (fun(m-1,1));
       else if(m>0  && n>0)
              return (fun(m-1,fun(m,n-1)));
}
int main()
{
       int m,n;
       printf("Enter numbers: ");
       scanf("%d%d",&m,&n);
       printf("%d",fun(m,n));
}
