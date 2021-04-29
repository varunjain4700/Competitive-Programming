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
    int n, x, y;
    cin >> n;
    vector<pair<int, int> > v;
    rep(i, n)
    {
        cin >> x >> y;
        v.pb(mp(x, y));
    }
    sort(v.begin(), v.end());
    int day = 0, prev_day = 0;
    day = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (v[i].second >= day)
            day = v[i].second;
        else
        {
            day = v[i].first;
        }
    }
    cout << day << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}