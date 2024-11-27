#include<iostream>
#include<vector>
using namespace std;
void SortColor(vector<int>&nums){
    int n=nums.size();
    int noO=0;
    int noZ=0;
    int noT=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0) noZ++;
        if(nums[i]==1) noO++;
        if(nums[i]==2) noT++;
    }
    for(int i=0;i<n;i++){
        if(i<noZ) nums[i]=0;
        else if(i<(noZ+noO)) nums[i]=1;
        else nums[i]=2;
    }
    return;
}
int main(){
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    SortColor(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}