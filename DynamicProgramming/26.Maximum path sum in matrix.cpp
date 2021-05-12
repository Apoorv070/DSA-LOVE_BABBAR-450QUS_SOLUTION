class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        for (int i = 1; i < N; i++) { 
        for (int j = 0; j < N; j++) { 
  
            // When all paths are possible 
            if (j > 0 && j < N - 1) 
                Matrix[i][j] += max(Matrix[i - 1][j], 
                             max(Matrix[i - 1][j - 1],  
                             Matrix[i - 1][j + 1])); 
  
            // When diagonal right is not possible 
            else if (j > 0) 
                Matrix[i][j] += max(Matrix[i - 1][j], 
                            Matrix[i - 1][j - 1]); 
  
            // When diagonal left is not possible 
            else if (j < N - 1) 
                Matrix[i][j] += max(Matrix[i - 1][j], 
                            Matrix[i - 1][j + 1]); 
  
            // Store max path sum 
        } 
    } 
    int res = 0; 
    for (int j = 0; j < N; j++)  
        res = max(Matrix[N-1][j], res); 
    return res; 
    }
};
