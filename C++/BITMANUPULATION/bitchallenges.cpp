#include<bits/stdc++.h>
using namespace std;

//1. find power of 2:
/*
bool pow(int n){
    return (n && !(n & (n-1)));
}
int main()
{
    int n;
    cin>>n;
    if(pow(n))
        cout<<"The number is power of 2\n";
    else if(pow(n)==0)
        cout<<"0\n";
    else
        cout<<"The number is not the power of 2\n";
    return 0;
}
*/

//2. count number of 1 in a binary number:
/*
    int count(int n)
    {
        int c=0;
        while(n)
        {
            n = n & (n-1);
            c++;
        }
        return c;
    }
    int main()
    {
        int n;
        cin>>n;
        cout<<count(n)<<endl;
        return 0;
    }
*/

//3.  generate all possible subsets of a set:
/*
    void subset(int arr[], int n)
    {
        for(int i=0; i< (1<<n); i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i & (1<<j))
                {
                    cout<<arr[j]<<" ";
                }
            }
            cout<<"\n";
        }
    }

    int main()
    {
        int arr[]={1,2,3};
        subset(arr,3);
        return 0;
    }
*/

//4.  find an unique number in an array where  other numbers are present twice:
/*
    int find(int arr[] , int n)
    {
        int xorp=0;
        for(int i=0;i<n;i++)
        {
            xorp=xorp^arr[i];
        }
        return xorp;
    }
    int main()
    {
        int arr[]={1,2,3,4,3,2,1};
        cout<<find(arr,7)<<endl;
        return 0;
    }
*/

//5. find two unique numbers in an array where other numbers are present twice:
/*
    int setBit(int n,int pos)
    {
        return (n & (1<<pos));
    }
    void find(int arr[] , int n)
    {
        int xorp=0;
        for(int i=0;i<n;i++)
        {
            xorp=xorp^arr[i];
        }
        int tempxorp=xorp;
        int setbit=0;
        int pos=0;
        while(setbit!=1)
        {
            setbit = xorp & 1;
            pos++;
            xorp =  xorp >> 1;
        }
        int newxorp=0;
        for(int i=0;i<n;i++)
        {
            if(setBit(arr[i],pos-1))
            {
                newxorp= newxorp^arr[i];
            }
            
        }
        cout<<newxorp<<endl;
        cout<<(tempxorp^newxorp)<<endl;
    }
    int main()
    {
        int arr[]={1,2,3,3,2,1,5,6};
        find(arr,8);
        return 0;
    } 
*/

//6. find an unique number in an array where other numbers are present thrice:
/*
    int getBit(int n, int pos)
    {
        return (n && (n & (1<<pos)));
    }
    int setBit(int n, int pos)
    {
        return (n | (1<<pos));
    }
    int result(int arr[], int n)
    {
        int ans=0;
        for(int i=0;i<=64;i++)
        {
            int  s=0;
            for(int j=0;j<n;j++)
            {
                if(getBit(arr[j],i))
                {
                    s++;
                }
            }
            if(s%3!=0)
            {
                ans= setBit(ans,i);
            }
        }
    return ans;
    }
    int main()
    {
        int arr[]={1,2,3,3,2,1,2,3,5,1};
        cout<<result(arr,10)<<endl;
        return 0;
    }
*/