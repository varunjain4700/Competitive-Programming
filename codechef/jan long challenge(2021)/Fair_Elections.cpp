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
        cin >> n >> m;
        ll a[n + 1], b[m + 1];
        ll sum1 = 0, sum2 = 0;
        rep(i, n)
        {
            cin >> a[i];
            sum1 += a[i];
        }
        rep(i, m)
        {
            cin >> b[i];
            sum2 += b[i];
        }
        sort(a, a + n);
        sort(b, b + m);
        int s = min(m, n);
        int cnt = 0;
        int i = 0;
        int k = 0;
        if (sum1 <= sum2)
        {
            for (i = 0; i < s; i++)
            {
                sum1 -= a[i];
                sum1 += b[m - i - 1];
                sum2 -= b[m - i - 1];
                sum2 += a[i];
                cnt++;
                if (sum1 > sum2)
                    break;
            }
            //  cout<<sum1<<" "<<sum2<<endl;
        }
        if (i == s)
            cout << -1 << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}