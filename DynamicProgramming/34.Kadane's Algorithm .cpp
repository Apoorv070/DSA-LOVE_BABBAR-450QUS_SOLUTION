class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
  
        int dp[n];
        dp[0] = arr[0];
        int best = arr[0];
        for(int i = 1 ; i < n ;i++){
            dp[i] = max(dp[i-1]+arr[i],arr[i]);
            if(dp[i]>best)
            best = dp[i];
        }
        return best;
    }
};



/////////////////////////////////////
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
  
        
        int dp[n];
        dp[0] = arr[0];
        int best = arr[0];
        for(int i = 1 ; i < n ;i++){
            dp[i] = max(dp[i-1]+arr[i],arr[i]);
            if(dp[i]>best)
            best = dp[i];
        }
        return best;
    }
};
