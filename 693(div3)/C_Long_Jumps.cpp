#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)

ll solve(ll a[],int n){
    ll dp[n+1];
    memset(dp,0,sizeof(dp));
    ll ans=INT_MIN;
    for(int i=1;i<=n;i++)
        dp[i]=a[i];

    for(int i=n;i>=1;i--){
        if(i+a[i]<=n)
        dp[i]+=dp[i+a[i]];
        ans=max(ans,dp[i]);
    }
    return ans;   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
    ll a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<solve(a,n)<<endl;   
    }
	return 0;
}