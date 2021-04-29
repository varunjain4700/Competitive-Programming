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
int tc = 0;

void solve()
{
    tc++;
    ll n, d;
    cin >> n >> d;
    vector<int> v;
    ll x;
    rep(i, n)
    {
        cin >> x;
        v.pb(x);
    }
    ll ans = (d / v[n - 1]) * v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (ans % v[i])
        {
            ans = (ans / v[i]) * v[i];
        }
    }
    cout << "Case #" << tc << ": " << ans << endl;
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