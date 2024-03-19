#include<stdio.h>
int main()
{
       int a[1000],n,i,p,e;
       printf("Enter size of the array : ");
       scanf("%d",&n);
       printf("Enter elements : \n");
       for(i=0;i<n;i++)
       {
              scanf("%d",&a[i]);
       }
       printf("Enter new position : ");
       scanf("%d", &p);
       printf("Enter new element : ");
       scanf("%d", &e);
       if(p>n || p==0)
       {
              printf("The position is not valid for this array\n");
       }
       else
       {
              for(i=n-1;i>=p-1;i--)
              {
                     a[i+1]=a[i];
              }       
              a[p-1]= e;
              printf("final array after inserting the value is: \n");
              for(i=0;i<=n;i++)
              {
                     printf("%d\n",a[i]);
              }
       }
       return 0;
}