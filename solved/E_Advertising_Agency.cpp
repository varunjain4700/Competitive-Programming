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

ll power(ll x, ll y, ll p)
{
    ll res = 1; 
 
    x = x % p; 
 
    while (y > 0) 
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1; 
        x = (x * x) % p;
    }
    return res;
}

ll modInverse(ll n)
{
    return power(n, mod - 2, mod);
}
 
// Returns nCr % p using Fermat's little
// theorem.
ll nCr(ll n,ll r)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    ll fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % mod;
 
    return (fac[n] * modInverse(fac[r]) % mod
            * modInverse(fac[n - r]) % mod)
           % mod;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,k;
    cin >> tt;
   while(tt--){
    cin>>n>>k;
    int a[n+1];
    map<int,int>m;
    set<int>s;
    rep(i,n)
    {
        cin>>a[i];
        m[a[i]]++;
        s.insert(a[i]);
    }
    sort(a,a+n);
    int r[n+1];
    memset(r,0,sizeof(r));
    r[0]=1;
    int j=0;
    for(int i=n-2;i>=n-k;i--)
    {
        if(a[i]!=a[i+1])
        {
            j++;
        }
        r[j]+=1;
    }
    set<int>::iterator it;
    it=s.end();
    it--;
    int cnt=0;
    ll ans=1;
    for(;it!=s.begin();it--)
    {
        ans=((ans%mod)*(nCr(m[*it],r[cnt])%mod))%mod;
        cnt++;
        if(r[cnt]==0)
            break;
    }
    if(r[cnt]!=0)
    ans=((ans%mod)*(nCr(m[*it],r[cnt])%mod))%mod;

    cout<<ans<<endl;
     
    }
	return 0;
}