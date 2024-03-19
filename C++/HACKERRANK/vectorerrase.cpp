#include<bits/stdc++.h>
#include<vector>
using namespace std;

int  main()
{
    int n;
    cin>>n;
    int a;
    vector<int> v;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    int p;
    if(cin>>p)
    {
        v.erase(v.begin()+(p-1));
    }
    
    int q,r;
    if(cin>>q && cin>>r)
    {
        v.erase(v.begin()+(q-1), v.erase(v.begin()+(r-2)));
    }

    cout<<v.size()<<endl;

    for(auto element:v)
    {
        cout<<element<<" ";
    }

    return 0;
}