class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here    
        // if(n==1)
        // return false;
        
        bool ans = false;
        long long int count = 0;
        while(n){
            n = n&(n-1);
            count++;
        }
        if(count==1)
        ans = true;
        return ans;
        
        
    }
};
