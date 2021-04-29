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
    int a[n + 1];
    rep(i, n)
            cin >>
        a[i + 1];
    int d[n + 5];
    memset(d, 0, sizeof(d));
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > 0)
        {
            d[i + 1]--;
            int l = i - a[i] + 1;
            if (l <= 0)
                l = 1;
            d[l]++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        //cout<<d[i]<<" ";
        d[i] += d[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        if (d[i] > 1)
            d[i] = 1;
        else if (d[i] < 0)
            d[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << d[i] << " ";
    }

    cout << endl;
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