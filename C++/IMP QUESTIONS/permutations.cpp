#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<vector<int>> ans;
//1. give all possible permutations:

//a. normal way:
/*
void per(vector<int> &a, int idx)
{
    if(idx == a.size())
    {
        ans.push_back(a);
        return;
    }

    for(int i=idx; i<a.size(); i++)
    {
        swap(a[i],a[idx]);
        per(a,idx+1);
        swap(a[i],a[idx]);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i:a)
        cin>>i;
    per(a,0);
    for(auto v:ans)
    {
        for(auto i:v)
        {
            cout<<i<<" ";
        } cout<<endl;
    }
    return 0;
}
*/

//b. using stl trick:
/*
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i:a)
        cin>>i;
    sort(a.begin(),a.end());
    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(),a.end()));
    


    for(auto v:ans)
    {
        for(auto i:v)
        {
            cout<<i<<" ";
        } cout<<endl;
    }
    return 0;
}
*/

//2.  give all possible unique permutations: (exclude duplicates)
/*
void help(vector<int> a, vector<vector<int>> &ans, int idx)
{
    if(idx == a.size())
    {
        ans.push_back(a);
        return;
    }

    for(int i=idx; i<a.size(); i++)
    {
        if(i!=idx && a[i]==a[idx])
            continue;
        swap(a[i],a[idx]);
        help(a,ans,idx+1);
        
    }
}

vector<vector<int>> per(vector<int> num)
{
    sort(num.begin(),num.end());
    vector<vector<int>> ans;
    help(num,ans,0);
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i:a)
        cin>>i;
    vector<vector<int>> res = per(a);
    for(auto v: res)
    {
        for(auto i: v)
        {
            cout<<i<<" ";
        } cout<<endl;
    }
    return 0;
}
*/