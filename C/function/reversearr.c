#include<stdio.h>
void rev(int arr[], int n);
int main()
{
       int n=5;
       int arr[5]={1,2,3,4,5};
       rev(arr,n);
       return 0;
}
void rev(int arr[], int n)
{
       int temp;
       int i;
       for(i=0;i<n/2;i++)
       {
              temp=arr[i];
              arr[i]=arr[n-i-1];
              arr[n-i-1]=temp;
       }
       for(int i=0;i<n;i++)
       {
              printf("%d ",arr[i]);
       }
}