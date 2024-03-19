#include<bits/stdc++.h>
using namespace std;

class Complex
{

private:
    int real,imag;

    public:
        Complex (int  r=0, int i=0)
        {
            real=r;
            imag=i;
        }

    Complex operator + (Complex const &obj){
        Complex c;
        c.imag = imag + obj.imag;
        c.real = real + obj.real;
        return c;
    }

    void display(){

        cout<<real << " + i "<< imag<<endl;
    }


};


int main()
{
    Complex c1(10,10), c2(9,1);
    Complex c3  =  c1 + c2;
    c3.display();
    return 0;
}