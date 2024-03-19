#include <stdio.h>
int main() {
       char s1[100], s2[100];
       int length, i ,l1, l2;
       printf("Enter length of your first string : ");
       scanf("%d",&l1);
       printf("Enter your first string : ");
       scanf("%s",&s1);
       printf("Enter length of your second string : ");
       scanf("%d",&l2);
       printf("Enter your second string : ");
       scanf("%s",&s2);
       printf("The concatenate string : ");
       length = 0;
       while (s1[length] != '\0') 
       {
              length++;
       }
       for (i = 0; s2[i] != '\0'; i++) {
       s1[length] = s2[i];
       length++;
       }
       s1[length] = '\0';
       puts(s1);
       return 0;
}