#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n,q;
    cin>>n>>q;
    int *arr[n];
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        arr[i] = new int[k];
        for(int j=0;j<k;j++)
        {
            cin>>arr[i][j];
        }
    }
    int r,c;
    for(int i=0;i<q;i++)
    {
        cin>>r>>c;
        cout<<arr[r][c]<<endl;
    }


    





	return 0;
}