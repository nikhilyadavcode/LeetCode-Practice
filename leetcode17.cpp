#include<iostream>
#include<vector>
#include<string>
using namespace std;
void generateCombination(string digit,string output,string option[],int idx,vector<string>&ans){
    if(idx==digit.length()){
        ans.push_back(output);
        return;
    }
    int n=digit[idx]-'0';
    string s=option[n];
    for(int i=0;i<s.length();i++){
        generateCombination(digit,output+s[i],option,idx+1,ans);
    }
}
vector<string>letterCombination(string digit){
if(digit.empty()) return{};
vector<string>ans;
string options[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string output="";
generateCombination(digit,"",options,0,ans);
return ans;
}
int main(){
    string digit="23";
    vector<string>combination=letterCombination(digit);
    for(string &combination:combination){
        cout<<combination<<"";
    }
}