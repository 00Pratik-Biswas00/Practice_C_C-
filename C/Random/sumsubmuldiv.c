#include<stdio.h>
int main()
{
       int a,b;
       printf("Enter numbers : ");
       scanf("%d %d",&a,&b);
       printf("Sum of %d and %d is : %d\n", a,b,(a+b));
       printf("Sub of %d and %d is : %d\n", a,b,(a-b));
       printf("Mul of %d and %d is : %d\n", a,b,(a*b));
       printf("Div of %d and %d is : %d\n", a,b,(a/b));
       return 0;
}