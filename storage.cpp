#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>> dp(n);
        dp[0].push_back("()");
        for (int i = 1; i < n;i++){
            for(int j = 0;j <(int)dp[i-1].size();j++){
                if(find(dp[i].begin(),dp[i].end(),"()"+dp[i-1][j])==dp[i].end()){
                    dp[i].push_back("()"+dp[i-1][j]);}
                if(find(dp[i].begin(),dp[i].end(),dp[i-1][j]+"()")==dp[i].end()){
                    dp[i].push_back(dp[i-1][j]+"()");}
                if(find(dp[i].begin(),dp[i].end(),"("+dp[i-1][j]+")")==dp[i].end()){
                    dp[i].push_back("("+dp[i-1][j]+")");}
            }
        }
        return dp[n-1];
    }
};