#include<stdio.h>
int main()
{
       int n,i,a[10000],sum=0;
       float avg;
       printf("Enter the size of the array : ");
       scanf("%d",&n);
       printf("enter elements : \n");
       for(i=0;i<n;i++)
       {
              scanf("\n%d",&a[i]);
       }
       for(i=0;i<n;i++)
       {
              sum+=a[i];
       }
       avg=sum/n;
       printf("Sum of the numbers is : %d and average of the numbers is : %0.2f\n",sum,avg);
       return 0;
}