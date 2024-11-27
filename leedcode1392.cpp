#include<iostream>
using namespace std;
int numOfstep(int num){
    if(num==0){
        return 0;
    }
    if(num%2==0){
        return 1+numOfstep(num/2);
    }
    else return 1+numOfstep(num-1);
}
int main(){
    int num=14;
    cout<<numOfstep(num);
}
