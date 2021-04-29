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
     ll tt,x,y,n;
    cin >> tt;
   while(tt--){
    cin>>x>>y>>n;
    ll a[n+1],b[n+1];
    rep(i,n)
        cin>>a[i];
    rep(i,n)
        cin>>b[i];
    vector<pair<ll,ll> >v;
    rep(i,n)
    {
        v.pb(mp(a[i],b[i]));
    }
    sort(v.begin(),v.end());
    ll cnt,i,flag=0;

    for( i=0;i<n;i++)
    {
        cnt=(ll)ceil((double)(v[i].second)/x);
        y-=(cnt-1)*(v[i].first);
        if(y<=0)
        {
            flag=1;
            break;
        }
        y-=v[i].first;
        if(y<=0)
            break;
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else if(i<n-1)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
    }
    


     
   }
	return 0;
}