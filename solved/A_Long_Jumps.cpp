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
    int n;
    cin >> n;
    ll a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll dp[n + 1];
    memset(dp, 0, sizeof(dp));
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i + a[i] <= n - 1)
        {
            dp[i] = a[i] + dp[i + a[i]];
        }
        else
        {
            dp[i] = a[i];
        }
        ans = max(ans, dp[i]);
        // cout<<dp[i]<<" ";
    }
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