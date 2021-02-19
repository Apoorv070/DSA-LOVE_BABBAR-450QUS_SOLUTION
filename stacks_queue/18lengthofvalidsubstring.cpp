class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<char> f;
        stack<int> se;
        se.push(-1);
        int len = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(f.empty()&&s[i]==')'){
                se.push(i);
            }else if(s[i]=='('){
                f.push(s[i]);
                se.push(i);
            }else if(f.top()=='('&&s[i]==')'){
                f.pop();
                se.pop();
                len = max(i - se.top(),len);

            }
        }
        
        return len;
    }
};
