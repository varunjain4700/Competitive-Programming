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
     ll tt,n,q,k;
//     cin >> tt;
//    while(tt--){
    cin>>n>>q>>k;
    ll a[n+1];
    ll x,y;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    ll b[n+1],pre_sum[n+1];
    memset(pre_sum,0,sizeof(pre_sum));
    for(int i=2;i<=n-1;i++)
    {
        b[i]=a[i+1]-a[i-1]-2;
        pre_sum[i]+=pre_sum[i-1]+b[i];
        //cout<<pre_sum[i]<<" ";
    }

    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        ans=0;
        if(x==y)
            ans=k-1;
        else 
        {
            if(a[x+1]-2>0)
                ans+=a[x+1]-2;
            if(k-a[y-1]-1>0)
                ans+=k-a[y-1]-1;
           // cout<<ans<<" ";
            if(y-x>1)
            {
                ans+=pre_sum[y-1]-pre_sum[x];
            }
        }
        cout<<ans<<endl;

    }
    
     
//    }
	return 0;
}