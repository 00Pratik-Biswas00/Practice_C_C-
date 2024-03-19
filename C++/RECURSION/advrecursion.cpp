#include<bits/stdc++.h>
using namespace std;

//1. all possible permutations of aa string:
/*
    void posp(string s,  string ans)
    {
        if(s.length()==0)
        {
            cout<<ans<<endl;
            return;
        }

        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            string ros = s.substr(0,i)+s.substr(i+1);
            posp(ros,(ans+ch));
        }
    }
    int main()
    {
        string s="ABC";
        posp(s,"");
        return 0;
    }
*/

//2. count no. of paths from start to end:
/*
    int posp(int s,  int e)
    {
        if(s==e)
        {
            return 1;
        }
        if(s>e)
        {
            return 0;
        }
        int c=0;
        for(int i=1;i<=6;i++)
        {
            c+= posp(s+i,e);
        }
        return c;
    }
    int main()
    {
        cout<<posp(0,3)<<endl;
        return 0;
    }
*/

//3. count no. of paths in a maze:
/*
    int posmaze(int n,  int i, int j)
    {
        if(i==n-1 || j==n-1)
        {
            return 1;
        }
        if(i>=n || j>=n)
        {
            return 0;
        }
        
        return posmaze(n,i+1,j) + posmaze(n,i,j+1);
    }
    int main()
    {
        cout<<posmaze(3,0,0)<<endl;
        return 0;
    }
*/

//4. tilling problem:
/*
    int tilling(int n)
    {
        if(n==0 || n==1)
        {
            return n;
        }
        return tilling(n-1)+tilling(n-2);
    }
    int main()
    {
        cout<<tilling(4)<<endl;
        return 0;
    }
*/

//5. friends pairing:
/*
    int fp(int n)
    {
        if(n==0 || n==1 || n==2)
        {
            return n;
        }
        return fp(n-1)+fp(n-2)*(n-1);
    }
    int main()
    {
        cout<<fp(4)<<endl;
        return 0;
    }
*/

//6. 0-1 knapsack problem:
/*
    int knapsack(int val[], int wt[], int n, int w)
    {
        if(n==0||w==0)
        {
            return 0;
        }
        if(wt[n-1]>w)
        {
            return  knapsack(val,wt,n-1,w);
        }
        return max(knapsack(val,wt,n-1,w-wt[n-1])+val[n-1], knapsack(val,wt,n-1,w));
    }
    int main()
    {
        int val[]={100,50,150};
        int wt[]={10,20,30};
        int w=50;
        cout<<knapsack(val,wt,3,w)<<endl;
        return 0;
    }
*/



