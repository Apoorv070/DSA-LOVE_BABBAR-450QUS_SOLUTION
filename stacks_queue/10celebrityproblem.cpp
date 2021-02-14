class Solution {
    public:
    int celebrity(vector<vector<int> >& M, int n) {
        // code here 
        stack<int> s;
        for(int i = 0  ; i < n ; i++){
            s.push(i);
        }
        
        while(s.size()!=0){
            int a = s.top();
            int b = 0;
            s.pop();
            if(s.size()==0){
                s.push(a);
                break;
            }
            //break;
            else{
                b = s.top();
                s.pop();
            }
            
            
            if(M[a][b]==1){
                s.push(b);
            }else{
                s.push(a);
            }
        }
        
        int a =  s.top();
        bool ans = true;
        for(int i=0;i<n;i++){
            if(M[a][i]==1){
                ans = false;
                break;
            }
        }
        
        for(int i = 0; i<n ; i++){
            if(M[i][a]==0&&i!=a){
                ans = false;
                break;
            }
        }
        
        if(ans==true)
            return a;
        else
            return -1;
        
        
    }
};
