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
ll tc = 0;

void solve()
{
    tc++;
    ll x, y, n;
    string s;
    cin >> x >> y >> s;
    n = s.size();
    char p = 'a';
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '?')
        {
            p = s[i];
            idx = i;
            break;
        }
    }
    if (p == 'a')
        p = 'C';
    for (int i = 0; i < idx + 1; i++)
    {
        s[i] = p;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] != '?')
            p = s[i];
        else
        {
            s[i] = p;
        }
    }
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'C' && s[i + 1] == 'J')
            ans += x;
        else if (s[i] == 'J' && s[i + 1] == 'C')
            ans += y;
    }
    cout << "Case #" << tc << ": " << ans << endl;
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