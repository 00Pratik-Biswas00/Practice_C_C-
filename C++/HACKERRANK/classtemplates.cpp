#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*
This disables the synchronization between the C and C++ standard streams. By default, all standard streams are synchronized, which in practice allows you to mix C- and C++-style I/O and get sensible and expected results. If you disable the synchronization, then C++ streams are allowed to have their own independent buffers, which makes mixing C- and C++-style I/O an adventure.

Also keep in mind that synchronized C++ streams are thread-safe (output from different threads may interleave, but you get no data races).


This unties cin from cout. Tied streams ensure that one stream is flushed automatically before each I/O operation on the other stream.
*/

// to optimize the code we use this line
#define cin ios_base::sync_with_stdio(false); cin.tie(NULL); cin



/*
define replaces every occurence of the word concatenate by the word add before complilation. It's called preprocessor directives. look them up on google if you want to know more.
*/
#define concatenate add 


template <class T>
class AddElements 
{

    T element;
    public:
    AddElements (T myfloat) 
    {
        element=myfloat;
    }

    T add (T element2) 
    {
        return (element+element2);
    }


};










int main () {
int n,i;
cin >> n;


for(i=0;i<n;i++) {
    string type;
    cin >> type;

    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }

    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }

    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }


}
return 0;
}
