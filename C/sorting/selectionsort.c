#include<stdio.h>
int main()
{
       int n,t,arr[10],key;
       printf("Enter size: ");
       scanf("%d",&n);
       printf("Enter numbers: ");
       for(int i=0;i<n;i++)
       {
              scanf("%d",&arr[i]);
       }
       for(int i=0;i<n-1;i++)
       {
              key=i;
              for(int j=i+1;j<n;j++)
              {
                     if(arr[j]<arr[key])
                     {
                            t=arr[j];
                            arr[j]=arr[key];
                            arr[key]=t;
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
