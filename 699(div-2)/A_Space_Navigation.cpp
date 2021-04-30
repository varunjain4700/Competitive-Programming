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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, x, y;
    cin >> tt;
    while (tt--)
    {
        cin >> x >> y;
        string s;
        cin >> s;
        int n = s.size();
        int xx = 0, yy = 0;
        map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        if (x >= 0)
        {
            if (m['R'] >= x)
                xx = 1;
        }
        if (x < 0)
        {
            if (m['L'] >= abs(x))
                xx = 1;
        }
        if (y >= 0)
        {
            if (m['U'] >= abs(y))
                yy = 1;
        }
        if (y < 0)
        {
            if (m['D'] >= abs(y))
                yy = 1;
        }
        if (xx == 1 && yy == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}