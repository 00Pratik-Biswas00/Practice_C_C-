#include<iostream>
using namespace std;
int main(){

//1. 0-1 Pattern--

// int n;
// cout<<"Enter your row : ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         if((i+j)%2==0){
//             cout<<"1 ";
//         }
//         else{
//           cout<<"0 ";
//         }
//     }
//     cout<<endl;
// }
    
//2. Butterfly Pattern--***

//  int n;
//  cout<<"Enter row number : ";
//  cin>>n;
//  for(int i=1;i<=n;i++){
//      for(int j=1;j<=i;j++){
//          cout<<"*";
//      }
//      for(int j=1;j<=(2*n-2*i);j++){
//         cout<<" ";
//      }
//      for(int j=1;j<=i;j++){
//          cout<<"*";
//      }
//      cout<<endl;
//  }
//  for(int i=n;i>=1;i--){
//      for(int j=1;j<=i;j++){
//          cout<<"*";
//      }
//      int space=(2*n-2*i);
//      for(int j=1;j<=space;j++){
//         cout<<" ";
//      }
//      for(int j=1;j<=i;j++){
//          cout<<"*";
//      }
//      cout<<endl;
//  }

//3. Butterfly Pattern--***

// int n;
// cout<<"Enter row number : ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         if(j==1||j==i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     for(int j=1;j<=(2*n-2*i);j++){
//        cout<<" ";
//     }
//    for(int j=1;j<=i;j++){
//         if(j==1||j==i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         if(j==1||j==i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     for(int j=1;j<=(2*n-2*i);j++){
//        cout<<" ";
//     }
//    for(int j=1;j<=i;j++){
//         if(j==1||j==i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }

//4.Number's Triangle--

// int n;
// cout<<"Enter row number : ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=(n-i);j++){
//         cout<<" ";
//     }
//     int k=1;
//     for(int j=1;j<=i;j++){
//         cout<<k++<<" ";
//     }
//     cout<<endl;
// }

//5.Number's Triangle(2)--

// int n;
// cout<<"Enter row number : ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=(n-i);j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

//6. Solid Rhombus--

// int n;
// cout<<"Enter row number : ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=(n-i);j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=n;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//7. Hollow Rhombus--

// int n;
// cout<<"Enter row number : ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=(n-i);j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=n;j++){
//         if(j==1 || j==n){
//             cout<<"*";
//         }
//         else if(i==1||i==n){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }

//8. Palindromic--***

// int n;
// cout<<"Enter row number : ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     int j;
//     for( j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     int k=i;
//     for(;j<=n;j++){
//         cout<<k--<<"";
//     }
//     k=2;
//     for(;j<=n+i-1;j++){
//         cout<<k++<<"";
//     }
// 
//     cout<<endl;
// }

//9. Zig-Zag--***

// int n;
// cout<<"Enter your number : ";
// cin>>n;
// for(int i=1;i<=3;i++){
//     for(int j=1;j<=n;j++){
//         if((i+j)%4==0 || i==2 && j%4==0){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }

//10. Diamond Star Pattern---

// int n;
// cout<<"Enter row number : ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=(2*i-1);j++){
//         cout<<"*" ;
//    }
//     cout<<endl;
// }
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=n-i;j++){
//         cout<<"  ";
//     }
//     for(int j=1;j<=(2*i-1);j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//11. Hollow Diamond Star Pattern--********

// int n;
// cout<<"Enter row number : ";
// cin>>n;
// int  space=(2*n-1)/2;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=space;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=2*i-1;j++){
//         if(j==1||j==2*i-1){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
//     space--;
// }
// space=0;
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=space;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=2*i-1;j++){
//         if(j==1||j==2*i-1){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
//     space++;
// }

//12. Hollow diamond innscribed in a rectangle---****

// int n;
// cout<<"Enter row number : ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=0;j<=n-i;j++){
//         cout<<"*";
//     }
//     for(int j=1;j<=(2*i-2);j++){
//         cout<<" " ;
//    } for(int j=n-i;j>=0;j--){
//        cout<<"*";
//    }
//     cout<<endl;
// }
// for(int i=n;i>=1;i--){
//     for(int j=0;j<=n-i;j++){
//         cout<<"*";
//     }
//     for(int j=1;j<=(2*i-2);j++){
//         cout<<" ";
//     }
//      for(int j=n-i;j>=0;j--){
//    cout<<"*";
//    }
//     cout<<endl;
// }

//13. Pascal's Triangle---**************

// int n;
// cout<<"Enter row number : ";
// cin>>n;
// int coef=1;
// for(int i=0;i<n;i++){
//     for(int j=1;j<=(n-i);j++){
//         cout<<" ";
//     }
//     for(int k=0;k<=i;k++){
//         if(k==0||i==0){
//             coef=1;
//         }
//         else{
//             coef= coef*(i-k+1)/k;
//         }
//         cout<<coef<<" ";
//     }
//     cout<<endl;
// }


return 0;
}
