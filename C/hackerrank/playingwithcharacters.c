#include<stdio.h>
int main(){
       char ch;
       scanf("%c",&ch);
       char s[99];
       scanf("%s", &s);
       char c[99];
       scanf(" %[^\n]%*c", &c); /*The space in the beginning of the format string tells it to ignore the newline character from the previous line (newlines are considered whitespace here)*/
       printf("%c\n",ch);
       printf("%s\n", s);
       printf("%s\n", c);
       return 0;
}