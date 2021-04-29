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

ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

void solve()
{
    ll n, m;
    cin >> n;
    m = n;
    if (n == 1 || n == 2)
        cout << n << endl;
    else
    {
        if (gcd(n, n - 2) == 1)
            cout << n * (n - 1) * (n - 2) << endl;
        else
        {
            ll res = 0, ans;
            m = n - 2;
            while (m > 0)
            {
                ans = (n * m) / gcd(n, m);
                ans = (ans * (n - 1)) / gcd(ans, n - 1);
                res = max(ans, res);
                m--;
            }
            n--;
            m=n-2;
            while (m > 0)
            {
                ans = (n * m) / gcd(n, m);
                ans = (ans * (n - 1)) / gcd(ans, n - 1);
                res = max(ans, res);
                m--;
            }
            cout << res << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}