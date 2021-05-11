int knapSack(int W, int wt[], int val[], int n) 
{ 
   // Your code here
//   if(n==0){
//       return 0;
//   }
   
//   if(W==0){
//       return 0;
//   }
   
//   if(wt[n-1]>W){
//       return knapSack(W,wt,val,n-1);
//   }else{
//       return max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
//   }
    int dp[n+1][W+1];
    for(int i =0 ; i <= n ; i++){
        for(int j = 0 ; j <= W ; j++){
            if(i==0||j==0){
                dp[i][j] = 0;
                continue;
            }
            
            if(wt[i-1]<=j)
                dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
            
        }
    }
    return dp[n][W];
}
