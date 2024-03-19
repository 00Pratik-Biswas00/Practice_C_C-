#include<stdio.h>
#include<math.h>

//int main()
//{


/*1. 
       int age=22;
       int *ptr=&age;
       int _age=*ptr;
//address
       printf("%p\n",  &age);
       printf("%u\n",  &age);
       printf("%u\n",  ptr);
       printf("%u\n",  &ptr);
//value
       printf("%d\n",  age);
       printf("%d\n",  *ptr);
       printf("%d\n",  *(&age));
*/
/*2.
       int x;
       int *ptr;
       ptr=&x;
       *ptr=0;
       printf("%d\n", x);
       printf("%d\n",*ptr);
       *ptr+=5;
       printf("%d\n", x);
       printf("%d\n",*ptr);
       (*ptr)++;
       printf("%d\n", x);
       printf("%d\n",*ptr);
*/


//       pointer to pointer

//       float x=100.00;
//       float *ptr=&x;
//       float **pptr=&ptr;
//       printf("%f\n",**pptr);

//       return 0;
//}

//3.
//       void square(int n)
//       {
//              n=n*n;
//              printf("square : %d\n",n);
//       }
//       void _square(int *n)
//       {
//              *n=*n * *n;
//              printf("square : %d\n",*n);
//       }
//
//       int main()
//       {
//              int number = 4;
//              square(number);
//              printf("number: %d\n",number);
//              _square(&number);
//              printf("number: %d\n",number);
//              return 0;
//       }

//4. swap a&b :

//       void swap(int *a, int *b);
//
//       int main()
//       {
//              int x=3,y=4;
//              swap(&x,&y);
//              printf("x= %d and y= %d \n", x, y);
//       }
//       void swap(int *a, int *b)
//       {
//              int t=*a;
//              *a=*b;
//              *b=t;
//       }

//5. Find sum,product,average --

//       void doWork(int  a, int b, int *sum, int *prod, int *avg);
//       int main()
//       {
//              int a=8,b=4, *sum,*prod,*avg;
//              doWork(a,b, &sum ,&prod, &avg);
//              printf("sum %d, product %d, average %d  \n", sum ,prod ,avg );
//       }
//       void doWork(int  a, int b, int *sum, int *prod, int *avg)
//       {
//              *sum= a+b;
//              *prod = a*b; 
//              *avg= (a+b)/2;
//       }
/*6.
       int main()
       {
              int agge=22;
              int *ptr=&agge;
              printf("%u   ",ptr);
              ptr++;
              printf("%u   ",ptr);
              ptr--;
              printf("%u   ",ptr);
       }
*/
/*
       int main()
       {
              int age=22;
              int _age=18;
              int *ptr=&age;
              int *_ptr=&_age;
              printf("difference : %u\n", ptr-_ptr);
              _ptr=&age;
              printf("average : %u\n", ptr==_ptr);
       return 0;
       }
*/
