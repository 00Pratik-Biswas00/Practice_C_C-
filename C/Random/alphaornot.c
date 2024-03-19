#include<stdio.h>
int main()
{
       char c;
       printf("Enter alphabtet : ");
       scanf("%c",&c);
       if(c<='z' && c>='a'|| c>='A' && c<='Z')
       {
              printf("Alpha\n");
       }
       else if(c>='0' && c<='9'  )
       {
              printf("number\n");
       }
       else{
              printf("special char\n");
       }
       return 0;
}