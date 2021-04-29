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
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s;
    t = s;
    int pos, cnt = 0, idx;
    rep(i, n)
    {
        if (s[i] == '*')
        {
            s[i] = 'x';
            idx = i;
            cnt++;
            break;
        }
    }

    for (int i = idx + 1; i < n; i++)
    {
        int j, pos = -1;
        for (j = i; j < i + k; j++)
        {
            if (s[j] == '*'&&j<n)
                pos = j;
        }
        if (pos != -1)
        {
            s[pos] = 'x';
            i = pos;
            cnt++;
        }
        else
        {
            i = j - 1;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'x')
            break;
        else if (s[i] == '*')
        {
            s[i] = 'x';
            cnt++;
            break;
        }
    }
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (t[i] == '*')
        {
            t[i] = 'x';
            idx = i;
            ans++;
            break;
        }
    }
    for (int i = idx - 1; i >= 0; i--)
    {
        int j, pos = -1;
        for (j = i; j > i - k; j--)
        {
            if (t[j] == '*'&&j>=0)
                pos = j;
        }
        if (pos != -1)
        {
            t[pos] = 'x';
            i = pos;
            ans++;
        }
        else
        {
            i = j + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (t[i] == 'x')
            break;
        else if (t[i] == '*')
        {
            t[i] = 'x';
            ans++;
            break;
        }
    }
    //cout<<cnt<<" "<<ans<<endl;
    ans = min(ans, cnt);
    // cout << t << endl;
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