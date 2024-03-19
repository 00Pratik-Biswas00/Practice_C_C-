#include<stdio.h>
#include<string.h>
//1. store  house no, block,  city, state of 5 people:
/*
struct info
{
       int houseno;
       int block;
       char city[100];
       char state[100];
};

void pratik(struct info i)
{
       printf("%d%d%s%s", i.houseno, i.block, i.city, i.state);
}

int main()
{
       struct info i[5];
       
       printf("enter house no, block,  city, state:");
       scanf("%d%d%s%s", &i[0].houseno, &i[0].block, &i[0].city, i[0].state);
       printf("enter house no, block,  city, state:");
       scanf("%d%d%s%s", &i[1].houseno, &i[1].block, &i[1].city, i[1].state);
       printf("enter house no, block,  city, state:");
       scanf("%d%d%s%s", &i[2].houseno, &i[2].block, &i[2].city, i[2].state);
       printf("enter house no, block,  city, state:");
       scanf("%d%d%s%s", &i[3].houseno, &i[3].block, &i[3].city, i[3].state);
       printf("enter house no, block,  city, state:");
       scanf("%d%d%s%s", &i[4].houseno, &i[4].block, &i[4].city, i[4].state);
       
       
       //for(int j=0;j<2;j++)
       //{
       //       printf("enter house no, block,  city, state:");
       //       scanf("%d%d%s%s", &i[j].houseno, &i[j].block, &i[j].city,&i[j].state);
       //}
       //for(int j=0;j<2;j++)
       //{
       //       printf("%d\n%d\n%s\n%s\n", i[j].houseno, i[j].block, i[j].city, i[j].state);
       //}
       pratik(i[0]);
       pratik(i[1]);
       pratik(i[2]);
       pratik(i[3]);
       pratik(i[4]);
}*/
//2. sum of two vectors:
/*
struct vector
{
       int x;
       int y;
};
void vectorSum(struct vector v1, struct vector v2, struct vector sum)
{
       sum.x = v1.x + v2.x;
       sum.y = v1.y + v2.y;
       printf("Sum of x is: %d\n", sum.x);
       printf("Sum of y is: %d\n", sum.y);
}
int main()
{
       struct vector v1={5,10};
       struct vector v2={3,7};
       struct vector sum={0};
       vectorSum(v1,v2,sum);
       return 0;
}*/
//3. store complex number:
/*
struct complex
{
       int real,img;
};
int main()
{
       struct complex n1={5,8};
       struct complex *ptr=&n1;
       printf("Real : %d\n", ptr->real);
       printf("img : %d\n", ptr->img);
       return 0;
}*/
//4. make a bank account and store data:(Create an alias)
/*
typedef struct bankaccount
{
       int accno;
       char name[100];
       
}acc;
int main()
{
       acc acc1={1035, "Pratik"};
       printf("name is: %s\n", acc1.name);
       printf("account no is: %d\n", acc1.accno);
       return 0;
}*/


