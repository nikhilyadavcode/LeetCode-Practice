#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    bool canJump(vector<int>&nums){
        int maxReach=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>maxReach){
                return false;
            }
            maxReach=max(maxReach,i+nums[i]);
        }
        return true;
}
};
int main(){
    Solution solution;
    vector<int>nums={3,2,1,0,4};
    bool result=solution.canJump(nums);
    cout<<(result ?"True":"False");
    
}