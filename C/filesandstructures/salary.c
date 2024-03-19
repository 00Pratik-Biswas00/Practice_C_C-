#include<stdio.h>
struct employees
{
       int salary;
}s[5];

int main()
{
       int sum=0;
       float avg=0;
       printf("Enter the employees salaries:\n");
       for (int i = 0; i < 5; i++)
              scanf("%d",&s[i].salary);
       for (int i = 0; i < 5; i++)
       {
              sum+=s[i].salary;
       }
       avg=sum/5;
       printf("Average of all salaries: %0.2f\n", avg);
       return 0;
}