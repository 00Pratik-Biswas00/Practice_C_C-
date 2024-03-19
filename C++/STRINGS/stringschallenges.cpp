#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{

//1. convert all to lower-case:
/*
    string s =  "PRATIK";

    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]+= 32;
    }
    cout<<s<<endl;
*/

//2. convert all to upper-case:
/*
    string p =  "pratik";

    for(int i=0;i<p.size();i++)
    {
        if(p[i]>='a' && p[i]<='z')
            p[i]-= 32;
    }
    cout<<p<<endl;
*/

//3. convert all to lower-case & uppercase using inbuilt function:
/*
    string s =  "pratik";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;

    string ss =  "PRATIK";
    transform(ss.begin(), ss.end(), ss.begin(), ::tolower);
    cout<<ss<<endl;
*/

//4. find the biggest number from the numeric string:
/*
    string  s="12356489";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
*/

//5. maximum frequency of a number:
/*
    string s = "fsrevcv";
    int fre[26];

    for(int i=0;i<26;i++)
        fre[i]=0;
    for(int i=0;i<s.length();i++)
        fre[s[i]-'a']++;
    
    char ans='a';
    int maxf=0;

    for(int i=0;i<26;i++)
    {
        if(fre[i]>maxf)
        {
            maxf=fre[i];
            ans=i+'a';
        }
    }
    cout<< maxf << " " << ans << endl;
*/




return 0;
}