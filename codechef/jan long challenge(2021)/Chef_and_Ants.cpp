#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n"
#define mod 1000000007
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
        ll ans = 0;
        rep(i, n)
        {
            cin >> m;
            ll x[m + 1];
            ll pos = 0, neg = 0;
            rep(i, m)
            {
                cin >> x[i];
                if (x[i] > 0)
                    pos++;
                else
                    neg++;
            }
            if (pos == 0 || neg == 0)
                ans = 0;
            else
            {
                ll p = min(pos, neg);
                ll k = p;
                ans += p;
                pos--;
                while (k > 0)
                {
                    ans += pos;
                    pos--;
                    k--;
                }
                k = p;
                neg--;
                while (k > 0)
                {
                    ans += neg;
                    neg--;
                    k--;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}