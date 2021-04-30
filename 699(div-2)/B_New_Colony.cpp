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
    ll tt, n, k;
    cin >> tt;
    while (tt--)
    {
        cin >> n >> k;
        ll a[n + 1];
        rep(i, n)
                cin >>
            a[i];
        ll ans = 0, flag = 0;
        while (!flag)
        {
            int i;
            for (i = 0; i < n - 1; i++)
            {
                if (k > 0 && a[i + 1] > a[i])
                {
                    a[i]++;
                    k--;
                    if (k == 0)
                    {
                        ans = i + 1;
                        flag = 1;
                        break;
                    }
                    break;
                }
            }
            // rep(i,n)
            //     cout<<a[i];
            // cout<<endl;
            if (i == n - 1)
            {
                flag = 1;
                ans = -1;
            }
        }
        if (flag)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}