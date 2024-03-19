#include<stdio.h>
int square(int a);
int main()
{
       int a;
       printf("Enter number: ");
       scanf("%d",&a);
       printf("Square of the number is: %d\n",square(a));
       return 0;
}
int square(int a)
{
       int s;
       s=a*a;
       return s;
}