#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct item{
   double value;
    double weight;
};
bool cmp(struct item a,struct item b){
    int r1=(double)a.value/(double)a.weight;
    int r2=(double)b.value/(double)b.weight;
    return r1>r2;
}
    double FunctionalKnapsack(int w,item arr[],int n){
        sort(arr,arr+n,cmp);
        double totalValue=0.0;
        for(int i=0;i<n;i++){
            if(arr[i].weight<=w){
                w-=arr[i].weight;
            totalValue+=arr[i].value;
            }
            else{
                totalValue+=arr[i].value*((double)w/(double)arr[i].weight);
                break;
            }
        }
        return totalValue;
    }

int main(){
int n=3;
int w=50;
item arr[]={{60, 10}, {100, 20}, {120, 30}};
    cout<<FunctionalKnapsack(w,arr,n);
}