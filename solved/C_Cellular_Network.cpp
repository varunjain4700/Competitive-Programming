#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,m;
   // cin >> tt;
  // while(tt--){
    cin>>n>>m;
    vector<ll>a,b;
    vector<ll>::iterator it;
    ll x;
    rep(i,n){
        cin>>x;
        a.pb(x);
    }
    rep(i,m){
        cin>>x;
        b.pb(x);
    }
    ll temp_ans=0,ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        temp_ans=INT_MAX;
        it=lower_bound(b.begin(),b.end(),a[i]);
        if(it==b.end())
            it--;
        temp_ans=min(temp_ans,abs(*it-a[i]));
        if(it!=b.begin())
            it--;
        temp_ans=min(temp_ans,abs(*it-a[i]));
        ans=max(ans,temp_ans);
    }
    cout<<ans<<endl;
     
   // }
	return 0;
}