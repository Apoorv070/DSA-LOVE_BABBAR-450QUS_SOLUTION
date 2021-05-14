#include <bits/stdc++.h>
using namespace std;
 
int n, dp[1000][1000];
string str = "abcb";
 
// Function return the total
// palindromic subsequence
int countPS(int i, int j)
{
 
    if (i > j)
        return 0;
 
    if (dp[i][j] != -1)
        return dp[i][j];
 
    if (i == j)
        return dp[i][j] = 1;
 
    else if (str[i] == str[j])
        return dp[i][j]
               = countPS(i + 1, j) +
                countPS(i, j - 1) + 1;
 
    else
        return dp[i][j] = countPS(i + 1, j) +
                          countPS(i, j - 1) -
                          countPS(i + 1, j - 1);
}
 
// Driver code
int main()
{
    memset(dp, -1, sizeof(dp));
    n = str.size();
    cout << "Total palindromic subsequence are : "
         << countPS(0, n - 1) << endl;
    return 0;
}
















/////////////////////////////////////////////////
long long int  countPS(string str)
    {
       //Your code here
        string s = str;
        int n = s.length();   
        
        long long int dp[n][n];
        for(int gap = 0 ; gap <n ; gap++){
             for(int i = 0 ,j=gap ; j < n ; i++,j++ ){
                 if(gap==0){
                     dp[i][j] = 1;
                     continue;
                 }
                
                if(gap==1){
                     if(s[i]==s[j]){
                         dp[i][j] = 3;
                     }else{
                         dp[i][j] = 2;
                    }
                    continue;
                }
             
             if(s[i]==s[j]){
                 dp[i][j] = dp[i][j-1]+dp[i+1][j]+1;
                
             }else{
                 dp[i][j] = dp[i][j-1]+dp[i+1][j]-dp[i+1][j-1];
             }
             
         }
     }
    return dp[0][n-1];
    }
