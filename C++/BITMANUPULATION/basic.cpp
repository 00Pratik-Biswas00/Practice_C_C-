#include<bits/stdc++.h>
using namespace std;
// 1. a. get bit: 
/*
int getbit(int n,int pos)
{
    return (n & (1<<pos)!=0);
}
int main()
{
    cout<<getbit(5,2)<<endl;
    return 0;
}
*/

// 1. b. set bit: 
/*
int setbit(int n,int pos)
{
    return (n | (1<<pos));
}
int main()
{
    cout<<setbit(5,1)<<endl;
    return 0;
}
*/

//2. clear bit:
/*
int clearbit(int n,int pos)
{
    int mark = ~(1<<pos);
    return (n & mark);
}
int main()
{
    cout<<clearbit(5,0)<<endl;
    return 0;
}
*/

//3. update bit:
/*
    int clearbit(int n,int pos, int value)
    {
        int mark = ~(1<<pos);
        n = n & mark;
        return (n | (value<<pos));
    }
    int main()
    {
        cout<<clearbit(5,1,1)<<endl;
        return 0;
    }
*/