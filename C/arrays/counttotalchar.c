#include<stdio.h>
int main()
{
       char  str[10000];
       int c=0;
       printf("Enter elements: ");
       gets(str);
       for(int i=0;;i++)
       {
              if(str[i]=='\0')
              {
                     break;
              }
                     
              else
              {
                     c++;   
              }
                     
       }
       printf("Total character : %d\n",c);
       return  0;
}