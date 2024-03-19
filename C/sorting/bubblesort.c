#include<stdio.h>
int main()
{
       int n,t,arr[10];
       printf("Enter size: ");
       scanf("%d",&n);
       printf("Enter numbers: ");
       for(int i=0;i<n;i++)
       {
                     scanf("%d",&arr[i]);
       }
       for(int i=0;i<n-1;i++)
       {
              for(int j=0;j<n-i-1;j++)
              {
                     if(arr[j]>arr[j+1])
                     {
                     t=arr[j];
                     arr[j]=arr[j+1];
                     arr[j+1]=t;
                     }
              }
       }
       printf("Sorted array: ");
       for(int i=0;i<n;i++)
       {
              printf("%d ",arr[i]);
       }
       return 0;
}
