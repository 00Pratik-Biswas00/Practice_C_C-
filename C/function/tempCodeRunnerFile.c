#include<stdio.h>
void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(float a, float b);
int main()
{
	int a,b,i=1,p=0;
       char n;
	while(i>0)
	{
		printf("\nEnter two numbers:");
		scanf("%d %d",&a,&b);
		printf("Enter your character(+,-,*,/)(Enter any other key to Exit) : ");
		scanf("\n%c",&n);
		switch(n)
		{
			case '+':
				add(a,b);
			break;
			case '-':
				sub(a,b);
			break;
			case '*':
				mul(a,b);
			break;
			case '/':
				div(a,b);
			break;
			default:
				i=p;
			break;
		}
	}
	return 0;
}
void add(int a, int b)
{
       printf("Sum of the two numbers is: %d\n", a+b);
}
void sub(int a, int b)
{
       printf("Sub of the two numbers is: %d\n", a-b);
}
void mul(int a, int b)
{
       printf("Mul of the two numbers is: %d\n", a*b);
}
void div(float a, float b)
{
       float ans=a/b;
       printf("Div of the two numbers is: %.2f\n", ans);
}