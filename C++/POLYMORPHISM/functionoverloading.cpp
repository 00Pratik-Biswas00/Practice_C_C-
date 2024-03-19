#include<bits/stdc++.h>
using namespace std;

class function_overloading
{
    public:
    void fun()
    {
        cout<< "mathamota"<<endl;
    }
    void fun(int x)
    {
        cout<< "chagol"<<endl;
    }
    void fun(double  x)
    {
        cout<< "bador"<<endl;
    }
};



int main()
{
    function_overloading a;
    a.fun();
    a.fun(1);
    a.fun(3.2);


    return 0;
}