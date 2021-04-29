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
    cin >> n;
    char a[n + 1][n + 1];
    int row[3], col[3], k = 0;
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> a[i][j];
            if (a[i][j] == '*')
            {
                row[k] = i;
                col[k] = j;
                k++;
            }
        }
    }
    int r, c;
    if (row[0] == row[1])
    {
        if (row[0] + 1 < n)
        {
            r = row[0] + 1;
        }
        else
            r = row[0] - 1;
        a[r][col[0]] = '*';
        a[r][col[1]] = '*';
    }
    else if (col[0] == col[1])
    {
        if (col[0] + 1 < n)
        {
            c = col[0] + 1;
        }
        else
            c = col[0] - 1;
        a[row[0]][c] = '*';
        a[row[1]][c] = '*';
    }
    else
    {
        a[row[0]][col[1]] = '*';
        a[row[1]][col[0]] = '*';
    }
    rep(i, n)
    {
        rep(j, n)
        {
            cout << a[i][j];
        }
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