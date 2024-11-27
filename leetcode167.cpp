#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>twoSum(vector<int>&numbers,int target){
    sort(numbers.begin(),numbers.end());
    int i=0;
    int j=numbers.size()-1;
    while(i<j){
        int sum=numbers[i]+numbers[j];
        if(sum==target){
            return{i+1,j+1};
        }
        else if(sum<target){
            i++;
        }
        else j--;
    }
    return {};
}
int main(){
    vector<int>numbers={2,7,11,15};
    int target=7;
    vector<int>result=twoSum(numbers,target);
    if(!result.empty()){
        cout<<"indices:"<<result[0]<<" "<<result[1]<<" "<<endl;
    }
    else{
        cout<<"No solution found"<<endl;
    }
}