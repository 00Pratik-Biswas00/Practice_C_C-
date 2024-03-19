#include<stdio.h>
#include<math.h>
int main(){
       int a,b;
       float c,d;
       scanf("%d %d", &a,&b);
       scanf("%f %f", &c,&d);
       int sum  = (a+b);
       int sub = (a-b);
       float jog  = (c+d);
       float biyog = (c-d);
       printf("%d %d\n", sum,sub);
       printf("%0.1f %0.1f\n", jog,biyog); //0.1f means it takes only one number after point.
       return 0;
}