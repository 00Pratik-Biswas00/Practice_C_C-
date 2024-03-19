#include<bits/stdc++.h>
using namespace std;

//1. sum till n:
/*
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return  n+sum(n-1);

}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}
*/
//2. calculate  n raised to the power p:
/*
int sum(int n, int p)
{
    if(p==0)
        return 1;
    else
        return  n*pow(n,p-1);

}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<sum(n,p)<<endl;
    return 0;
}
*/
//3. fact till n:
/*
    int fact(int n)
    {
        if(n==0)
            return 1;
        else
            return  n*fact(n-1);
    
    }
    int main()
    {
        int n;
        cin>>n;
        cout<<fact(n)<<endl;
        return 0;
    }
*/
//4. print nth  fibonacci number:
/*
    int fib(int n)
    {
        if(n==0)
            return 0;
        else if(n==1)
            return  1;
        else
            return  fib(n-1)+fib(n-2);
    
    }
    int main()
    {
        int n;
        cin>>n;
        for(int i=0; i<n;  i++)
        {
            cout<<fib(i)<<" ";
        }
        
        return 0;
    }
*/










