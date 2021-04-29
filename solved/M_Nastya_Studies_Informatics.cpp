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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll l, r, x, y;
    cin >> l >> r >> x >> y;
    ll a, b;
    ll cnt = 0;
    vector<int> v;
    for (int i = 1; i * i <= y; i++)
    {
        if (y % i == 0)
        {
            v.pb(i);
            v.pb(y / i);
        }
    }
    set<pair<int, int>> s;
    for (int i = 0; i < v.size(); i++)
    {
        a = v[i];
        b = (x * y) / v[i];
        if (s.find(mp(a, b)) != s.end())
            continue;
        if (a >= l && a <= r && b >= l && b <= r)
        {
            if (gcd(a, b) == x)
            {
                //cout<<a<<" "<<b<<endl;
                if (a == b)
                    cnt++;
                else
                    cnt += 2;
                s.insert(mp(a, b));
                s.insert(mp(b, a));
            }
        }
    }
    cout << cnt << endl;

    return 0;
}