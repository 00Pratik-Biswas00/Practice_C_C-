#include<stdio.h>
#include<stdlib.h>
int main()
{
       int *p,n,sum=0;
       printf("How many numbers: ");
       scanf("%d",&n);
       p=(int *)calloc(n,sizeof(int));
       printf("Enter numbers: ");
       for (int i = 0; i < n; i++)
       {
              scanf("%d", (p+i));
       }
       for (int i = 0; i < n; i++)
       {
              sum+= *(p+i);
       }
       printf("Sum: %d\n", sum);
       return 0;
}