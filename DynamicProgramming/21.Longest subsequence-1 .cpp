class Solution{
public:
    int longestSubsequence(int N, int A[])
    {
        // code here
        int dp[N];
        dp[0]=1;
        int ans = dp[0];
        for(int i  = 1 ; i <N ; i++){
            dp[i]=1;
            for(int j = 0 ; j<i ; j++){
                if(abs(A[i]-A[j])==1)
                    dp[i] = max(1+dp[j],dp[i]);
            }
            ans = max(ans,dp[i]);
        }
        
        return ans;
    }
};
