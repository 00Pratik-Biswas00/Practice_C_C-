#include<bits/stdc++.h>
using namespace std;
int main(){
    
//1. Matrix Input&Output--

//    int n,m;
//    cin>>n>>m;
//    int arr[n][m];
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>arr[i][j];
//        }
//    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }

//2. Searching a Matrix--

//    int n,m;
//    cin>>n>>m;
//    int arr[n][m];
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            cin>>arr[i][j];
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
//    int x;
//    cin>>x;
//    bool flag=false;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            if(arr[i][j]==x)
//            {
//                cout<<i<<" "<<j<<" ";
//                flag=true;
//            } 
//        }
//    }
//    if(flag){
//        cout<<"Element Found \n";
//    } else{
//        cout<<"Element Not Found \n";
//    }

//3. Spiral Order Matrix Transversal --**

//    int n,m;
//    cin>>n>>m;
//    int arr[n][m];
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>arr[i][j];
//        }
//    }
//    //Spiral Order Print
//    int row_Start=0, row_End=n-1, column_Start=0, column_End=m-1;
//    while(row_Start<=row_End && column_Start<=column_End){
//        //for first row
//        for(int col=column_Start; col<=column_End; col++){
//            cout<<arr[row_Start][col]<<" ";
//        } row_Start++;
//        //for last column
//        for(int row=row_Start; row<=row_End; row++){
//            cout<<arr[row][column_End]<<" ";
//        } column_End--;
//        //for last row
//        for(int col=column_End; col>=column_Start; col--){
//            cout<<arr[row_End][col]<<" ";
//        } row_End--;
//        //for first column
//        for(int row=row_End; row>=row_Start; row--){
//            cout<<arr[row][column_Start]<<" ";
//        } column_Start++;
//    }

}