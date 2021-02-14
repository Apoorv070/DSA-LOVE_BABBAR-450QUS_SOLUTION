int evaluatePostfix(string S)
{
    // Your code here
    stack<int> s;
    for(int i = 0 ; i <S.length() ; i++){
        
        if(S[i]=='+'||S[i]=='/'||S[i]=='*'||S[i]=='-'){
            //if (!s) return -1; 
            char val = S[i];
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
            switch(val){
                case '+' : 

                         s.push(a+b);
                         break;
                case '-' : 

                         s.push(b-a);
                         break;
                case '*' : 
 
                         s.push(a*b);
                         break;
                case '/' : 

                         s.push(b/a);
                         break;         
                    
            }
        }else{
            //if (!s) return -1; 
            //int val = (int)s[i];
            //int val = S[i]-'0';
            s.push(S[i]-'0');
        }
    }
    return s.top();
}
