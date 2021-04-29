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
    string s, t, ss;
    cin >> n >> s;
    ss = s;
    t = "abacaba";
    int cnt = 0;
    for (int i = 0; i < n - 6; i++)
    {
        int j, k = 0;
        for (j = i; j < i + 7; j++)
        {
            if (s[j] != t[k])
                break;
            k++;
        }
        if (j == i + 7)
            cnt++;
    }
    if (cnt == 1)
    {
        cout << "Yes" << endl;
        rep(i, n)
        {
            if (s[i] == '?')
                s[i] = 'z';
        }
        cout << s << endl;
    }
    else if (cnt > 1)
    {
        cout << "No" << endl;
        return;
    }
    else
    {
        cnt = 0;
        for (int i = 0; i < n - 6; i++)
        {
            cnt = 0;
            int j, k = 0;
            for (j = i; j < i + 7; j++)
            {
                if (s[j] != t[k] && s[j] != '?')
                    break;
                s[j] = t[k];
                k++;
            }
            if (j == i + 7)
            {
                for (int x = 0; x < n - 6; x++)
                {
                    int y, z = 0;
                    for (y = x; y < x + 7; y++)
                    {
                        if (s[y] != t[z])
                            break;
                        z++;
                    }
                    if (y == x + 7)
                        cnt++;
                }
                if (cnt == 1)
                {
                    cout << "Yes" << endl;
                    rep(i, n)
                    {
                        if (s[i] == '?')
                            s[i] = 'z';
                    }
                    cout << s << endl;
                    return;
                }
                else
                {
                    rep(i, n)
                        s[i] = ss[i];
                }
            }
            else
            {
                rep(i, n)
                    s[i] = ss[i];
            }
        }
        cout << "No" << endl;
    }
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