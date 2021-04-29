#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define endl "\n"
#define mod 1000000007
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n - 1; i >= 0; i--)

void solve()
{
    ll n, k, x;
    cin >> n >> k;
    set<ll> s;
    map<ll, ll> m;
    ll maximum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
        m[x]++;
        maximum = max(maximum, x);
    }
    vector<int> v;
    for (int i = 0; i <= n; i++)
    {
        if (m[i] == 0){
            v.pb(i);
        }
    }
    ll ans = 0;
    if (v[0] > maximum)
    {
        ans += s.size() + k;
        cout<<ans<<endl;
    }
    else
    {
        int j=0;
        for(int i=0;i<k;i++){
        ll num=(ll)ceil((v[j]+maximum)/(double)2);
        s.insert(num);
        m[num]++;
        //cout<<num<<" ";
        if(m[num]>1){
            cout<<s.size()<<endl;
            return;
        }
        maximum=max(maximum,num);
        if(num==v[j])
            j++;
        }
        cout<<s.size()<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        solve();

    return 0;
}