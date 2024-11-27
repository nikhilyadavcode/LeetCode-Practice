#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&nums1,int m,int n,vector<int>&nums2){
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            i--;
        }
        else{
            nums1[k]=nums2[j];
            j--;
        }
        k--;
    }
    while(i>=0){
        nums1[k]=nums1[i];
        i--;
        k--;
    }
    while(j>=0){
        nums1[k]=nums2[j];
        j--;
        k--;
    }
}
int main(){
    int m=3;
    int n=3;
    vector<int>nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
     vector<int>nums2;
     nums2.push_back(2);
     nums2.push_back(5);
     nums2.push_back(6);
     for(int i=0;i<nums2.size();i++){
        cout<<nums2[i]<<" ";
     }
     cout<<endl;
      merge(nums1,m,n,nums2);
      for(int i=0;i<(m+n);i++){
        cout<<nums1[i]<<" ";
      }
   

}