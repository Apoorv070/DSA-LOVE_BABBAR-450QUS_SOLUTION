    bool checkpos(int num,int ind){
        return num&(1<<ind);
    }
    
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int ans = 0;
        for(auto x : nums){
            ans = ans^x;
        }
        
        int val = ans;
        int pos = 0;
        while(val>0){
            if(val&1==1){
                break;
            }
            val = val>>1;
            pos++;
        }
        
        int ans1 =0,ans2=0;
        for(auto x:nums){
            if(checkpos(x,pos)){
                ans1 = ans1^x;
            }else{
                ans2 = ans2^x;
            }
        }
        
        vector<int> v;
        v.push_back(ans1);
        v.push_back(ans2);
        sort(v.begin(),v.end());
        return v;
    }
