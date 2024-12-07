#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>generate(int numRow){
vector<vector<int>>v;
 for(int i=1;i<=numRow;i++){
    vector<int>a(i);
    v.push_back(a);
}
for(int i=1;i<numRow;i++){
    for(int j=1;j<=i;j++){
        if(i==0 || j==i)
        v[i][j]=1;
        else
        v[i][j]=v[i-1][j]+v[i-1][j-1];
    }
}
return v;
}

int main(){
    int numRow=5;
vector<vector<int>>result=generate(numRow);
for(int i=1;i<numRow;i++){
    for(int j=1;j<=i;j++){
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
}