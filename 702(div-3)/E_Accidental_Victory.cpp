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
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
    ll a[n+1],b[n+1];
    rep(i,n)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    ll prefix_sum[n+1];
    memset(prefix_sum,0,sizeof(prefix_sum));
    prefix_sum[0]=a[0];
    for(int i=1;i<n;i++)
        prefix_sum[i]+=prefix_sum[i-1]+a[i];
    int ans=1;
    set<ll>s;
    s.insert(a[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        if(prefix_sum[i]>=a[i+1])
        {
            ans++;
            s.insert(a[i]);
        }
        else
            break;
    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++)
    {
        if(s.find(b[i])!=s.end())
            cout<<i+1<<" ";
    }
    cout<<endl;
    

     
    }
	return 0;
}