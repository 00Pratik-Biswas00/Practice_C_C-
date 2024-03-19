#include<stdio.h>
struct student
{
       char name[30];
       int id,age;
};
struct student p;
int main()
{
       printf("Enter your name, id and age:\n");
       scanf("%s%d%d", &p.name, &p.id, &p.age );
       printf("Your name: %s\nYour id: %d\nYour age: %d\n", p.name, p.id, p.age );
       return 0;
}