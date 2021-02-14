vector<long long> nextLargerElement(vector<long long> arr, int n){
    // Your code here
    stack<long long> s;
    vector<long long> v;
    for(int i  = n-1 ; i>=0 ; i--){
        if(i==n-1){
            v.push_back(-1);
            s.push(arr[i]);
            continue;
        }
        
        if(arr[i]<s.top()){
            v.push_back(s.top());
            s.push(arr[i]);
            continue;
        }else{
            while(s.size()!=0&&arr[i]>s.top()){
                s.pop();
            }
            
            if(s.size()==0){
                v.push_back(-1);
                s.push(arr[i]);
            }else{
                v.push_back(s.top());
                s.push(arr[i]);
            }
        }
    
    }
    
    reverse(v.begin(), v.end()); 
    return v;
}
