#include<stdio.h>
int checkPrime(int n);
int main()
{
       int n;
       printf("Enter number: ");
       scanf("%d",&n);
       int flag=0;
       for(int i=2;i<n/2;i++)
       {
              if(checkPrime(i)==1)
              {
                     if(checkPrime(n-i)==1)
                     {
                     printf("The number %d can be expressed as the sum of %d and %d\n", n , i, (n-i));
                     flag=1;
                     }
              }
       }
       if(flag==0)
       {
                     printf("can't be expressed\n");
       }
       return 0;
}
int checkPrime(int n)
{
       int prime=1;
       for(int i=2;i<=n/2;i++)
       {
              if(n%i==0)
              {
                     prime=0;
                     break;
              }
       }
       return prime;
}
