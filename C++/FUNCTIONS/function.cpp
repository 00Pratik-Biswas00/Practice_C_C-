#include<bits/stdc++.h>
using namespace std;

//1. Add two numbers and print it--

// int addNum(int a , int b){
//     int sum=a+b;
//     cout<<  "Your answer = "<<endl;
//     return sum;
// }
// 
// int main(){
//     int a,b;
//     cout<<"Enter numbers : ";
//     cin>>a>>b;
//     cout<<addNum(a,b)<<endl;;
// 
// }

//2. Find Prime numbers between two given numbers--{1st in breakcontinue}

// bool isPrime(int n){
//     for(int i=2;i<sqrt(n);i++){
//     if(n%i==0){
//     return false;
//     }
//     }
//     return true;
// }
// 
// int main(){
//     int a,b;
//     cout<<"Enter numbers : ";
//     cin>>a>>b;
//     cout<<"Your answer : "<<endl;
//     for(int i=a;i<=b;i++){
//         if(isPrime(i)){
//             cout<<i<<endl;
//         }
//     }
// }

//3. Write Fibenacci series --

//    void fib(int n){
//      int t1=0;
//      int t2=1;
//      int nextTerm;
//      for(int i=1;i<=n;i++) {
//          cout<<t1<<endl;
//          nextTerm=t1+t2;
//          t1=t2;
//          t2=nextTerm;
//      }
//    }
// 
//    int main() {
//        int n;
//        cin>>n;
// 
//        fib(n);
//    }

//4. Factorial of a number--

// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }
// 
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     cout<<"The answer is :"<<endl;
//     cout<<fact(n)<<endl;
// }

//5. Calculate nCr --

// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }
// int main(){
//     int n,r;
//     cout<<"Enter number of objects : ";
//     cin>>n;
//     cout<<"Enter number of selected objects : ";
//     cin>>r;
//     cout<<"The answer is :";
//     cout<<fact(n)/(fact(n-r)*fact(r))<<endl;
// }

//6. Pascal triangle--

// int fact(int n){
//        int factorial=1;
//        for(int i=2;i<=n;i++){
//            factorial*=i;
//        }
//        return factorial;
//    }
//
//    int main(){
//        int n;
//        cin>>n;
//        
//        for(int i=0;i<n;i++){
//            for(int j=0;j<=i;j++){
//                cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//          }
//           cout<<endl; 
//        }
//        
//    }
