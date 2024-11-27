#include<iostream>
#include<vector>
using namespace std;
int maxHeight(vector<int>&height){
    int i=0;
    int j=height.size()-1;
    int amount=0;
    while(i<j){
        int currentArea=(j-i)*min(height[i],height[j]);
        amount=max(amount,currentArea);
        if(height[i]<height[j]){
            i++;
        }
        else{
           j--;   
        }
         
    }
  return amount;
}
int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<maxHeight(height);
}