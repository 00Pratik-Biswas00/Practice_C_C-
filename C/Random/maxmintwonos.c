#include<stdio.h>
int main()
{
       int a,b;
       printf("Enter two numbers : ");
       scanf("%d %d",&a,&b);
       a>=b ? printf("%d is larger\n",a) : printf("%d is larger\n",b);
       return 0;
}