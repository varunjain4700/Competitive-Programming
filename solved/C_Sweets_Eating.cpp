#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,m;
//     cin >> tt;
//    while(tt--){
    cin>>n>>m;
    ll a[n+1];
    rep(i,n)
        cin>>a[i];
    sort(a,a+n);
    ll dp[n+1],sum=0;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<m;i++)
    {
        dp[i]=a[i];
        sum+=dp[i];
        cout<<sum<<" ";
    }
    for(int i=m;i<n;i++)
    {
        dp[i]=a[i]+dp[i-m];
        sum+=dp[i];
        cout<<sum<<" ";
    }
     
//    }
	return 0;
}