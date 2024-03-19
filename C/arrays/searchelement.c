#include<stdio.h>
int main()
{
       int  n,i,a[10000],p,flag=0;
       printf("Enter size of an array : ");
       scanf("%d",&n);
       printf("Enter elements : \n");
       for(i=0;i<n;i++)
       {
              scanf("%d",&a[i]);
       }
       printf("Enter the  number you want  to search : ");
       scanf("%d",&p);
       for(i=0;i<n;i++)
       {
              if(a[i]==p)
              {
                     flag=1;
                     break;  
              }                                      
       }
       if(flag==1)
              printf("Index of the element is: %d and position is : %d\n",i,i+1);
       else
              printf("Element not found\n");        
       return  0;
}