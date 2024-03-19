#include<bits/stdc++.h>
using namespace std;

class student
{
    string address;
    public:
    string name;
    int age;
    bool gender;

//    student (string s)
//    {
//        name=s;
//    }
//
//    student (string s, int p, int q)
//    {
//        name=s;
//        age = p;
//        gender=q;
//    }

//    student (student &ll)
//    {
//        cout<<"copy constructor\n";
//        name = ll.name;
//        age = ll.age;
//        gender = ll.gender;
//    }
//    

    void setName(string a)
    {
        name = a;
    }

//    void getName()
//    {
//        cout<<name<<endl;
//    }

    void printInfo(){
        cout<<name<<endl;
//        cout<<age<<endl;
//        cout<<gender<<endl;
    }





};

int main()
{

//1. declaration: 

    //student a;

    //a.name="Pratik";
    //a.age=18;
    //a.gender=1;


    student arr[3];

    


    for(int i=0;i<1;i++)
    {
        string a;
        cin>>a;
        arr[i].setName(a);
//
//        cin>>arr[i].name;
//        cin>>arr[i].age;
//        cin>>arr[i].gender;
    }
//
    for(int i=0;i<3;i++)
    {
        arr[i].printInfo();
    }

//    student a("Pratik");
//    a.getName();
//
//    student ll("Pratik",20,1);
//    //ll.printInfo();
//
//    student c=ll;


    return 0;
}