#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)

bool cmp(pair<ll,ll>&a,pair<ll,ll>&b)
{
    return a.first>b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
     ll a[n+1],b[n+1];
    rep(i,n)
        cin>>a[i];
    rep(i,n)
        cin>>b[i];
    vector<pair<ll,ll> >v;
    for(int i=0;i<n;i++)
        v.pb(mp(a[i],b[i]));

    sort(v.begin(),v.end(),cmp);
    ll picking_time=0;
     ll delivery_time=0;
    if(v[0].first<=v[0].second)
       {
           cout<<v[0].first<<endl;
       }
    else
    {
        picking_time+=v[0].second;
        int i;
        for( i=1;i<n;i++)
        {
            if(max(delivery_time,v[i].first)<=v[i].second+picking_time)
            {
                cout<<max(v[i].first,picking_time)<<endl;
                break;
            }
            else
            {
                picking_time+=v[i].second;
            }  
        }
        if(i==n)
        cout<<picking_time<<endl;
    }
  
    }
	return 0;
}