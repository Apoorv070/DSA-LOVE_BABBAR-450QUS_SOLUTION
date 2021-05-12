class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
        int eggDrophelper(int n, int k,int **dp)
{
    if(dp[n][k]!=-1)
    return dp[n][k];
    
    if (k == 1 || k == 0)
        return dp[n][k] = k;
 

    if (n == 1)
        return dp[n][k] =k;
 
    int min = INT_MAX, x, res;

    for (x = 1; x <= k; x++) {
        res = max(
            eggDrophelper(n - 1, x - 1,dp),
            eggDrophelper(n, k - x,dp));
        if (res < min)
            min = res;
    }
 
    return dp[n][k] = min + 1;
}

    int eggDrop(int n, int k) 
    {
        // your code here
    int ** dp = new int*[n+1];
    for(int i = 0 ; i <= n ; i++){
        dp[i] = new int[k+1];
        for(int j = 0 ; j <=k ; j++){
            dp[i][j]=-1;
        }
    }
    return eggDrophelper(n,k,dp);
    }
};
