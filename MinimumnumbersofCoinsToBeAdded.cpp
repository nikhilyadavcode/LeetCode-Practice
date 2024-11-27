#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minimumAddedCoins(vector<int>&coins,int target){
    int count=0;
    int obtain=0;
    sort(coins.begin(),coins.end());
    int n=coins.size();
    for(int i=0;i<n;i++){
        while(coins[i]>(obtain+1)){
            obtain=obtain+(obtain+1);
            count++;
        }
        obtain=obtain+coins[i];
        if(obtain>=target){
            return count;
    }
    }
    while(target>=(obtain+1)){
        count++;
        obtain=obtain+(obtain+1);
    }
    return count;

    }
    
int main(){
    vector<int>coins={1,4,10};
    int target=19;
    cout<<minimumAddedCoins(coins,target);
}