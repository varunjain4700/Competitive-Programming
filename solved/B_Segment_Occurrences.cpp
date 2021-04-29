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
    int n, m, q;
    cin >> n >> m >> q;
    string s, t;
    cin >> s >> t;
    int p[n + 1];
    memset(p, 0, sizeof(p));
    for (int i = 0; i < n - m + 1; i++)
    {
        int j, k;
        k = 0;
        for (j = i; j < i + m; j++)
        {
            if (s[j] != t[k])
                break;
            k++;
        }
        if (j == i + m)
            p[j - 1]++;
    }
    int pre[n + 1];
    memset(pre, 0, sizeof(pre));
    pre[0] = p[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] += p[i] + pre[i - 1];
    }
    int l, r, ans;
    rep(i, q)
    {
        cin >> l >> r;
        l--;
        r--;
        l += (m - 1) - 1;
        //cout << l << " " << r << endl;
        if (l > r)
        {
            cout << 0 << endl;
        }
        else
        {
            ans = pre[r];
            if (l >= 0)
                ans -= pre[l];
            cout << ans << endl;
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