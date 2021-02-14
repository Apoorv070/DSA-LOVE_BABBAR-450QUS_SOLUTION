bool ispar(string x)
{
    // Your code here
    stack<char> s;
    bool ans = true;
    for(int i = 0 ; i< x.length() ; i++){
        if(x[i]=='['||x[i]=='{'||x[i]=='(')
            s.push(x[i]);
        else{
            if(x[i]==')'){
                if(s.size()==0){
                    ans = false;
                    break;
                }
                if(s.top()=='(')
                s.pop();
                else
                ans=false;
            }else if(x[i]=='}'){
                 if(s.size()==0){
                    ans = false;
                    break;
                }
                
            
                if(s.top()=='{')
                s.pop();
                else
                ans=false;
            }else{
                 if(s.size()==0){
                    ans = false;
                    break;
                }
                
                if(s.top()=='[')
                s.pop();
                else
                ans=false;
            }
        }
    }
    
    if(s.size()!=0)
    ans = false;
    return ans;
}
