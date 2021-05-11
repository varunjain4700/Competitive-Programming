#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n, m;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        m = n;
        ll x;
        vector<int> f, c;
        rep(i, n)
        {
            cin >> x;
            f.push_back(x);
        }
        rep(i, n)
        {
            cin >> x;
            c.push_back(x);
        }
        vector<pair<int, int>> v;
        vector<pair<int, int>>::iterator it;
        for (int i = 0; i < n; i++)
            v.push_back(make_pair(c[i], f[i]));

        ll ans = 0;
        ll dis = n;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            ll fuel = v[i].second;
            ll cost = v[i].first;
            if (fuel > 0)
            {
                if (fuel <= dis)
                {
                    ans += fuel * cost;
                    dis -= fuel;
                }
                else
                {
                    ans += dis * cost;
                    dis = 0;
                    break;
                }
            }
            // cout<<fuel<<" ";
            if (dis == 0)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}