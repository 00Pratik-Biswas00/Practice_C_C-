#include<bits/stdc++.h>
using namespace std;
int main(){

//1. Check Palindrome-

//    int n;
//    cin>>n;
//    char arr[n+1];
//    cin>>arr;
//    bool check=1;
//    for(int i=0;i<n;i++){
//        if(arr[i]!=arr[n-1-i]){
//            check=0;
//            break;
//        }
//    }
//    if(check==true){
//        cout<<"Palindrome"<<endl;
//    } else{
//        cout<<"Not Palindrome"<<endl;
//    }

//2. Largest Word in a Sentence-******

//    int n;
//    cin>>n;
//    cin.ignore();
//    char arr[n+1];
//    cin.getline(arr,n);
//    cin.ignore();
//    int i=0;
//    int currLen=0 , maxLen=0;
//    int st=0 , maxst=0;
//    while(1)
//    {
//        if(arr[i] == ' ' || arr[i] == '\0')
//        {
//            if(currLen > maxLen)
//            {
//                maxst=st;
//                maxLen=currLen;
//            }
//            st=i+1;
//            currLen=0;
//        }
//        else
//        {
//            currLen++;
//        }
//        if(arr[i]=='\0')
//        {
//            break;
//        }
//        i++;
//    }
//    cout<<maxLen<<endl;
//    for(int i=0;i<maxLen;i++)
//    {
//        cout<<arr[maxst+i];
//    }
//    cout<<endl;
}