#include<stdio.h>
int main()
{
/*       1. without var */

//      int c,d;
//      printf("Enter numbers : ");
//      scanf("%d %d",&c, &d);
//      c=c+d;
//      d=c-d;
//      c=c-d;
//      printf("%d %d\n", c,d); 
//      return 0;

 /*      2. with var */

       int c,d;
       printf("Enter numbers : ");
       scanf("%d %d",&c, &d);
       int temp =c;
       c=d;
       d=temp;
       printf("%d %d\n", c,d); 
       return 0;            
}