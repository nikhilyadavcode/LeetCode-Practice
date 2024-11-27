#include<iostream>
#include<vector>
using namespace std;
bool threeConsecutiveOdd(vector<int>&nums){
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]%2==1){
            count++;
            if(count==3){
                return true;
            }
        }
        else{
            count=0;
        }
    }
    return false;
}
void displayResult(bool result){
if(result){
    cout<<"the array contains three Consecutive numbers"<<endl;
}
else{
    cout<<"the array not contains a three consecutive numbers";
}
}
int main(){
    vector<int>nums={1,2,34,3,4,5,7,23,12};
    bool result=threeConsecutiveOdd(nums);
    displayResult(result);

}