int longestPalinSubseq (string S)
{
    // your code here
    int x = S.length();
    int y = S.length();
    string s1 = S;
    string s2 = S;
    reverse(s2.begin(),s2.end());
    int dp[x+1][y+1];
    //memset(dp,0,sizeof(dp));
    for(int i = 0 ; i <= x ; i++){
        for(int j = 0; j <=y ; j++){
            if(i==0||j==0){
                dp[i][j] = 0 ;
                continue;
            }
            
            if(s1[i-1]==s2[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
    }
    return dp[x][y];
}
