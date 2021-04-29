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

void solve(){
    int n,u,v;
    cin>>n>>u>>v;
    int a[n+1];
    rep(i,n)
        cin>>a[i];
    int ans=0;
    int i;
    for( i=1;i<n;i++){
        if(abs(a[i]-a[i-1])>1){
            ans=0;
            break;
        }
        else if(abs(a[i]-a[i-1])==1){
            ans=min(u,v);
        }
    }
    if(ans==0&&i==n)
    ans=min(2*v,u+v);
    cout<<ans<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while(tt--)
        solve();

	return 0;
}