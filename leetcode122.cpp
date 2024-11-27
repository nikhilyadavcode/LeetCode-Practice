#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProfit(vector<int>&prices){
    int n=prices.size();
    int maxProfit=0;
    for(int i=1;i<n;i++){
        if(prices[i]>prices[i-1]){
            maxProfit+=prices[i]-prices[i-1];
        }
    }
    return maxProfit;
}
int main(){
    vector<int>prices={1,2,3,4,5};
    cout<<maxProfit(prices);
}