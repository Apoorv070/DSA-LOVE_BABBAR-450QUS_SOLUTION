class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes hereint 
	    int dp[n];
	    dp[0] = arr[0];
	    int ans = arr[0];
	    for(int i = 1  ; i<n ; i++){
	        dp[i] = arr[i];
	        int val = arr[i];
	        for(int j = i-1 ; j>=0 ; j--){
	            if(arr[i]>arr[j]){
	                dp[i] = max(val+dp[j],dp[i]); 
	            }
	            ans = max(ans,dp[i]);
	        }
	    }
	   // for(int i = 0; i<n ; i++){
	   //     cout<<dp[i]<<" ";
	   // }
	    
	    return ans;
	}  
};
