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

ll power(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}
int sumofdigits(ll x)
{
    int cnt = 0;
    while (x > 0)
    {
        cnt++;
        x /= 10;
    }
    return cnt;
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    ll x, y;
    ll z = power(10, c - 1);
    x = y = z;
    while (sumofdigits(x) != a)
    {
        x *= 2;
    }
    while (sumofdigits(y) != b)
    {
        y *= 3;
    }
    cout << x << " " << y << endl;
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