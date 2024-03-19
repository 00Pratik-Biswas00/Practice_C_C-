#include<bits/stdc++.h>
#include<vector>
using namespace std;

//                                    VECTORS

/*
int main()
{

    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(4);

//1. declaration: 

//a. 
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;
//b.
    vector<int>::iterator ab;
    for(ab = v.begin(); ab!=v.end(); ab++)
    {
        cout<<*ab<<" ";
    } cout<<endl;
//c.
    for(auto element:v)
    {
        cout<<element<<" ";
    } cout<<endl;

//2. erasing:

    v.pop_back();
    v.pop_back();
    for(auto element:v)
    {
        cout<<element<<" ";
    } cout<<endl;

//3. definition:

    vector<int> v2(3,5);
    for(auto meow:v2)
    {
        cout<<meow<< " ";
    } cout<<endl;

//4. swapping:

    swap(v,v2);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;
    vector<int>:: iterator pb;
    for(pb=v2.begin();pb!=v2.end();pb++)
    {
        cout<<*pb<< " ";
    } cout<<endl;

//5. sorting

    vector<int> a;
    a.push_back(2);
    a.push_back(5);
    a.push_back(0);
    a.push_back(4);

    sort(a.begin(),a.end());
    for(auto pi:a)
    {
        cout<<pi<<" ";
    }  cout<<endl;

    return 0;
}
*/



//                                    PAIRS

/*
    bool mycom(pair<int,int> p1, pair<int,int> p2)
    {
        return p1.first<p2.first;
    }

    int  main()
    {
        int arr[]= {10,16,7,14,5,3,12,9};
        vector< pair<int,int> > v;
        for(int i=0; i< (sizeof(arr)/sizeof(arr[0])); i++)
        {
            v.push_back(make_pair(arr[i],i));
        }
        sort(v.begin(), v.end(), mycom);

    for(int i=0; i<v.size(); i++)
    {
        arr[v[i].second]=i;
    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<arr[i]<< " ";
    } cout<<endl;
        return 0;
    }
*/


