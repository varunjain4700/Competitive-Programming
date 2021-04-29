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
    ll n, x, y;
    cin >> n;
    vector<ll> mine, miner;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> x >> y;
        if (x == 0)
        {
            miner.pb(abs(y));
        }
        else
        {
            mine.pb(abs(x));
        }
    }
    sort(miner.begin(), miner.end());
    sort(mine.begin(), mine.end());
    double dis = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        dis = sqrt((double)(miner[i] * miner[i] + mine[i] * mine[i]));
        res += dis;
    }
    printf("%0.11f\n", res);
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