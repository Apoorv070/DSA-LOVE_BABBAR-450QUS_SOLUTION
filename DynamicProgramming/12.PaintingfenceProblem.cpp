#define mod 1000000007
class Solution{
    public:
    long long countWays(int n, int k){
        // code 
        if(n==1)
        return k;
        
        long long same =k;
        long long diff =(k*(k-1))%mod;
        long long total = (same%mod+ diff%mod)%mod;
        for(int i = 3 ; i<= n  ; i++){
            same = diff;
            diff = (total%mod*(k-1)%mod)%mod;
            total = (same%mod+diff%mod)%mod;
        }
        
        return total;
    
}
};

//https://www.youtube.com/watch?v=ju8vrEAsa3Q
