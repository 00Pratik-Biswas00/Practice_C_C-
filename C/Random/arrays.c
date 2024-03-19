#include<stdio.h>
#include<math.h>
//int main()
//{
//1. enter price and of 3 element  and find out there final  cost with gst----
/*
       float p[3];
       printf("enter prices: ");
       scanf("%f",&p[0]);
       scanf("%f",&p[1]);
       scanf("%f",&p[2]);
       printf("%.2f\n", p[0]+(p[0]*0.18));
       printf("%.2f\n", p[1]+(p[1]*0.18));
       printf("%.2f\n", p[2]+(p[2]*0.18));
*/
//2. print stored elements --
/*
       int a[5];
       int *ptr = &a[0];
       for(int i=0;i<5;i++)
       {
              printf("%d index: ",i);
              scanf("%d",&a[i]);
       }
       for(int i=0;i<5;i++)
       {
              printf("value: %d ",a[i]);
       }
*/
//       return 0;
//}

//3. find odd numbers ---
/*
       int  findOdd(int arr[], int n);
       int main()
       {
              int arr[50],n;
              printf("size: ");
              scanf("%d",&n);
              printf("elements: ");
              for (int i = 0; i < n; i++)
              {
                     scanf("%d",&arr[i]);
              }
              
              printf("%d \t",findOdd(arr,6));
              return 0;
       }
       int  findOdd(int arr[], int n)
       {
              int  count =0;
              for(int i=0;i<n;i++)
              {
                     if(arr[i]%2!=0)
                     {
                            count++;
                     }
              }
              return count;
       }
*/
//4.Reverse an array--
/*
       void  revNum(int arr[], int n);
       void printarr(int arr[], int n);
       int main()
       {
              int arr[50],n;
              printf("size: ");
              scanf("%d",&n);
              printf("elements: ");
              for (int i = 0; i < n; i++)
              {
                     scanf("%d",&arr[i]);
              }
              revNum(arr,n);
              printarr(arr,n);
              return 0;
       }
       void printarr(int arr[], int n)
       {
              for (int i = 0; i < n; i++)
              {
                     printf("%d\t",arr[i]);
              }    
              printf("\n");
       }
       void  revNum(int arr[], int n)
       {
              for(int i=0;i<(n/2);i++)
              {
                     int fv=arr[i];
                     int sv=arr[n-i-1];
                     arr[i]=sv;
                     arr[n+i-1]=fv;
              }
       }
*/
//5. store n fibonacci numbers --
/*
       int main ()
       {
              int n;
              printf("enter numbers: ");
              scanf("%d", &n);
              int fib[n];
              fib[0]=0;
              fib[1]=1;
              printf("%d\t",fib[0]);
              printf("%d\t",fib[1]);
              for(int i=2;i<n;i++)
              {
                     fib[i]=fib[i-1]+fib[i-2];
                     printf("%d\t",fib[i]);
              }
              return 0;
       }
*/
//6. table of 2&3 --

       void printTable(int arr[][10], int n, int m, int number);
       int main()
       {
              int tab[2][10];
              printTable(tab,0,10,2);
              printTable(tab,1,10,3);
              for(int i=0;i<10;i++)
              {
                     printf("%d\t",tab[0][i]);
              }
              printf("\n");
              for(int i=0;i<10;i++)
              {
                     printf("%d\t",tab[1][i]);
              }
       }
       void printTable(int arr[][10], int n, int m, int number)
       {
              for(int i=0;i<m;i++)
              {
                     arr[n][i]=number*(i+1);
              }
       }



