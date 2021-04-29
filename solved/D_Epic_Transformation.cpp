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
    map<int, int> m;
    int maxm = 0;
    rep(i, n)
    {
        cin >> x;
        m[x]++;
        maxm = max(m[x], maxm);
    }
    int ans = 0;
    if (maxm <= n - maxm)
        ans = 0;
    else
        ans = maxm - (n - maxm);
    if (n % 2 == 1)
        ans = max(ans, 1);
    cout << ans << endl;
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