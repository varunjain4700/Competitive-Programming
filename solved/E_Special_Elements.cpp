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
    rep(i, n)
    {
        cin >> a[i];
    }
    int m[8005];
    memset(m,0,sizeof(m));
    int curr_sum = 0, cnt = 0;
    rep(i, n)
        m[a[i]]++;
    rep(i, n)
    {
        curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += a[j];
            if (j == i)
                continue;
            if (curr_sum <= n)
            {
                cnt += m[curr_sum];
                m[curr_sum] = 0;
            }
        }
    }

    cout << cnt << endl;
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