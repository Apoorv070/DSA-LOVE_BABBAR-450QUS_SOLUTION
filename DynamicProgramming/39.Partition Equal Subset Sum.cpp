class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0; 
        for(int i = 0 ; i < N ; i++){
            sum+=arr[i];
        }
        if(sum%2!=0){
            return 0;
        }else{
            sum = sum/2;
            int n = N;
            int W = sum;
            bool  dp[n+1][W+1];
            for(int i =0 ; i <= n ; i++){
                for(int j = 0 ; j <= W ; j++){
                    if(i==0||j==0){
                        if(i==0&&j==0)
                        dp[i][j]=true;
                        else
                        dp[i][j] = false;
                        continue;
                    }
            
                    if(arr[i-1]<=j)
                    dp[i][j] = dp[i-1][j-arr[i-1]]||dp[i-1][j];
                    else
                    dp[i][j] = dp[i-1][j];
            
                }
            }
            if( dp[n][W]){
                return 1;
            }else{
                return 0;
            }
        }
    }
};
