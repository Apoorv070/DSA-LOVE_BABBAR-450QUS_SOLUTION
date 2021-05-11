class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
    int x = str.length();
    int dp[x+1][x+1];
    //memset(dp,0,sizeof(dp));
    for(int i = 0 ; i <= x ; i++){
        for(int j = 0; j <=x ; j++){
            if(i==0||j==0){
                dp[i][j] = 0 ;
                continue;
            }
            
            if(str[i-1]==str[j-1]&&i!=j){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
    }
    return dp[x][x];
		}

};
