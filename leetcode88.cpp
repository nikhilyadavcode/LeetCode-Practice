#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&nums1,vector<int>&nums2){
    int n=nums1.size();
    int m=nums2.size();
    int i=n-1;
    int j=m-1;
    int k=m+n-1;
    vector<int>res(m+n);
    while(i>=0 && j>=0){
        if(nums1[i]>=nums2[j]){
            res[k]=nums1[i];
            i--;
            k--;
        }
        else{
            res[k]=nums2[j];
            j--;
            k--;
        }
    }
        
            while(j>=0){
                res[k]=nums2[j];
                j--;
                k--;
            }
        
            
                while(i>=0){
                    res[k]=nums1[i];
                    i--;
                    k--;
                }
            
        return res;

}
int main(){
    vector<int>nums1;
    nums1.push_back(1);
    nums1.push_back(4);
    nums1.push_back(5);
    nums1.push_back(8);
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    vector<int>nums2;
    nums2.push_back(2);
    nums2.push_back(3);
    nums2.push_back(6);
    nums2.push_back(7);
    nums2.push_back(10);
    nums2.push_back(12);
    for(int i=0;i<nums2.size();i++){
        cout<<nums2[i]<<" ";
    }
    cout<<endl;
    vector<int>v=merge(nums1,nums2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}