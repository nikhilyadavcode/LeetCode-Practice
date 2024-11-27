#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Jobs{
    int id;
    int deadline;
    int profit;
}
int main(){
    int n=4;
   Jobs arr[] = {(1,4,20),(2,1,10),(3,1,40),(4,1,30)} 
   jobScheduling(Jobs,n);
}

