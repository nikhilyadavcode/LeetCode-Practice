#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxNMeeting(int start[],int end[],int n){
   vector<pair<int,int>>v;
   for(int i=0;i<n;i++){
      v.push_back(make_pair(end[i],start[i]));
   }
   sort(v.begin(),v.end());
   int lastEnd=v[0].first;
   int count=1;
   while(i<n){
      if(v[i].second>lastEnd){
         count++;
         lastEnd=v[i].first;
      }
      
   }
   return count;
}
int main(){
   int n=3;
   int start[]={10, 12, 20};
   int end[]= {20, 25, 30};
   cout<<maxNMeeting(start,end,n);
}