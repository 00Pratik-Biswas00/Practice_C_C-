#include<stdio.h>
int main()
{
       int a,b,c;
       printf("Enter numbers : ");
       scanf("%d %d %d",&a,&b,&c);
       if (a>b && a>c)
       {
              printf("%d is larger\n",a);
       }
       else if(b>a && b>c)
       {
              printf("%d is larger\n",b);
       }
       else if(c>a  && c>b)
       {
              printf("%d is larger\n",c);
       }
       if (a<b && a<c)
       {
              printf("%d is smaller\n",a);
       }
       else if(b<a && b<c)
       {
              printf("%d is smaller\n",b);
       }
       else if(c<a  && c<b)
       {
              printf("%d is smaller\n",c);
       }
}