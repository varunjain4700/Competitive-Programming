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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, a, b;
    cin >> tt;
    while (tt--)
    {
        cin >> a >> b;
        ll ans = INT_MAX, aa;
        ll cnt = 0;
        for (int i = 0; i <= 31; i++)
        {
            aa = a;
            cnt = 0;
            if (b + i != 1)
            {
                while (aa != 0)
                {
                    aa = aa / (i + b);
                    cnt++;
                }
                ans = min(ans, cnt + i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}