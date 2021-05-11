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
    cin >> n >> x;
    set<int> s;
    rep(i, n)
    {
        cin >> y;
        s.insert(y);
    }
    int available = n - s.size();
    if (available >= x)
    {
        cout << s.size() << endl;
        return;
    }
    else
    {
        int required = x - available;
        cout << s.size() - required << endl;
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