#include<stdio.h>
int main()
{
       int a;
       printf("Enter number : ");
       scanf("%d",&a);
       if(a>0)
       {
              printf("Positive number\n");
       }
       else if(a==0)
       {
              printf("Zero\n");
       }
       else
       {
              printf("Negative number\n");
       }
       return 0;
}