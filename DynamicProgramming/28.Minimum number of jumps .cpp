///https://leetcode.com/problems/jump-game-ii/  Problem


class Solution {
public:
    int jump(vector<int>& nums) {
    int n = nums.size();
    if(nums[0]==0){
        return 0;
    }else if(n==1){
        return 0;
    }else{
    int maxReachable , jumps  , stepsPossible ;  

    maxReachable = nums[0] ; 
    jumps = 1 ; 
    stepsPossible = nums[0] ; 

    for(int i = 1 ; i<n ; i++){
        if(i==n-1) return jumps ;  
        
        maxReachable = max(maxReachable , i+nums[i]);

        stepsPossible-- ; 

        if(stepsPossible==0){
            jumps++ ; 
            if(i>=maxReachable) return -1;
            stepsPossible = maxReachable - i ; 
         }
      }
        
      return jumps;  
        
        
        
        
        
    }

    
     
    
    }
};
