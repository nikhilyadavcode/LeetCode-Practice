#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isMatch(string &s,string &p){
   
    int m=s.size();
    int n=p.size();
    vector<vector<bool>>dp(m+1,vector<bool>(n+1,false));
     dp[0][0]=true;
    for(int j=1;j<=n;j++){
        if(p[j-1]=='*'){
            dp[0][j]=dp[0][j-2];
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(p[j-1]=='*'){
                dp[i][j]=dp[i][j-2]||dp[i-1][j] && (s[i-1]==p[j-2]||p[j-2]=='.');
            }
        else if(p[j-1]=='.'||p[j-1]==s[i-1]){
            dp[i][j]=dp[i-1][j-1];
        }
    }
}
return dp[m][n];
}
int main(){
    string s="aab";
    string p="c*a*b";
    bool result=isMatch(s,p);
    if(result){
        cout<<"the string match the pattern"<<endl;
    }
    else{
        cout<<"the string does not match"<<endl;
    }
}