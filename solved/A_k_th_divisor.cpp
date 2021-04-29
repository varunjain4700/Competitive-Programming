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
     ll n,k;
//     cin >> tt;
//    while(tt--){
    cin>>n>>k;
    vector<ll>v;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
           v.pb(i);
           if(n/i!=i)
                v.pb(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<k)
        cout<<-1;
    else 
        cout<<v[k-1];
    
     
    // }
	return 0;
}