class Solution {
public:
    string longestPalindrome(string s) {
     int n = s.length();   
     pair<int,int> p;
     bool dp[n][n];
     for(int gap = 0 ; gap <n ; gap++){
         for(int i = 0 ,j=gap ; j < n ; i++,j++ ){
             if(gap==0){
                 dp[i][j] = true;
                 p.first = i;
                 p.second = j;
                 continue;
             }
             
             if(gap==1){
                 if(s[i]==s[j]){
                     dp[i][j] = true;
                     p.first = i;
                     p.second = j;
                 }else{
                     dp[i][j] = false;
                 }
                 continue;
             }
             
             if(s[i]==s[j]&&dp[i+1][j-1]==true){
                 dp[i][j] = true;
                 p.first = i;
                 p.second = j;
             }else{
                 dp[i][j] = false;
             }
             
         }
     }
    //cout<<p.first<<p.second; 
    return s.substr(p.first,(p.second-p.first+1));
        
    }
};
