#include<stdio.h>
int main()
{
       int  n,i,a[10000],b[10000];
       printf("Enter size of an array : ");
       scanf("%d",&n);
       printf("Enter elements : \n");
       for(i=0;i<n;i++)
       {
              scanf("%d",&a[i]);
       }
       for(i=0;i<n;i++)
       {
              b[i]=a[i];
       }
       printf("Your answer is : \n");
       for(i=0;i<n;i++)
       {
              printf("%d\n",b[i]);
       }
       return  0;
}