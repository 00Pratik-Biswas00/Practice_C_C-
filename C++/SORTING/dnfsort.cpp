#include<bits/stdc++.h>
using namespace std;

//          0,1,2 Sort 




void swap(int arr[], int i, int j)
{
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}


void dnfSort(int arr[], int n)
{
    int l=0, mid=0, h=n-1;
    while(mid<=h)
    {
        if(arr[mid]==0)
        {
            swap(arr,l,mid);
            l++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr,mid,h);
            h--;
        }
    }
}


int main()
{
    int arr[] = {0,1,1,2,0,1,2,0,0,1,2,0,1,2,0,1,2};
    dnfSort(arr,17);
    for(int i=0;i<17;i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;
    return 0;
}