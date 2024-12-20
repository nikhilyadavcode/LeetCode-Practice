#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>&height){
    int i=0;
    int j=height.size()-1;
    int amount=0;
    while(i<j){
        amount=max(amount,(j-i)*min(height[i],height[j]));
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
    cout<<maxArea(height);
}