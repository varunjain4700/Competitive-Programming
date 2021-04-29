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
    int n, m, x;
    cin >> n >> m;
    vector<int> a;
    rep(i, n)
    {
        cin >> x;
        a.pb(x);
    }
    int cnt[100001];
    memset(cnt, 0, sizeof(cnt));
    rep(i, n)
    {
        int rem = a[i] % m;
        cnt[rem]++;
    }
    int ans = 0;
    if (cnt[0] > 0)
        ans++;
    for (int i = 1; i < m; i++)
    {
        if (cnt[i] > 0)
        {
            int minm = min(cnt[i], cnt[m - i]);
            int maxm = max(cnt[i], cnt[m - i]);
            if (maxm == minm)
                ans++;
            else
                ans += maxm - (minm + 1) + 1;
            cnt[m - i] = 0;
        }
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