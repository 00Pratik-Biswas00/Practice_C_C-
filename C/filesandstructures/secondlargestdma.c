#include<stdio.h>
#include<stdlib.h>
int main()
{
       int n,large,second,*p;
       printf("Enter size: ");
       scanf("%d",&n);
       printf("Enter numbers: ");
       p=(int *)malloc(n*sizeof(int));
       for(int i=0;i<n;i++)
       {
              scanf("%d",(p+i));
       }
       if(p[0]>p[1])
       {
              large=p[0];
              second=p[1];
       }
       else
       {
              large=p[1];
              second=p[0];
       }
       for(int i=2;i<n;i++)
       {
              if(large<p[i])
              {
                     second=large;
                     large=p[i];
              }
              else if(second<p[i])
              {
                     second=p[i];
              }
       }
       printf("Second largest value is: %d\n",second);
       return 0;
}
