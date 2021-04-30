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
    ll tt, n;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        int a[n + 1], x = 0, y = 0, z = 0;
        rep(i, n)
        {
            cin >> a[i];
            if (a[i] % 3 == 0)
                x++;
            else if (a[i] % 3 == 1)
                y++;
            else
            {
                z++;
            }
        }
        int ans = 0, p = n / 3;
        int maxm = max(x, max(y, z));
        //cout<<x<<" "<<y<<" "<<z<<endl;
        if (maxm == x)
        {
            ans += x - p;
            y += x - p;
            if (y >= p)
                ans += y - p;
            else
            {
                ans += 2 * (z - p);
            }
        }
        else if (maxm == y)
        {
            ans += y - p;
            z += y - p;
            if (z >= p)
                ans += z - p;
            else
            {
                ans += 2 * (x - p);
            }
        }
        else
        {
            ans += z - p;
            x += z - p;
            if (x >= p)
                ans += x - p;
            else
            {
                ans += 2 * (y - p);
            }
        }
        cout << ans << endl;
    }
    return 0;
}