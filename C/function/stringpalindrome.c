
#include<stdio.h>
#include<conio.h>
#include<string.h>
void pal(char str[]);
int main(){
       char str[20];
       printf("Enter a string:");
       scanf("%s", str);
       pal(str);
       return 0;
}
void pal(char str[])
{
       int i, l, temp=0;
       int flag = 0;
       l = strlen(str);
       for(i=0;i < l ;i++)
       {
              if(str[i] != str[l-i-1]){
                     temp = 1;
              break;
       }   
       } 
       if (temp==0) 
              printf("String is a palindrome\n");
       else 
              printf("String is not a palindrome\n");
}


