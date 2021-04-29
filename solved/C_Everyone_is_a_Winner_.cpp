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
    ll n;
    cin >> n;
    vector<ll> v;
    v.pb(0);
    for (int i = 1; i * i <= n; i++)
    {
        v.pb(i);
        if (n / i != i)
            v.pb(n / i);
    }
    cout << v.size() << endl;
    sort(v.begin(), v.end());
    rep(i, v.size())
            cout
        << v[i] << " ";
    cout << endl;
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