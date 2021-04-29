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
    int a[n + 1];
    vector<int> v;
    rep(i, n)
    {
        cin >> a[i];
        v.pb(a[i]);
    }
    sort(v.begin(), v.end());
    int num;
    if (v[0] != v[1])
        num = v[0];
    else
        num = v[n - 1];
    rep(i, n)
    {
        if (a[i] == num)
            cout << i + 1 << endl;
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