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
    string s;
    cin >> s;
    int i, idx;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a')
        {
            idx = i;
            break;
        }
    }
    if (i == s.size())
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        int i;
        for (i = 0; i < s.size(); i++)
        {
            if (i == s.size() - idx)
                cout << "a";
            cout << s[i];
        }
        if (i == s.size() - idx)
            cout << "a";
        cout << endl;
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