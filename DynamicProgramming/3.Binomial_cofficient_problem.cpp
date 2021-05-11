class Solution{
public:
    int nCr(int n, int r){
        // code here
        int dp[n+1][r+1];
        //memset(dp,0,sizeof(dp));
        for(int i = 0 ; i <= n ; i++){
            for(int j = 0; j <= r ; j++){

                if(i==j||j==0){
                    dp[i][j] = 1;
                    continue;
                }
                
                if(i==0){
                    dp[i][j] = 0 ;
                    continue;
                }
  
                
                dp[i][j] = ((dp[i-1][j]%mod)+(dp[i-1][j-1]%mod))%mod;
            }
        }
        
        // for(int i = 0 ; i <=n  ; i++){
        //     for(int j = 0 ; j <= r ; j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[n][r];
    }
};
