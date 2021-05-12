///Recruence  ////Knapsack approach
    int maxSumPairWithDifferenceLessThan(int arr[], int N, int K)
    {
        // Your code goes here   
        if(N==0||N==1)
        return 0;
        
        
        if(arr[1]-arr[0]<K)
        return  max(maxSumPairWithDifferenceLessThan(arr+1,N-1,K),arr[1]+arr[0]+maxSumPairWithDifferenceLessThan(arr+2,N-2,K));
        else
        return maxSumPairWithDifferenceLessThan(arr+1,N-1,K);
        //return op1+op2;
    }
    
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        // Your code goes here   
        sort(arr,arr+N);
        //reverse(arr,arr+N);
        return maxSumPairWithDifferenceLessThan(arr,N,K);
    }



////DP Approach
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
    
        sort(arr, arr+N);
        int dp[N];
        dp[0] = 0;
 
    for (int i = 1; i < N; i++)
    {
        
        dp[i] = dp[i-1];
 
        
        if (arr[i] - arr[i-1] < K)
        {

            if (i >= 2)
                dp[i] = max(dp[i], dp[i-2] + arr[i] + arr[i-1]);
            else
                dp[i] = max(dp[i], arr[i] + arr[i-1]);
        }
    }
 
    return dp[N - 1];
}
