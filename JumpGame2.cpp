#include<iostream>
#include<vector>
using namespace std;
int Jump(vector<int>&nums){
   for(int i=1;i<nums.size();i++){
    nums[i]=max(nums[i]+i,nums[i-1]);
   }
   int jump=0;
   int i=0;
   while(i<nums.size()-1){
    
    i=nums[i];
    jump++;
   }
   return jump;
}
int main(){
    vector<int>nums={1, 4, 3, 2, 6, 7};
    cout<<Jump(nums);
}