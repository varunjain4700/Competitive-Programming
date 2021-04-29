#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,k;
    cin >> tt;
   while(tt--){
    cin>>n>>k;
    ll x=ceil(sqrt((double)n));
    ll ans=INT_MAX;
    for(ll i=1;i<=x;i++){
        if(n%i==0&&i<=k){
            ans=min(ans,n/i);
        if(n/i<=k){
            ans=min(ans,i);
        }
        }     
    }
  cout<<ans<<endl;     
    }
	return 0;
}