#include<bits/stdc++.h>
using namespace std;
int divnum(int n, int a, int b)
{
    int ans1= n/a;
    int ans2= n/b;
    int ans3= n/(a*b);
    return  ans1+ans2-ans3;
}

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divnum(n,a,b)<<endl;
    return 0;
}