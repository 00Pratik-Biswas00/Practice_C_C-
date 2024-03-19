#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
//1.  declaration(1):
/*
    string sttr;
    cin>>sttr;
    cout<<sttr<<endl;
*/

//2.  declaration(2):
/*
    string str(5,'P');
    cout<<str<<endl;
*/

//3.  declaration(3):
/*
    string sttr="Pratik Biswas";
    cout<<sttr<<endl;
*/

//4. input a sentence and output it:
/*
        string s;
        getline(cin,s);
        cout<<s<<endl;
*/

//5. append two strings:
/*
    string a="fam";
    string b="ily";
    a.append(b);
    cout<<a<<endl;

    string c="In";
    string d="dia";
    cout<<c+d<<endl;

    string  e;
    string f;
    getline(cin,e);
    getline(cin,f);
    cout<<e+""+f<<endl;
*/

//6. clear a string:
/*
    string str="Pratik Biswas";
    cout<<str<<endl;
    str.clear();
    cout<<str<<endl;
*/

//7. compare a string:
/*
    string c;
    string d;
    getline(cin,c);
    getline(cin,d);
    if(!c.compare(d))               //It means = if(c.compare(d) == 0)
        cout<<"Equal string"<<endl;
*/

//8. check the empty string:
/*
    string s="Pratik Biswas";
    cout<<s<<endl;
    s.clear();
    cout<<s<<endl;
    if(s.empty())
        cout<<"Empty string"<<endl;
*/

//9. erase a string:
/*
    string s="Pratik Biswas";
    cout<<s<<endl;
    s.erase(2,3);   //2= index to start erasing , 3= no of char you are going to erase.
    cout<<s<<endl;
*/

//10. find a sub string:
/*
    string s="Pratik Biswas";
    cout<<s.find("ti")<<endl;   //returns the index of the first letter of the word
*/

//11.  insert a string:
/*
    string p="Pratik boy.";
    p.insert(7, "is a good ");
    cout<<p<<endl;

    string s="Prtaik";
    s.erase(2,2);
    s.insert(2, "at");
    cout<<s<<endl;
*/

//12. length of a string:
/*
    string s="Pratik";
    cout<< s.length() <<endl;
    for(int i=0;i<s.length();i++)   // print char in each line
        cout<< s[i] <<endl;
*/

//13. find substring of a string:
/*
    string s="Pratik Biswas";
    cout<< s.substr(3,7)<<endl;
*/

//14. string to int:
/*
    string s="2002";
    int p = stoi(s);
    cout<< p+2 << endl;
*/

//15. int to string:
/*
    int x = 2002;
    cout<<to_string(x)+"4"<<endl;
*/

//16. string sort
/*
    string s = "cbnogdswa";
    sort(s.begin(),s.end());
    cout<<s<<endl;
*/







    return 0;
}