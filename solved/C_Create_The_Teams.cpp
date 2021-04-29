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
     ll tt,n,x;
    cin >> tt;
   while(tt--){
    cin>>n>>x;
    vector<int>v;
    int y;
    rep(i,n)
    {
        cin>>y;
        v.pb(y);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    ll sum=0;
    int cnt=0,minimum=0,ans=0;
    rep(i,n)
    {
        sum+=v[i];
        cnt++;
        minimum=v[i];
        if(cnt*minimum>=x)
        {
            ans++;
            cnt=0;
            sum=0;
        }
    }
    cout<<ans<<endl;
  
    }
	return 0;
}