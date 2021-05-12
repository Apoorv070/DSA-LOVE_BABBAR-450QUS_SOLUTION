class Solution{
public:	
    bool allones(string s, int n)
    {
        // Checking each index is 0 or not.
        int co = 0;
        for (int i = 0; i < s.size(); i++)
            co += (s[i] == '1');
 
        return (co == n);
    }
    

    int curr_val = 0;
    int ans = -1;
	int maxSubstring(string S)
	{
	    string s = S;
	    int n = s.length();
	    if(allones(s,n))return -1;
	    int ans = -1;
	    for(int i = 0 ; i < s.length() ; i++){
	        int val = 0;
	        if(s[i]=='1'){
	            val=-1;
	        }else{
	            val=1;
	        }
	        //Basic Kaadne algorithm
	        if(curr_val>0){
	            curr_val +=val;
	        }else{
	            curr_val = val;
	        }
	        
	        ans = max(ans,curr_val);
	    }
	    return ans;
	    
	    
	}
};
