#include<bits/stdc++.h>
using namespace std;

//1. check an array is sorted or not:
/*
    bool sort(int arr[],  int n)
    {
        if(n==1)
            return true;
        else
            return (arr[0]<arr[1] && sort(arr+1 , n-1));
    }

    int main()
    {
        int arr[]={1,2,3,4,5};
        if(sort(arr,5))
            cout<<"Sorted array\n";
        else 
            cout<<"Unsorted  array\n";
        return 0;
    }
*/

//2. print till  n in increasing and decreasing order:
/*
    void dec(int n)
    {
        if(n==0)
            return;
        cout<<n<<" ";
        dec(n-1);
    }
    void inc(int n)
    {
        if(n==0)
            return;
        inc(n-1);
        cout<<n<<" ";
    }
    int main()
    {
        int n;
        cin>>n;
        dec(n);
        cout<<endl;
        inc(n);
        return  0;
    }
*/

//3. find the first and last occurrence of a number:
/*
    int firstOcc(int arr[], int n, int i, int key)
    {
        if(i==n){
            return -1;
        }
        if(arr[i]==key)
        {
            return i;
        }
        return firstOcc(arr,n,i+1,key);
    }

    int lastOcc(int arr[], int n, int i, int key)
    {
        if(i==n)
        {
            return -1;
        }
        int restArray = lastOcc(arr,n,i+1,key);
        if(restArray!=-1)
        {
            return restArray;
        }
        if(arr[i]==key)
        {
            return i;
        }
        return -1;
    }

    int main()
    {
        int arr[]={4,2,1,2,5,2,7};
        cout<<firstOcc(arr,7,0,2)<<endl;
        cout<<lastOcc(arr,7,0,2)<<endl;
        return 0;
    }
*/

//4. reverse a string:
/*
    void rev(string s)
    {
        if(s.length()==0)
        {
            return;
        }
        string sk = s.substr(1);
        rev(sk);
        cout<<s[0];
    }

    int main()
    {
        string s = "Hello";
        rev(s);
        return 0;
    }
*/

//5.  replace pi to 3.14:     //  pisdfspppiiddfpid == 3.14sdfspp3.14iddf3.14d
/*
    void replace(string s)
    {
        if(s.length()==0)
        {
            return;
        }
        if(s[0]=='p' && s[1]=='i')
        {
            cout<<"3.14";
            replace(s.substr(2));
        }
        else
        {
            cout<<s[0];
            replace(s.substr(1));
        }
    }

    int main()
    {
        string s = "pisdfspppiiddfpid";
        replace(s);
        return 0;
    } 
*/

//6. tower of hanoi:
/*
    void toh(int n, char src, char dest, char help)
    {
        if(n==0)
        {
            return;
        }
        toh(n-1,src, help, dest);
        cout<<"move from "<<src<<" to "<<dest<<endl;
        toh(n-1,help, dest, src );
    }

    int main()
    {
        toh(3,'a','c','b');
        return 0;
    }
*/

//7. print string after removing repeating duplicate elements:
/*
    string rem(string s)
    {
        if(s.length()==0)
        {
            return "";
        }
        char ch=s[0];
        string ans = rem(s.substr(1));
        if(ch==ans[0])
        {
            return ans;
        }
        return (ch+ans);
    }

    int main()
    {
        string s="aaaabbbbbb";
        cout<<rem(s)<<"  ";
        return 0;
    }
*/

//8. move all 'x' to the end:
/*
    string end(string s)
    {
        if(s.length()==0)
        {
            return "";
        }
        char ch=s[0];
        string ans = end(s.substr(1));
        if(ch=='x')
        {
            return (ans+ch);
        }
        return (ch+ans);
    }

    int main()
    {
        string s="axxaxbbbxxbbxb";
        cout<<end(s)<<"  ";
        return 0;
    }    
*/

//9. generate all substrings:
/*
    void sub(string s, string ans)
    {
        if(s.length()==0)
        {
            cout<<ans<<endl;
            return;
        }
        char ch=s[0];
        string a = s.substr(1);
        sub(a,ans);
        sub(a,(ans+ch));
    }

    int main()
    {
        string s="abc";
        sub(s,"");
        return 0;
    }
*/

//10. generate all substrings with their ascii values:
/*
    void subs(string s, string ans){
        if(s.length()==0)
        {
            cout<<ans<<endl;
            return;
        }
        char ch=s[0];
        int ascii=ch;
        string ros= s.substr(1);
        subs(ros,ans);
        subs(ros, (ans+ch));
        subs(ros, (ans + to_string(ascii)));

    }

    int main()
    {
        string s= "AB";
        subs(s,"");
        return 0;
    }
*/

//11. print all combinations of mobile phone numbers:

/*
    string arr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void key(string s, string ans){
        if(s.length()==0)
        {
            cout<<ans<<endl;
            return;
        }
        char ch=s[0];
        string code = arr[ch-'0'];
        string ros= s.substr(1);
        for(int i=0;i<code.length();i++)
        {
            key(ros, ans + code[i]);
        }

    }

    int main()
    {
        string s= "23";
        key(s,"");
        return 0;
    }
*/