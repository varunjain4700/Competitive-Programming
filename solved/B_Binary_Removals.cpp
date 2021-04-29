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
    string s, t;
    cin >> s;
    int n = s.size();
    int idx = -2;
    int i, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        t += "0";
    }
    for (int i = 0; i < n; i++)
    {
        t[n - i - 1] = '1';
        idx = -2;
        int j;
        for (j = 0; j < n; j++)
        {
            if (s[j] != t[j])
            {
                if (j - idx == 1)
                {
                    break;
                }
                idx = j;
            }
        }
        if (j == n)
        {
            //cout << t << " ";
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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