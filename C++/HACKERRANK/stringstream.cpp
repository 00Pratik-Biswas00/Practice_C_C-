#include<bits/stdc++.h>
#include<vector>
#include<sstream>
using namespace std;
vector<int> parseInts(string str) {
	// Complete this function
    int tmp;
    char ch;
    stringstream ss(str);
    vector<int> r;


    while(ss >> tmp)
    {
        r.push_back(tmp);
        ss>>ch;
    }
    return r;
}
/*
Now to the second line. ss >> tmp is a simple extraction. Remember cin >> a from previous exercises. It does the same thing here: Get me the next thing on the stream (which actually is a string) and put it in the variable tmp. Now the trick is, that tmp is of type int, so only if the next thing in the stream is an integer value will this work. The while(ss >> tmp) checks, if it actually did work. If the string is empty (I'm not sure with C++ but in C, strings terminate with an invisible character \0), or if the next thing is not a number, then the test fails, and while skips the rest.
*/
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
