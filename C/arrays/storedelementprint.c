#include<stdio.h>
int main()
{
       int n,i,a[10000];
       printf("Enter the size of the array : ");
       scanf("%d",&n);
       printf("enter elements : \n");
       for(i=0;i<n;i++)
       {
              scanf("\n%d",&a[i]);
       }
       printf("Your answer is : \n");
       for(i=0;i<n;i++)
       {
              printf("%d\n",a[i]);
       }
       return 0;
}