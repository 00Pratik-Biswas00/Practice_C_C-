#include<stdio.h>
void fib(int a);
int main()
{
       int a;
       printf("Enter limit of the Fibonacci series: ");
       scanf("%d",&a);
       fib(a);
       return 0;
}
void fib(int a)
{
       int t1=0,t2=1;
       printf("The Fibonacci series is: %d %d ", t1, t2);
       int nextTerm;
       for(int i=2;i<a;i++)
       {
              nextTerm=t1+t2;
              printf("%d ",nextTerm);
              t1=t2;
              t2=nextTerm;
       }
}