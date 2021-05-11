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
    int x, y;
    cin >> x >> y;
    int n = 1;
    while ((x + y) > n * n)
        n++;
    if ((x + y) != n * n)
    {
        cout << "NO" << endl;
        return;
    }
    int odd = n - 1, even = 1;
    bool f = 0;
    while (odd >= 0)
    {
        if (2 * odd * even == y)
        {
            f = 1;
            break;
        }
        even++;
        odd--;
    }
    if (!f)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    cout << n << endl;
    for (int i = 1; i <= odd; i++)
        cout << 1 << " " << i + 1 << endl;
    for (int i = 1; i < even; i++)
        cout << 2 << " " << odd + i + 1 << endl;
    return;
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