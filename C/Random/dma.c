# include<stdio.h>
# include<stdlib.h>
//1.reallocation:
/*
int main()
{
       int *p,n;
       p = (int *)calloc(5, sizeof(int));
       printf("enter numbers: ");
       for(int i=0;i<5;i++)
       {
              scanf("%d",(p+i));
       }
       p = realloc(p,8);
       printf("enter numbers: ");
       for(int i=0;i<8;i++)
       {
              scanf("%d",&p[i]);
       }
       for(int i=0;i<8;i++)
       {
              printf("numbers %d is : %d\n",i,p[i]);
       }
       return 0;
}*/
//2. take an array of  size 5 and print it:
/*
int main()
{
       int *p,n;
       p = (int *)calloc(5, sizeof(int));
       printf("enter numbers: ");
       for(int i=0;i<5;i++)
       {
              scanf("%d",(p+i));
       }
       for(int i=0;i<5;i++)
       {
              printf("numbers %d is : %d\n",i,p[i]);
       }
       return 0;
}*/
//3. find odd and reallocate it with even numbers:
/*
int main()
{
       int *p,n;
       p = (int *)calloc(5, sizeof(int));
       printf("enter number and see the odd numbers upto it: ");
       scanf("%d",&n);
       for(int i=0;i<n;i++)
       {
              if(i%2 != 0)
                     printf("%d\n", i);
       }
       p = realloc(p,n);
       
       printf("enter number and see the even numbers upto it: ");
       scanf("%d",&n);
       for(int i=0;i<n;i++)
       {
              if(i%2 == 0)
                     printf("%d\n", i);
       }
       return 0;
}*/