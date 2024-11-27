#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int countGoodNumber(int n){
    int base=(n+1)/2;
    int base1=n/2;
   int result=pow(5,base)*pow(4,base1);
    return result;

}
int main(){
    int n=4;
    cout<<countGoodNumber(n);
}
