#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j)
{
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}


int sort(int arr[], int l, int r)
{
    int last = arr[r];
    int i = l-1;
    for(int j=l;j<r;j++)
    {   
        if(arr[j]<last)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}


void quicksSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int pi = sort(arr,l,r);
        quicksSort(arr,l,pi-1);
        quicksSort(arr,pi+1,r);
    }
}


int main()
{
    int arr[] = {5,4,3,2,1};
    quicksSort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;
    return 0;
}