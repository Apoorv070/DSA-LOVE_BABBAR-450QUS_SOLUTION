class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        int n = N;
            int dp[n+1][W+1];
    for(int i =0 ; i <= n ; i++){
        for(int j = 0 ; j <= W ; j++){
            if(i==0||j==0){
                dp[i][j] = 0;
                continue;
            }
            
            if(wt[i-1]<=j)
                dp[i][j] = max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
            
        }
    }
    return dp[n][W];
    }
};
