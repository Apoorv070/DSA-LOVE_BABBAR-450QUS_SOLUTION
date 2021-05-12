
//Leetcode     https://leetcode.com/problems/maximum-length-of-pair-chain/submissions/
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        vector<int> dp(n,1);
        sort(pairs.begin(),pairs.end());
        int ans = 1;
        for(int i = 1 ; i < n ; i++){
            dp[i]=1;
            for(int j = 0 ; j<i ; j++){
                if(pairs[j][1]<pairs[i][0])
                    dp[i]=max(dp[i],dp[j]+1);
            }
            ans = max(dp[i],ans);
        }
    return ans;
    }
};
