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
    int n,m;
    cin>>n>>m;
    ll a[n+1],b[m+1];
    set<pair<ll,ll> >s;
    int t=1;
    rep(i,n)
        cin>>a[i];
    rep(i,m)
        cin>>b[i];
    sort(a,a+n);
    rep(i,n)
        s.insert(mp(a[i],t++));
    set<pair<ll,ll> >::iterator it;
    rep(i,m){
        it=s.ub(mp(b[i]+1,0));
        if(it==s.end())
            cout<<n<<" ";
        else
        {
            cout<<it->second-1<<" ";
        }
    }
	return 0;
}