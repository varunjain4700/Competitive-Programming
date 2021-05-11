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

void solve(ll x, map<int, int> &m)
{
    int cnt = 0;
    while (x > 0)
    {
        if (x & 1 == 1)
            m[cnt]++;
        x = x >> 1;
        cnt++;
    }
}
ll power(int x, int y)
{
    if (y == 0)
        return 1;
    else
    {
        return x * power(x, y - 1);
    }
}

//2,4,6- 2,4,6,0,4,2
//1,4,9 1001|0100|0001=13
void solve()
{
    int n, q, x, y;
    cin >> n >> q;
    vector<ll> v;
    rep(i, n)
    {
        cin >> x;
        v.pb(x);
    }
    map<int, int> m;
    rep(i, n)
    {
        solve(v[i], m);
    }
    ll temp, ans = 0;
    for (auto i : m)
    {
        temp = power(2, i.first);
        ans = ans | temp;
    }
    cout << ans << endl;
    rep(i, q)
    {
        cin >> x >> y;
        ll num = v[x - 1];
        int cnt = 0;
        while (num > 0)
        {
            if (num & 1 == 1)
            {
                m[cnt]--;
                if (m[cnt] == 0)
                    m.erase(cnt);
            }
            num = num >> 1;
            cnt++;
        }
        v[x - 1] = y;
        solve(v[x - 1], m);
        ans = 0;
        for (auto i : m)
        {
            temp = power(2, i.first);
            ans = ans | temp;
        }
        cout << ans << endl;
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