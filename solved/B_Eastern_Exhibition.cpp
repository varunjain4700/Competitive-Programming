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
    ll x[n+1],y[n+1];
    rep(i,n)
        cin>>x[i]>>y[i];
    sort(x,x+n);
    sort(y,y+n);
    if((n&1)==1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<(x[n/2]-x[n/2 -1]+1)*(y[n/2]-y[n/2 -1]+1)<<endl;
    }

    
     
    }
	return 0;
}