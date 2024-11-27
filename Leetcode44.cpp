#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool ismatch(string &s, string &p) {
    int m = s.size();
    int n = p.size();
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
    dp[0][0] = true; // Empty pattern matches empty string

    // Initialize the first row for patterns with '*'
    for (int j = 1; j <= n; j++) {
        if (p[j - 1] == '*') {
            dp[0][j] = dp[0][j - 1];
        }
    }

    // Fill the DP table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == '*') {
                // '*' can match zero or more of the preceding element
                dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
            } else if (p[j - 1] == '?' || p[j - 1] == s[i - 1]) {
                // '?' matches any single character or exact match
                dp[i][j] = dp[i - 1][j - 1];
            }
        }
    }

    return dp[m][n];

}
int main(){
    string s="aab";
    string p="c*a*b";
    bool result=ismatch(s,p);
    if(result){
        cout<<"the string match the pattern"<<endl;
    }
    else{
        cout<<"the string does not match the pattern"<<endl;
    }
}
