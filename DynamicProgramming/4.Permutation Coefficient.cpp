int permutationCoeff(int n, int k)
{
    int P[n + 1][k + 1];
 
    // Calculate value of Permutation
    // Coefficient in bottom up manner
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= std::min(i, k); j++)
        {
            // Base Cases
            if (j == 0)
                P[i][j] = 1;
 
            // Calculate value using
            // previosly stored values
            else
                P[i][j] = P[i - 1][j] +
                        (j * P[i - 1][j - 1]);
 
            // This step is important
            // as P(i,j)=0 for j>i
            P[i][j + 1] = 0;
        }
    }
    return P[n][k];
}
