#include<stdio.h>
int main()
{
       int a;
       printf("Enter number : ");
       scanf("%d",&a);
       a%2==0 ? printf("Even number\n") : printf("Odd number\n");
       return 0;
}