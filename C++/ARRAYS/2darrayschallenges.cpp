#include<bits/stdc++.h>
using namespace std;
int main(){
//1. transpose:
/*
    int a[10][10], b[10][10], n,m;                    
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[j][i]=a[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<< " ";
        }
        cout<<endl;
    }
*/
//2. multiplication:
/*
    int a[10][10], b[10][10], c[10][10], r1,r2,c1,c2;                    
    cin>>r1>>c1;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }

    cin>>r2>>c2;

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    cout<<"your answer: "<<endl;
    if(c1 == r2)
    {
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                c[i][j]=0;
                for(int k=0;k<r2;k++){
                        c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<c[i][j]<< " ";
        }
        cout<<endl;
    }
    }
    else
        cout<< "not possible" <<endl;
*/
//3. search in a matrix:
/*
    int a[10][10], b[10][10], n,m;                    
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int p, flag = 0,i,j;
    cin>>p;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(p==a[i][j])
            {
                flag=1;
                cout<<"Element present in ("<< i+1 <<","<< j+1 <<")"<<endl;
                break;
            }
        }
    }
    if(flag==0)
        cout<<"np"<<endl;
*/




return 0;
}