class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here
        int n = s.length();
        int m = t.length();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(int i = 0; i <= n ; i++){
            for(int j = 0 ; j <= m ; j++){
                if(i==0||j==0){
                    dp[i][j] = max(i,j);
                    //cout<<dp[i][j]<<" ";
                    continue;
                }
                
                if(s[i-1]==t[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }else{
                    dp[i][j] = min(1+dp[i-1][j],min(1+dp[i][j-1],1+dp[i-1][j-1]));
                }
                //cout<<dp[i][j]<<" ";
            }
            //cout<<endl;
        }
        return dp[n][m];
    }
};
