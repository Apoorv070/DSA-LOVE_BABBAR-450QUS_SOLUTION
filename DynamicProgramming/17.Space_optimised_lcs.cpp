// Space optimized C++ implementation
// of LCS problem
#include<bits/stdc++.h>
using namespace std;

int lcs(string &X, string &Y)
{
	
	// Find lengths of two strings
	int m = X.length(), n = Y.length();

	int L[2][n + 1];


	int flag = 0;

	for (int i = 0; i <= m; i++)
	{
		
		// Compute current
		// binary index
		

		for (int j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
				L[flag][j] = 0;

			else if (X[i-1] == Y[j-1])
				L[flag][j] = L[1-flag][j - 1] + 1;

			else
				L[flag][j] = max(L[1-flag][j],
							L[flag][j - 1]);
		}

        flag = 1-flag;
	}


	return L[1-flag][n];
}

int main()
{
	string X = "AGGTAB";
	string Y = "GXTXAYB";

	printf("Length of LCS is %d\n", lcs(X, Y));

	return 0;
}
