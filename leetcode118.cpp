#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> v; 

    for (int i = 0; i < numRows; i++) { 
        vector<int> row(i + 1, 1); 

       for(int j=i;j>=0;j--){
        row[j]=row[j]+row[j-1];
       }

        v.push_back(row); 
    }

    return v; 
}

int main() {
    int numRows = 5; 
    vector<vector<int>> result = generate(numRows);

    for(int i=0;i<numRows;i++){
        for(int j=0;j<=i;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

