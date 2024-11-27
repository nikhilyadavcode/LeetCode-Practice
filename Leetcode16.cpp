#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int threeSumClosest(vector<int>&nums,int target){
    sort(nums.begin(),nums.end());
    int diff=INT_MAX;
    int ans=0;
    for(int i=0;i<nums.size();i++){
        int first=nums[i];
        int start=i+1;
        int end=nums.size()-1;
        while(start<end){
            if(first+nums[start]+nums[end]==target){
                return target;
            }
            else if(abs(first+nums[start]+nums[end]-target)<diff){
                diff=abs(first+nums[start]+nums[end])-target;
                ans=first+nums[start]+nums[end];
            }
            if(first+nums[start]+nums[end]>target) end--;
            else start++;
        }
    }
    return ans;
}
int main(){
    vector<int>nums={-1,2,1,-4};
    int target=1;
   cout<<threeSumClosest(nums,target);
}