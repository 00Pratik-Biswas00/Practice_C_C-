#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//1. Sum of n natural numbers --

//    int sum(int n){
//        int ans =0;
//        for(int  i=0; i<=n; i++){
//        ans+=i;
//        }
//        return ans;
//    }
//
//    int main(){
//        int n;
//        cin>>n;
//        cout<<sum(n)<<endl;
//    }

//2. Check Pythagorean Triplet --

//    bool  check(int x, int y, int z){
//        int a = max(x,max(y,z));
//        int b,c;
//        if(a==x){
//            b=y;
//            c=z;
//        } else if(a==y){
//            b=x;
//            c=z;
//        } else {
//            b=x;
//            c=y;
//        }
//        if(a*a==b*b+c*c){
//            return true;
//        } else {
//            return false;
//        }
//    }
//
//    int main(){
//        int x,y,z;
//        cin>>x>>y>>z;
//        if(check(x,y,z)){
//            cout<<"Pythagorean Triplet"<<endl;
//        } else{
//            cout<<"Not a Pythagorean Triplet"<<endl;
//        }
//    }

// *Binary to Decimal --

//    int binaryToDecimal(int n){
//        int ans=0;
//        int x=1;
//        while (n>0)
//        {
//            int y= n%10;
//            ans += x*y;
//            x *= 2;
//            n /= 10;
//        }
//        return ans;
//    }
//
//    int  main(){
//        int n;
//        cin>>n;
//        cout<<binaryToDecimal(n)<<endl;
//    }


// *Octal to Decimal --

//    int octalToDecimal(int n){
//        int ans=0;
//        int x=1;
//        while (n>0)
//        {
//            int y= n%10;
//            ans += x*y;
//            x *= 8;
//            n /= 10;
//        }
//        return ans;
//    }
//
//    int  main(){
//        int n;
//        cin>>n;
//        cout<<octalToDecimal(n)<<endl;
//    }

// *Hexadecimal to Decimal --

//    int hexadecimalToDecimal( string n){
//        int  ans=0;
//        int x=1;
//        int s=n.size();
//        for(int i=s-1;i>=0;i--){
//            if(n[i]>='0' && n[i]<='9'){
//                ans+= x*(n[i]-'0');
//            } else if(n[i]>='A' && n[i]<='F'){
//                ans+= x*(n[i]-'A'+10);
//            }
//            x*=16;
//        }
//        return ans;
//    }
//
//    int  main(){
//        string n;
//        cin>>n;
//        cout<<hexadecimalToDecimal(n)<<endl;
//    }

// *Decimal to Binary --

//    int decimalToBinary(int n){
//        int ans=0;
//        int x=1;
//        while(x<=n){
//            x*=2;
//        }
//        x/=2;
//        while(x>0){
//            int lastdigit= n/x;
//            n-=lastdigit*x;
//            x/=2;
//            ans= ans*10 + lastdigit;
//        }
//        return ans;
//    }
//
//    int main(){
//        int n;
//        cin>>n;
//        cout<<decimalToBinary(n)<<endl;
//    }

// *Decimal to Octal --

//    int decimalToBinary(int n){
//        int ans=0;
//        int x=1;
//        while(x<=n){
//            x*=8;
//        }
//        x/=8;
//        while(x>0){
//            int lastdigit= n/x;
//            n-=lastdigit*x;
//            x/=8;
//            ans= ans*10 + lastdigit;
//        }
//        return ans;
//    }
//
//    int main(){
//        int n;
//        cin>>n;
//        cout<<decimalToBinary(n)<<endl;
//    }

// *Decimal to Hexadecimal --

//    string decimalToHexadecimal(int n){
//        int x=1;
//        string ans =" ";
//        while(x <= n){
//            x*=16;
//        } x/=16;
//        while(x>0){
//            int lastdigit = n/x;
//            n-=lastdigit*x;
//            x/=16;
//            if(lastdigit<=9){
//                ans = ans + to_string(lastdigit);
//            } else{
//                char c= 'A'+ lastdigit - 10;
//                ans.push_back(c);
//            }
//        }
//        return ans;
//    }
//
//
//    int main(){
//    int n;
//    cin>>n;
//    cout<<decimalToHexadecimal(n)<<endl;
//}