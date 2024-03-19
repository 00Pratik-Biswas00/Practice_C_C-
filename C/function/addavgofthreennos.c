
#include<stdio.h>
int sum(int a, int b, int c);
float avg(float a, float b, float c);
int main()
{
       int a,b,c;
       printf("Enter three numbers: ");
       scanf("%d%d%d",&a,&b,&c);
       printf("Sum of the numbers is: %d\nAverage of the numbers is: %0.2f\n", sum(a,b,c), avg(a,b,c));
       return 0;
}   
int sum(int a, int b, int c)
{
       int s;
       s=a+b+c;
       return s;
}
float avg(float a, float b, float c)
{
       float av;
       av=(a+b+c)/3;
       return av;
}