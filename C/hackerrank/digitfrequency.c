#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
       int i, a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0;
       char words[1000];
       gets(words);
       for (i = 0; i < strlen(words); i++){
              if (words[i] == '0')
                     a++;
              else if (words[i] == '1')
                     b++;
              else if (words[i] == '2')
                     c++;
              else if (words[i] == '3')
                     d++;
              else if (words[i] == '4')
                     e++;
              else if (words[i] == '5')
                     f++;
              else if (words[i] == '6')
                     g++;
              else if (words[i] == '7')
                     h++;
              else if (words[i] == '8')
                     j++;
              else if (words[i] == '9')
                     k++;
       }
       printf("%d %d %d %d %d %d %d %d %d %d\n", a,b,c,d,e,f,g,h,j,k);
return 0;
}