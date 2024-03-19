#include<stdio.h>
#include<math.h>
void arms(int a);
int main()
{
       int a;
       printf("Enter number: ");
       scanf("%d",&a);
       arms(a);
       return 0;
}
void arms(int a)
{
       int s=0,b,d,c=0,e;
       b=a;
       e=a;
       while(a>0)
       {
              
              c++;
              a/=10;
       }
       while(e>0)
       {
              d=e%10;
              s+=pow(d,c);
              e/=10;
       }

       if(b==s)
              printf("Armstrong Number\n");
       else
              printf("Not an Armstrong Number\n");
}