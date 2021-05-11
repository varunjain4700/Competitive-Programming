#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 1; i <= n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        map<ll, ll> m;
        while (n % 2 == 0)
        {
            m[2]++;
            n = n / 2;
        }

        for (int i = 3; i <= sqrt(n); i = i + 2)
        {
            while (n % i == 0)
            {
                m[i]++;
                n = n / i;
            }
        }
        if (n > 2)
        {
            m[n]++;
        }
        ll ans = INT_MIN, factor = 0;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second > ans)
            {
                ans = i->second;
                factor = i->first;
            }
        }
        if (ans > 1)
            ans--;
        cout << ans << endl;
        ll ans1 = 0;
        for (int i = 1; i <= ans - 1; i++)
        {
            cout << factor << " ";
            ans1 = ans * factor;
        }
        cout << n / ans1 << endl;
    }
    return 0;
}