class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        int x = n;
        int y = m;
          int dp[x+1][y+1];
           int maxi = INT_MIN;
    //memset(dp,0,sizeof(dp));
    for(int i = 0 ; i <= x ; i++){
        for(int j = 0; j <=y ; j++){
            if(i==0||j==0){
                dp[i][j] = 0 ;
                continue;
            }
            
            if(S1[i-1]==S2[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
                
            }else{
                dp[i][j] = 0;
            }
            maxi  = max(maxi,dp[i][j]);
            
        }
    }
    return maxi;
    }
};
