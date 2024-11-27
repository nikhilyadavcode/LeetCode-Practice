#include<iostream>
using namespace std;
int countNumberOfDigit(int n){
if(n<0){
    return 0;
}
int count =0;
for(int i=1;i<=n;i++){
    int num=i;
    while(num>0){
        if(num%10==1){
            count++;
        }
        num/=10;
    }
}
return count;
}
int main(){
    int n=10;
    cout<<countNumberOfDigit(n);
}