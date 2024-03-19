#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
       int n;
       scanf("%d", &n);
              for(int i=0;i<2*n-1;i++){
              for(int j=0;j<2*n-1;j++){
                     int a;
                     if(i<j)
                            a=i;
                     else
                            a=j;
                     if(a<(2*n-1)-i)
                            a=a;
                     else
                            a=((2*n-1)-i)-1;
                     if(a<((2*n-1)-j)-1)
                            a=a;
                     else
                            a=((2*n-1)-j)-1;
              printf("%d ",(n-a));
              }
              
              printf("\n");
              }
return 0;
}


