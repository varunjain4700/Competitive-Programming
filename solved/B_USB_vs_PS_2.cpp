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
     ll a,b,c,m;
//     cin >> tt;
//    while(tt--){
    cin>>a>>b>>c;
    cin>>m;
    vector<pair<ll,string> >v;
    ll x;string y;
    rep(i,m)
    {
        cin>>x>>y;
        v.pb(mp(x,y));
    }
    sort(v.begin(),v.end());
    ll cnt=0,cost=0;
    for(int i=0;i<m;i++)
    {
        if(a>0 && v[i].second=="USB")
            a--;
        else if(b>0 && v[i].second=="PS/2")
            b--;
        else if(c>0)
            c--;
        else
        {
            continue;
        }
        cnt++;
        cost+=v[i].first;  
    }
    cout<<cnt<<" "<<cost<<endl;
     
   // }
	return 0;
}