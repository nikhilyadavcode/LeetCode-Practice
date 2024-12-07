#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an matrix:";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the size of element:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j) swap(arr[i][j],arr[j][i]);
              cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
  
}


