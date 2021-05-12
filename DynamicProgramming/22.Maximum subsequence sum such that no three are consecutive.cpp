#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define s second
#define ll long long int
#define ub upper_bound
#define lb lower_bound
#define ld long double
#define in insert
#define bs binary_search
#define np(s) next_permutation(s.begin(),s.end())
#define mp              make_pair
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX  1000001
const ll max_i=1e18+7;
const int dx[]={1,0,-1,0,-1,1,1,-1};
const int dy[]={0,1,0,-1,-1,1,-1,1};
const char dir[]={'D','R','U','L'};
const ll mod=1e9+7;
const ll N=1e6+5;
void imp(){
    FIO;
}

ll kadne(ll * a,ll n){
	ll dp[n];
	ll best = a[0];
	dp[0] = a[0];
	for(int i = 1 ; i < n ; i++){
		dp[i] = max(dp[i-1]+a[i],a[i]);
		best = max(dp[i],best);
	}
	return best;
}

void arr_inp(int *arr,int n){
	for(int i = 0 ; i  < n ; i++)
		cin>>arr[i];

}

void print(int * arr,int n){
	for(int i = 0 ; i < n ;i++)
		cout<<arr[i]<<" ";
}
void print_2d(ll ** arr,int n,int m){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int solve(){
    int n;cin>>n;
    int arr[n];
    arr_inp(arr,n);
    if(n==1)
    return arr[0];
    
    int dp[n+1];
    dp[0]=0;
    dp[1]=arr[0];
    dp[2]=arr[0]+arr[1];
    for(int i = 3 ; i<=n ; i++){
        dp[i] = max(arr[i-1]+dp[i-2],max(arr[i-1]+arr[i-2]+dp[i-3],dp[i-1]));
    }
    return dp[n];
}

int main(){
  imp();
  // int t;cin>>t;
  // while(t--)
  cout<<solve();
  return 0;
}
