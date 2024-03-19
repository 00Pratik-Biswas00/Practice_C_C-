#include<bits/stdc++.h>
using namespace std;

class base
{
    public:
    virtual void fun()
    {
        cout<< "mathamota"<<endl;
    }
    void sun()
    {
        cout<< "chagol"<<endl;
    }
};

class derived : public base
{
    public:
    void fun()
    {
        cout<< "pagol"<<endl;
    }
    void sun()
    {
        cout<< "idiot"<<endl;
    }
};

int main()
{
    base  *baseptr;
    derived d;
    baseptr = &d;

    baseptr->fun();
    baseptr->sun();
    return 0;
}