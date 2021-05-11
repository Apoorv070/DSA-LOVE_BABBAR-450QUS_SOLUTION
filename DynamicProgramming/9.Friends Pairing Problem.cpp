class Solution
{
public:
    long long int mod = 1000000007;
    int countFriendsPairings(int n) 
    { 
        // code here
        // if(n<=0)
        // return 0;
        // if(n==1)
        // return 1;
        // // if(n==2)
        // // return 3;
        
        // return  countFriendsPairings(n-1)+(n-1)*countFriendsPairings(n-2);
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i = 3 ; i<=n ; i++){
            dp[i] = (dp[i-1] + (((i-1)%mod)*(dp[i-2]%mod)%mod))%mod;
        }
        return dp[n];
    
        
    }
};   



/////                  https://www.youtube.com/watch?v=SHDu0Ufjyk8&t=819s
