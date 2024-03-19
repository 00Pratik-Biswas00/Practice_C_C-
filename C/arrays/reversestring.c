/*#include<stdio.h>
int main()
{
       int i,l;
       char c[100];
       printf("Enter length of your string : ");
       scanf("%d",&l);
       printf("Enter your string :");
       scanf("%s",&c);
       printf("Reverse of the string :");
       for(i=l-1;i>=0;i--)
       {
              printf("%c",c[i]);
       }
       printf("\n");
       return  0;
}*/
#include<stdio.h>
int main()
{
       int i;
       char c[]="obaid";
       for(i=4;i>=0;i--)
       {
              printf("%c",c[i]);
       }
       printf("\n");
       return  0;
}
