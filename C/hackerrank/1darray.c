#include<stdio.h>
#include<stdlib.h>
int main()
{
       int n,arr[1000],sum=0,*p;
       scanf("%d",&n);
       p=  (int *)calloc(n,sizeof(int));
       for(int i=0;i<n;i++)
       {
              scanf("%d",&p[i]);
       }
       for(int i=0;i<n;i++)
       {
              sum+= p[i];
       }
       printf("%d\n",sum);
       return 0;
}