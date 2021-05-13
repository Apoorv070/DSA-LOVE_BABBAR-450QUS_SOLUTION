#define mod 1000000007
class Solution {
  public:
    long long int count(int h,long long int *dp) { 
        // code here
        if(dp[h]!=-1)
        return dp[h];
        
        if(h==0)
        return dp[h] = 0;
        if(h==1)
        return dp[h] = 1;
        
        if(h==2)
        return dp[h] = 3;
        
        
        long long int x = count(h-1,dp);
        long long int y = count(h-2,dp);
        return dp[h] = ((x%mod*x%mod)%mod+(2*(x%mod)*(y%mod))%mod)%mod;
        
    }
    long long int countBT(int h) { 
        // code here
        long long int dp[h+1];
        memset(dp,-1,sizeof(dp));
        return count(h,dp);
    }
};
