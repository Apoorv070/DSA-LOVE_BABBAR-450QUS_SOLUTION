#include <iostream>
using namespace std;
int kadne(int * a,int n){
	int dp[n];
	int best = a[0];
	dp[0] = a[0];
	for(int i = 1 ; i < n ; i++){
		dp[i] = min(dp[i-1]+a[i],a[i]);
		best = min(dp[i],best);
	}
	return best;
}

int main() {
    int n;cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    cin>>arr[i];
    cout<<kadne(arr,n);

}
