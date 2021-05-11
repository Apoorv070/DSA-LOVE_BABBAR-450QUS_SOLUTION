int helper(int n,int x,int y,int z,int* dp){
    if(n<=0)
    return 0;
    if(dp[n]!=-1)
    return dp[n];
    int op1=INT_MIN,op2=INT_MIN,op3=INT_MIN;
    if(n>=x)op1 = helper(n-x,x,y,z,dp);
    if(n>=y)op2 = helper(n-y,x,y,z,dp);
    if(n>=z)op3 = helper(n-z,x,y,z,dp);
    dp[n] = 1+max(op1,max(op2,op3));
    return dp[n];
}

int maximizeTheCuts(int n, int x, int y, int z)
{
    //Your code here
    //if(n<=0){
      //  return 0;
    //}
    
     int dp[n+1];
    // dp[0] = 0;
     memset(dp,-1,sizeof(dp));
     int ans = helper(n,x,y,z,dp);
     if(ans<0)
     return 0;
     else
     return ans;

}
