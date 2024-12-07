#include<iostream>
#include<vector>
using namespace std;
vector<int>getRow(int getIndex){
    vector<int>row(getIndex+1,1);
    for(int i=1;i<getIndex;i++){
        for(int j=i;j>0;j--){
            row[j]+=row[j-1];
        }
    }
    return row;
}
int main(){
int getIndex=3;
vector<int>result=getRow(getIndex);
for(int i=0;i<=getIndex;i++){
    cout<<result[i]<<" ";
}
cout<<endl;
}

