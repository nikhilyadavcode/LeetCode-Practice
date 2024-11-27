#include<iostream>
#include<vector>
using namespace std;
void combination(vector<vector<int>>&ans,vector<int>&v,vector<int>&candidates,int target,int idx){
    if(target==0){
        ans.push_back(v);
        return;
    }
    if(target<0)return;
    for(int i=idx;i<candidates.size();i++){
        v.push_back(candidates[i]);
        combination(ans,v,candidates,target-candidates[i],i);
        v.pop_back();
    }
}
vector<vector<int>>CombinationSum(vector<int>candidates,int target){
vector<vector<int>>ans;
vector<int>v;
combination(ans,v,candidates,target,0);
return ans;

}
int main(){
    vector<int>candidates={2,3,6,7};
    int target=7;
    vector<vector<int>>result=CombinationSum(candidates,target);
     for (const auto& combination : result) {
        cout << "[ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

}