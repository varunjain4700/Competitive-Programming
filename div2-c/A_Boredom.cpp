#include <bits/stdc++.h>
#include <unordered_map>
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
    int a[n + 1];
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    unordered_map<ll, ll> m;
    rep(i, n)
    {
        m[a[i]]++;
    }
    ll dp[100001];
    memset(dp, 0, sizeof(dp));
    dp[1] = m[1];
    for (int i = 2; i <= a[n - 1]; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + m[i] * i);
    }
    cout << dp[a[n - 1]] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}