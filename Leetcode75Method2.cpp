#include<iostream>
#include<vector>
using namespace std;
void SortColor(vector<int>&nums){
    int mid=0;
    int low=0;
    int high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==2){
            int temp=nums[mid];
            nums[mid]=nums[high];
            nums[high]=temp;
            high--;
        }
        else if(nums[mid]==0){
            int temp=nums[mid];
            nums[mid]=nums[low];
            nums[low]=temp;
            low++;
            mid++;
        }
        else mid++;
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