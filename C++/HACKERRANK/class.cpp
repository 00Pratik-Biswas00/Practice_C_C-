#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
    public:
    int age, standard;
    string first_name, last_name;

    void setName(int a, string fname, string lname, int s)
    {
        age = a;
        first_name = fname;
        last_name = lname;
        standard = s;
    }

    void printInfo(){
        cout << age << "\n";
        cout << last_name<< ", " << first_name << "\n";
        cout << standard << "\n";
        cout << "\n";
        cout <<age<<","<<first_name<<","<<last_name<<","<<standard<<endl;
    }

    


};





int main() {



    Student arr[4];

    int a;
    string fname, lname; 
    int s;
    cin>>a>>fname>>lname>>s;

    for(int i=0;i<3;i++)
    {
        
        arr[i].setName(a, fname,  lname,  s);

    }

    for(int i=0;i<1;i++)
    {
        arr[i].printInfo();
    }




    return 0;
}
