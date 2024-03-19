#include<stdio.h>
#include<math.h>

/*    int main(){  (1-23) */



// 1. Area of a square--

//    float side;
//    printf("Enter your side: ");
//    scanf("%f", &side);
//    printf("Area of the square is :%f\n", (side*side));

// 2. Area of a circle--

//    float side;
//    float pi=3.14;
//    printf("Enter your side: ");
//    scanf("%f", &side);
//    printf("Area of the circle is :%f\n", (pi*side*side));  

//3. Double to  integer--

//    int a= (int)1.99999;
//    printf("%d\n",a);

//4.  Basic precedence based Calculations.

//5. Write a program to check if a number is divisible by 2 or not --

//    int a;
//    printf("Enter your number : ");
//    scanf("%d",&a);
//    if (a%2==0)
//    {
//        printf("Divisible by 2\n");
//    } else{
//        printf("Not divisible by 2\n");
//    }
    
//6. Write a program to check if a number is odd or even --

    /* Same as previous code if a%2==0 then even else odd*/

//7. Basic validity && Power calculator--

//    int a, b;
//    printf("Enter your number : ");
//    scanf("%d%d", &a, &b);
//    int ans= pow(a,b);
//    printf("%d to the power %d is : %d\n", a, b, ans);

//8. Basics

//9. Write a program to check if a student is passed or not -- pass>30 & fail<=30

//    int num;
//    printf("Enter your number : ");
//    scanf("%d", &num);
//    num>30 ? printf("Pass\n"):printf("Fail\n");

//10.  Write a program to gives grade to a student--<30=c;30<=&70=b;70<=&90=a;>=90<=100=a+

//    int num;
//    printf("Enter your number : ");
//    scanf("%d", &num);
//    if(num<30)
//    {
//        printf("C\n");
//    } else if (num >=30 && num<70)
//    {
//        printf("B\n");
//    } else if (num  >= 70 && num <90)
//    {
//        printf("A\n");
//    } else if (num>=90 && num<=100)
//    {
//        printf("A+\n");
//    } else{
//        printf("invalid number\n");
//    }
    
//11.  Basics

//12. Write a program to check if a character is upper case or not ---

//    char c;
//    printf("Enter your character : ");
//    scanf("%c", &c);
//    if(c>='A' && c<='Z'){
//        printf("Upper Case Letter\n");
//    } else if(c>='a' && c<='z'){
//        printf("Lower Case Letter\n");
//    } else{
//    printf("Not english letter");
//    }

//13. Print a number from 0 to 10 --(You can do the same with float and char)

//    for(int i=0;i<=10;i++){
//        printf("%d\n",i);
//    }

//14. Print a number from 0 to n where n is given--

//    int n;
//    printf("Enter your number : ");
//    scanf("%d",&n);
//    int i=0;
//    while(i<=n){
//        printf("%d\n",i);
//        i++;
//    }

//15. Print the sum of n natural numbers and also print its reverse--

////    int n;
////    printf("Enter your number : ");
////    scanf("%d",&n);
//      //   int sum = (((n*n)+n))/2;
//      //   printf("Sum of first %d natural numbers : %d\n", n,sum);
//      // (OR) -
////    int sum=0;
//    for(int i=1;i<=n;i++){
//        sum+=i;
//    }
//    printf("Sum of first %d natural numbers : %d\n", n,sum);
//    for(int i=n;i>=1;i--){
//        printf("%d\n",i);
//    }

// Merging the previous code in one for loop

//   for(int i=1, j=n;i<=n && j>=1;i++,j--){
//       sum+=i;
//       printf("%d\n",i);
//   }
//   printf("Sum of first %d natural numbers : %d\n", n,sum);

//16. Print the table of a number input by the user--

//   int n;
//   printf("Enter your number : ");
//   scanf("%d",&n);
//   for(int i=1;i<=10;i++){
//       printf("%d * %d  : %d\n",n,i,(n*i));
//       
//   }

//17. Keep taking numbers as input until users enter an odd number --

//    int n;
//    do
//    {
//    printf("Enter your number : ");
//    scanf("%d",&n);
//    printf("%d\n",n);
//    if(n%2 != 0){
//        break;
//    }
//    } while (1);
//    printf("End\n");

//18. Keep taking numbers as input until users enters a number which is multiple of 7 --

//   int n;
//   do
//   {
//   printf("Enter your number : ");
//   scanf("%d",&n);
//   printf("%d\n",n);
//   if(n%7 == 0){
//       break;
//   }
//   } while (1);
//   printf("End\n");

//19. Print all numbers from 1 to 10 except 6 --


//    for (int i = 1; i <= 10; i++)
//        {
//                if(i==6){
//                        continue;
//                }
//                printf("%d\n", i);
//        }
//        printf("End\n");

//20. Print all odd numbers from 5 to 50 --

//    for (int i = 5; i <= 50; i++)
//        {
//                if(i%2==0){
//                        continue;
//                }
//                printf("%d\n", i);
//        }

//21. Print Factorial of a number n --

//    int n;
//    printf("enter number : ");
//    scanf("%d", &n);
//    int fact =1;
//    for(int i=1;i<=n;i++){
//        fact*=i;
//    }
//    printf("%d\n", fact);

//22. Print the reverse of the table for a number --

//    int n;
//    printf("enter number : ");
//    scanf("%d", &n);
//    for(int i=0;i<=10;i++){
//        printf("%d", i);
// 
//    }

//23.calculate the sum of all numbers from 5 to 50--

//   int sum=0;
//   for (int i=5; i <=50; i++)
//   {
//       sum+= i;
//       
//   }
//   printf("%d\n",sum);



/*    return 0;
    } */


//24. Write two functions to print hello and goodbye --

//   void printHello(){
//       printf("hello\n");
//   }
//   void goodBye(){
//       printf("good bye\n");
//   }
//       int main(){
//       printHello();
//       goodBye();
//   }

//25. Write a function to print namaste for indian user and bonjour for french users --

//    char printWelcome( char ch){
//        switch (ch)
//        {
//        case 'i' : printf("Namaste\n");
//            break;
//        case 'f' : printf("Bonjour\n");
//            break;
//        }
//    }
//    int main(){
//        char ch;
//        printf("Enter your nation : ");
//        scanf("%c",&ch);
//        printWelcome(ch);
//    }

//* OR *//

//   void pNamaste();
//   void pBonjour();
//   int main(){
//       printf("enter your  nation : ");
//       char ch;
//       scanf("%c", &ch);
//       if(ch == 'i'){
//           pNamaste();
//       } else if( ch == 'f'){
//           pBonjour();
//       }
//       return 0;
//   }
//       void pNamaste(){
//       printf("Namaste\n");
//   }
//   void pBonjour(){
//       printf("Bonjour\n");
//   }

//26. Use library function to calculate the square of a number --

//   int power(int a, int b){
//       int ans= pow(a,b);
//       printf("ans is %d \n", ans);
//       return  ans;
//   }
//   int main(){
//       int a,b;
//       printf("enter first no. : ");
//       scanf("%d",&a);
//       printf("enter second no. : ");
//       scanf("%d",&b);
//       power(a,b);
//       return 0;
//   }
/* OR */

//    int main(){
//        int n,b;
//        printf("Enter 1st: ");
//        scanf("%d", &n);
//        printf("Enter pow: ");
//        scanf("%d", &b);
//        printf("%lf\n", pow(n,b));
//    }

//27. Write a  function to calculate area of a square, rectangle, circle --

//    float area(float rad){
//        return  (3.14 * rad * rad);
//    }
//    float areaSquare(float ra){
//        return  (ra * ra);
//    }
//    float areaRectangle(float r, float b){
//        return  (r * b);
//    }
//    int main(){
//    float rad;
//    printf("Enter radius for circle: ");
//    scanf("%f", &rad);
//    printf("Area of a circle is : %f\n", area(rad));
//
//    float ra;
//    printf("Enter radius square: ");
//    scanf("%f", &ra);
//    printf("Area of a square is : %f\n", areaSquare(ra));
//
//    float r,b;
//    printf("Enter radius and breath for rectangle: ");
//    scanf("%f", &r);
//    scanf("%f", &b);
//    printf("Area of a rectangle is : %f\n", areaRectangle(r,b));
//    return 0;
//    }

//28. Sum of n natural numbers using recursion --

//   int sum(int n){
//       if(n==1){
//           return 1;
//       }
//       int sumNm1=sum(n-1);
//       int sum = sumNm1 + n;
//   }
//   int main(){
//       printf("%d\n",sum(5));
//       return 0;
//   }
    
//29. fact of n  using recursion --

    int fact(int n){
        if(n==0){
            return 1;
        }
        int factNm1= fact(n-1);
        int fact = factNm1 * n;
    }
    int main(){
        printf("%d\n", fact(3));
        return 0;
    }

    











