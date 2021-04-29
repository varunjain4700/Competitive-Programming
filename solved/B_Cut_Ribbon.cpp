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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    // int ans = 1, x;
    // for (int i = 0; i <= 4000; i++)
    // {
    //     for (int j = 0; j <= 4000; j++)
    //     {
    //         x = n - (a * i + b * j);
    //         if (x < 0)
    //             break;
    //         if (x % c == 0)
    //             ans = max(ans, i + j + x / c);
    //     }
    // }
    // cout << ans << endl;
    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = INT_MIN;
        if (i >= a)
            dp[i] = max(dp[i], dp[i - a] + 1);
        if (i >= b)
            dp[i] = max(dp[i], dp[i - b] + 1);
        if (i >= c)
            dp[i] = max(dp[i], dp[i - c] + 1);
        //cout<<dp[i]<<" ";
    }
    cout << dp[n] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}