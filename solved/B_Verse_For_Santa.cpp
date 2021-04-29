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
     ll tt,n,total_time;
    cin >> tt;
   while(tt--){
    cin>>n>>total_time;
    vector<int>v;
    ll x;
    rep(i,n)
    {
        cin>>x;
        v.pb(x);
    }
    ll ans=0,time_taken=0,cnt=0;
    multiset<pair<ll,int> >s;
    multiset<pair<ll,int> >::iterator it;
    int flag=0;
    rep(i,n)
    {
        time_taken+=v[i];
        s.insert(mp(v[i],i+1));
        if(time_taken>total_time)
        {
            if(flag==0)
            {
            it=s.end();
            it--;
            time_taken-=it->first;
            ans=it->second;
            s.erase(it);
            cnt--;
            flag=1;
            }
            else
                break;
        }
        cnt++;
    }
    cout<<ans<<endl;
     
    }
	return 0;
}