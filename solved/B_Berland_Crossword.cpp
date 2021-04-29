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
    int n, u, r, d, l;
    cin >> n >> u >> r >> d >> l;
    int u1 = u, d1 = d, l1 = l, r1 = r;
    if (u == n)
    {
        l1--;
        r1--;
    }
    if (r == n)
    {
        u1--;
        d1--;
    }
    if (d == n)
    {
        r1--;
        l1--;
    }
    if (l == n)
    {
        u1--;
        d1--;
    }
    if (u == n - 1)
    {
        if (l1 > r1)
            l1--;
        else
            r1--;
    }
    if (d == n - 1)
    {
        if (l1 > r1)
            l1--;
        else
            r1--;
    }
    if (r == n - 1)
    {
        if (u1 > d1)
            u1--;
        else
            d1--;
    }
    if (l == n - 1)
    {
        if (u1 > d1)
            u1--;
        else
            d1--;
    }
    if (u1 < 0 || d1 < 0 || r1 < 0 || l1 < 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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