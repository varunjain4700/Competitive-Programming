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
    int a[n + 2];
    memset(a, 0, sizeof(a));
    vector<int> res;
    for (int i = n; i >= 1; i--)
    {
        if (i == k)
            continue;
        else
        {
            if (a[i] == 0)
            {
                res.pb(i);
            }
            a[k - i] = 1;
        }
    }
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
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