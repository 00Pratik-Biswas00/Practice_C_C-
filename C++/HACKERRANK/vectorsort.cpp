#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n;              // vector input by user 
    cin>>n; 
    int a;
    vector<int> v;
    
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    for(auto ele:v)
    {
        cout<<ele<<" ";
    } cout<<endl;

    return 0;
}