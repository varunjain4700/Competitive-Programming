#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

ll gcd(ll x, ll y)
{
    if (x == 0)
        return y;
    else if (y == 0)
        return x;
    else if (x >= y)
        return gcd(x % y, y);
    else
        return gcd(x, y % x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n, k, x;
    cin >> tt;
    while (tt--)
    {
        cin >> k >> x;
        ll a, b;
        ll sum = INT_MAX;
        for (ll i = ceil(sqrt(x)); i >= 1; i--)
        {
            if (x % i == 0)
            {
                a = i;
                b = x / i;
                if (gcd(a, b) == 1)
                {
                    sum = min(sum, a + b);
                }
            }
        }
        // cout<<a<<" "<<b<<endl;
        for (ll i = 3; i <= k; i++)
            sum += 1;
        cout << sum << endl;
    }
    return 0;
}