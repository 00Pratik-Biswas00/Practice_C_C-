#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

//                   Normal


//1. max till i:
/*
       int n; 
       int mx = -199999;                    
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
              cin>>arr[i];
       }
       for(int i=0;i<n;i++){
              mx = max(mx , arr[i]);
              cout<<mx<<" ";
       }
*/
//2. sum of arrays:
/*
       int n; 
       int s = 0;                    
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
              cin>>arr[i];
       }
       for(int i=0;i<n;i++){
              s = 0;
              for(int j=i;j<n;j++){
              s+=arr[j];
              cout<< s << endl;
       }
       }
*/
//3. max sub-array length which is airthmetic array:
/*
       int n;                    
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
              cin>>arr[i];
       }
       int ans = 2; 
       int pd = arr[1] - arr[0];
       int j = 2;
       int curr = 2;
       while(j < n)
       {
              if(pd == arr[j] - arr[j-1])
              {
                     curr++;
              }
              else
              {
                     pd = arr[j] - arr[j-1];
                     curr = 2;
              }
              ans = max(ans , curr);
              j++;
       }
       cout << ans << endl;
*/
//4. record breaking day:
/*
       int n;                  
       cin>>n;
       int arr[n+1];
       arr[n] = -1;
       for(int i=0;i<n;i++)
       {
              cin>>arr[i];
       }
       if(n == 1)
       {
              cout<<"1"<<endl;
              return 0;
       }
       int ans =0;
       int mx = -1; 
       for(int i=0;i<n;i++)
       {
              if(arr[i]>mx && arr[i] >arr[i+1]  )
              {
                     ans++;
              }
              mx = max(mx,arr[i]);
       }
       cout<< ans <<endl;
*/

//                   Advanced

//5. repeating elements:(not worked)
/* 
       int n;                    
       cin>>n;
       int arr[n];

       for(int i=0;i<n;i++){
              cin>>arr[i];
       }


       const int N = 1e6+2;
       int idx[N];
       for(int i=0;i<N;i++){
              idx[i] =-1;
       }

       int minidx = INT_MAX;

       for(int i=0;i<n;i++)
       {
              if( idx[arr[i]] != -1)
              {
                     minidx =  min(minidx, idx[arr[i]]);
              }
              else
              {
                     idx[arr[i]] = i;
              }
       }
       if(minidx == INT_MAX)
       {
              cout<< "-1" <<endl;
       }
       else
       {
              cout<< minidx + 1 <<endl;
       }
*/
//6. find a continuous sub-array adds to a given number s:
/*
       int n,s;                    
       cin>>n>>s;
       int arr[n];

       for(int i=0;i<n;i++){
              cin>>arr[i];
       }

       int i=0, j=0, st=-1, en=-1, sum=0;

       while(j<n && sum+arr[j] <= s)
       {
              sum+=arr[j];
              j++;
       }
       if(sum == s)
       {
              cout<< i+1 <<" "<< j << endl;
              return 0;
       }
       while(j<n)
       {
              sum+=arr[j];
              while(sum >s)
              {
                     sum-=arr[i];
                     i++;
              }
              if(sum == s)
              {
                     st=i+1;
                     en=j+1;
                     break;
              }
              j++;
       }
       cout<< st << " " << en << endl;
*/
//7. Smallest positive missing number: 
/*
       int n;                    
       cin>>n;
       int arr[n];

       for(int i=0;i<n;i++){
              cin>>arr[i];
       }

       const int a = 1e6+2;
       bool check[a];

       for(int i=0;i<a;i++){
              check[i]= false;
       }

       for(int i=0;i<n;i++){
              if(arr[i]>=0)
              {
                     check[i]=true;
              }
       }
       int ans = -1;

       for(int i=1;i<a;i++){
              if(check[i]==false)
              {
                     ans = i;
                     break;
              }
       }
       cout<< ans << endl;
*/

return 0;
}