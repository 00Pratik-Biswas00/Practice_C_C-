#include<stdio.h>
int fact(int a);
int main()
{
       int a;
       printf("Enter number: ");
       scanf("%d",&a);
       printf("Factorial of the number is: %d\n",fact(a));
       return 0;
}
int fact(int a)
{
       int f=1;
       for(int i=1;i<=a;i++)
       {
              f=f*i;
       }
       return f;
}