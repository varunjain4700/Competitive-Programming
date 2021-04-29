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
    set<int> s, ss;
    rep(i, n)
    {
        cin >> a[i];
        s.insert(i + 1);
        ss.insert(-(i + 1));
    }
    vector<int> min, max;
    min.pb(a[0]);
    s.erase(s.find(a[0]));
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            min.pb(a[i]);
            s.erase(s.find(a[i]));
        }
        else
        {
            min.pb(*(s.begin()));
            s.erase(s.begin());
        }
    }
    max.pb(a[0]);
    ss.erase(ss.find(-a[0]));
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            max.pb(a[i]);
            ss.erase(ss.find(-a[i]));
        }
        else
        {
            max.pb(-(*(ss.lb(-a[i]))));
            ss.erase(ss.lb(-a[i]));
        }
    }

    rep(i, n)
    {
        cout << min[i] << " ";
    }
    cout << endl;
    rep(i, n)
    {
        cout << max[i] << " ";
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