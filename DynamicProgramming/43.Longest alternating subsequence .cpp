//////////////////////This dp approach will give TLE
class Solution {
	public:
		int AlternatingaMaxLength(vector<int>&nums){
		    // Code here
		    int n = nums.size();
		    vector<int> a = nums;
		    int dp[n][2];
		    for(int i = 0 ; i < n  ; i++){
		        dp[i][0] = dp[i][1] = 1;
		    }
		    int ma = 1;
		    for(int i = 1 ; i < n ; i++){
		        for(int j = 0 ; j < i ; j++){
		            if(a[j]<a[i]and dp[j][1]+1>dp[i][0]){dp[i][0] = dp[j][1]+1;}
		            else if(a[j]>a[i] and dp[j][0]+1>dp[i][1]){dp[i][1] = dp[j][0]+1;}
		            else{continue;}
		        }
		        ma = max(ma,max(dp[i][0],dp[i][1]));
		    }
		    return ma;
		    
		}

};





///////////////////////////////o(n) soln
		int AlternatingaMaxLength(vector<int>&nums){
		    // Code here
		    int n = nums.size();
		    int ma =1,mi=1;
		    for(int i =  1 ; i<n ; i++){
		        if(nums[i]>nums[i-1]){
		            ma = mi+1;
		        }else if(nums[i]<nums[i-1]){
		            mi = ma+1;
		        }else continue;
		    }
		    return max(mi,ma);
		}
