#include<iostream>
using namespace std;
int KthGrammer(int n,int k){
    if(n==1) return 0;
    if(k%2==0){
        int prevAns=KthGrammer(n-1,k/2);
        if(prevAns==0) return 1;
        else return 0;
    }
    else{
       int prevAns=KthGrammer(n-1,k/2+1);
        return prevAns;
    }
}
int main(){
    int n=2;
    int k=2;
    cout<<KthGrammer(n,k);
}