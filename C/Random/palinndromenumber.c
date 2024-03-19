#include<stdio.h>
int main()
{
       int n,d,sum=0,temp;
       printf("Enter  a number : ");
       scanf("%d",&n);
       temp=n;
       while (n>0)
       {
              d=n%10;
              sum=sum*10+d;
              n/=10;
       }
       if(temp==sum)
       {
              printf("pallindrome number");
       }
       else
       {
              printf("non-pallindrome number");
       }
       return 0;
}