#include<stdio.h>
#include<math.h>

//  FUNCTIONS

//1. Print Hello India --

//      void printHello();
//      int  main(){
//             printHello();       
//      return 0;
//      }
//      void printHello(){
//             printf("Hello India\n");
//      }

//2. Sum of two numbers --

//      int sum(int a, int b){
//             int ans=a+b;
//             printf("Sum of %d and %d is : %d\n", a,b,ans);
//             return ans;
//      }
//      int main(){
//             int a,b;
//             printf("Enter first  number - ");
//             scanf("%d", &a);
//             printf("Enter second  number - ");
//             scanf("%d", &b);
//             sum(a,b);
//             return 0;
//      }

//3. Print nth table --

//      void table(int a){
//             for (int i = 1; i <= 10; i++)
//             {
//                    printf("%d\n", a*i);
//             }
//      }
//
//      int main(){
//             int a;
//             printf("Enter number - ");
//             scanf("%d", &a);
//             table(a);
//             return 0;
//      }

//4. far to cel and cel to far--

//      float tempFar(float f)
//      {
//             float  ans= ((5*f)-160)/9;
//             return ans;
//      }
//      float tempCel(float c)
//      {
//             float  Ans= ((9*c)+160)/5;
//             return Ans;
//      }
//      int main()
//      {
//             float f,c;
//             printf("enter far1: ");
//             scanf("%f",&f);
//             printf("enter cel2: ");
//             scanf("%f",&c);
//             printf("cel1  is : %0.2f  and far2 is : %0.2f\n",tempFar(f),tempCel(c));
//             return 0;
//      }

//5. find percentage of marks --

//      int  marksPer(int t , int m, int sc, int sa)
//      {
//             float ans= (m*100)/t;
//             printf("percentage for math is: %.2f\n", ans);
//             float aans= (sc*100)/t;
//             printf("percentage for science is: %.2f\n", aans);
//             float aaans= (sa*100)/t;
//             printf("percentage for sanskrit is: %.2f\n", aaans);
//             float aaaans= (sa+sc+m)/3;
//             printf("total percentage is: %.2f\n", aaaans);
//             return ans, aans, aaans, aaaans;
//      }
//      int main()
//      {
//             int m,t,sc,sa;
//             printf("total marks: ");
//             scanf("%d",&t);
//             printf("maths: ");
//             scanf("%d",&m);
//             printf("sc: ");
//             scanf("%d",&sc);
//             printf("sa: ");
//             scanf("%d",&sa);
//             marksPer(t,m,sc,sa);
//             return 0;
//      }

//6. fibonacci sequence  --

//      void fib(int n)
//      {
//             int t1=0;
//             int t2=1;
//             int nextTerm;
//             for(int i=1;i<=n;i++)
//             {
//                    printf("%d\n", t1);
//                    nextTerm=t1+t2;
//                    t1=t2;
//                    t2=nextTerm;
//             }
//      }
//      int main()
//      {
//             int n;
//             printf("enter number : ");
//             scanf("%d",&n);
//             fib(n);
//             return 0;
//      }

//7. Sum of digits --

//       int Sum(int n)
//       {
//              int sum=0;
//              while (n>0)
//              {
//              int ld=n%10;
//              sum=sum+ld;
//              n/=10;
//              }
//              return sum;
//       }
//       int main()
//       {
//              int n;
//              printf("enter number : ");
//              scanf("%d",&n);
//              printf("sum of the digits : %d   ", Sum(n));
//              return 0;
//       }

//8. square root of n:
//a.
//       float Sum(float n)
//       {
//              return sqrt(n);
//       }
//       int main()
//       {
//              int n;
//              printf("enter number : ");
//              scanf("%d",&n);
//              printf("square of %d is : %f   ", n, Sum(n));
//              return 0;
//       }
//b.
/*       double Sqrt(int n)
       {
              double  eps= 1e-6;
              double st=1,end=n;
              while(end-st>eps)
              {
                     double mid=(st+end)/n;
                     if(mid*mid<n)
                     {
                            st=mid;
                     }
                     else
                     {
                            end=mid;
                     }
              }
              printf("square : %lf   ", st);
              return st;
       }
       int main()
       {
              int n;
              printf("enter number : ");
              scanf("%d",&n);
              Sqrt(n);
              
              return 0;
       }
*/
//9. Hot & cold --

//       void temp(int t)
//       {
//              if(t>=40)
//              {
//                     printf("hot   ");
//              }
//              else if (t>20 && t<=39)
//              {
//                     printf("medium    ");
//              }
//              else
//              {
//                     printf("cold     ");
//              }
//       }
//       int main()
//       {
//              int t;
//              printf("enter temp in celsius: ");
//              scanf("%d",&t);
//              temp(t);
//              return 0;
//       }

//10. power of n:
//a.
//       float Pow(float n, float m)
//       {
//              return pow(n,m);
//       }
//       int main()
//       {
//              int m;
//              float n;
//              printf("enter number : ");
//              scanf("%f",&n);
//              printf("enter power : ");
//              scanf("%d",&m);
//              printf("%dth power of %0.2f is : %0.2f   ", m, n, Pow(n,m));
//              return 0;
//       }
//b.
//       float Pow(float n, float m)
//       {
//              float ans=1;
//              for(int i=m;i>0;i--)
//              {
//                     ans*=n;
//              }
//              return ans;
//       }
//       int main()
//       {
//              int m;
//              float n;
//              printf("enter number : ");
//              scanf("%f",&n);
//              printf("enter power : ");
//              scanf("%d",&m);
//              printf("%dth power of %0.2f is : %0.2f   ", m, n, Pow(n,m));
//              return 0;
//       }



// RECURSIONS

//1. Print hello world 5 times --

//      void  printHW(int n){
//             if (n==0)
//             {
//                    return;                     
//             }
//             printf("Hello World\n");
//             printHW(n-1);
//             
//      }
//      int main(){
//             printHW(5);
//             return 0;
//      }

//2. Sum of n numbers --

//       int sum(int n)
//       {
//              if(n==0)
//              {
//                     return 0;
//              }
//              int sumNm1=sum(n-1);
//              int sumN=sumNm1+n;
//              return sumN;
//       }
//       int main()
//       {
//              int n;
//              printf("enter  number: ");
//              scanf("%d",&n);
//              printf("Sum of first %d numbers is : %d\n",n,sum(n));
//              return 0;
//       }

//3. fact of  n numbers --

//       int fact(int  n)
//       {
//              if(n==0)
//              {
//                     return 1;
//              }
//              int factNm1=fact(n-1);
//              int factN=factNm1*n;
//              return factN;
//       }
//
//       int main()
//       {
//              int n;
//              printf("enter  number: ");
//              scanf("%d",&n);
//              printf("fact of first %d numbers is : %d\n",n,fact(n));
//              return 0;
//       }

//4. nth term of fibonacci sequence  --

//       int fib(int n)
//       {
//              if(n==0)
//              {
//                     return 0;
//              }
//              if(n==1)
//              {
//                     return 1;
//              }
//              int fibNm1=fib(n-1);
//              int fibNm2=fib(n-2);
//              int fibN=fibNm1+fibNm2;
//              //printf("fibonacci series of first %d numbers is : %d\n",n,fibN);
//              return fibN;
//       }
//       int main()
//       {
//              int n;
//              printf("enter number : ");
//              scanf("%d",&n);
//              printf("%d term  of the series is : %d ",n,fib(n));
//              return 0;
//       }

