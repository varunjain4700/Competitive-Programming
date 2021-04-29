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
     ll tt,n,k;
    cin >> tt;
   while(tt--){
    cin>>n>>k;
    vector<ll>p;
    ll x;
    rep(i,n)
    {
        cin>>x;
        p.pb(x);
    }
    double s=((double)k/100);
    double coeff;
    ll prefix_sum=p[0],ans=0,t;
    for(int i=1;i<n;i++)
    {
        coeff=(double)p[i]/prefix_sum;
       // cout<<coeff<<" ";
        if(s<coeff)
        {
            t=(ll)(ceil((p[i]*100)/(double)k));
           // cout<<t-prefix_sum<<endl;
            ans+=(t-prefix_sum);
            prefix_sum=t;
        }
        prefix_sum+=p[i];
      //  cout<<prefix_sum<<" ";
    }
    cout<<ans<<endl;
     
    }
	return 0;
}