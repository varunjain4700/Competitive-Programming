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
int tc = 0;

void solve()
{
    tc++;
    int n, m;
    string s;
    cin >> n >> s;
    m = s.size();
    int row[100005], col[100005], colnum = 1, rownum = 1;
    int idx1, idx2;
    for (int i = 0; i < m; i++)
    {
        if (s[i] == 'E')
            colnum++;
        else
        {
            rownum++;
        }
        row[i] = rownum;
        col[i] = colnum;
        if (s[i] == 'S' && s[i + 1] == 'S' && i + 1 < m)
        {
            idx1 = i;
        }
        if (s[i] == 'E' && s[i + 1] == 'E' && i + 1 < m)
        {
            idx2 = i;
        }
    }
    string ans;
    if (s[0] == 'S' && s[m - 1] == 'E')
    {
        for (int i = 0; i < n - 1; i++)
            ans += "E";
        for (int i = 0; i < n - 1; i++)
            ans += "S";
    }
    if (s[0] == 'S' && s[m - 1] == 'S')
    {
        for (int i = 0; i < col[idx2] - 1; i++)
            ans += "E";
        for (int i = 0; i < n - 1; i++)
            ans += "S";
        while (ans.size() != m)
            ans += "E";
    }
    if (s[0] == 'E' && s[m - 1] == 'S')
    {
        for (int i = 0; i < n - 1; i++)
            ans += "S";
        for (int i = 0; i < n - 1; i++)
            ans += "E";
    }
    if (s[0] == 'E' && s[m - 1] == 'E')
    {
        for (int i = 0; i < row[idx1] - 1; i++)
            ans += "S";
        for (int i = 0; i < n - 1; i++)
            ans += "E";
        while (ans.size() != m)
            ans += "S";
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