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
    int n, x;
    cin >> n;
    vector<int> a, v, y;
    rep(i, n)
    {
        cin >> x;
        a.pb(x);
    }
    sort(a.begin(), a.end());
    v.pb(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            y.pb(a[i]);
        else
        {
            v.pb(a[i]);
        }
    }
    rep(i, v.size())
    {
        cout << v[i] << " ";
    }
    rep(i, y.size())
    {
        cout << y[i] << " ";
    }
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