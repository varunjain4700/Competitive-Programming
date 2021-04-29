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
    int n, x;
    cin >> n;
    vector<int> v, v1;
    rep(i, n + 2)
    {
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    ll num = v[n + 1], sum = 0;
    rep(i, n + 1)
    {
        sum += v[i];
    }
    rep(i, n + 1)
    {
        sum -= v[i];
        int idx = i;
        if (sum == num)
        {
            rep(j, idx)
            {
                cout << v[j] << " ";
            }
            for (int j = idx + 1; j < n + 1; j++)
            {
                cout << v[j] << " ";
            }
            cout << endl;
            return;
        }
        sum += v[i];
    }
    num = v[n];
    rep(i, n)
    {
        v1.pb(v[i]);
    }
    v1.pb(v[n + 1]);
    sum = 0;
    rep(i, n + 1)
    {
        sum += v1[i];
    }
    rep(i, n + 1)
    {
        sum -= v1[i];
        int idx = i;
        if (sum == num)
        {

            rep(j, idx)
            {
                cout << v1[j] << " ";
            }
            for (int j = idx + 1; j < n + 1; j++)
            {
                cout << v1[j] << " ";
            }
            cout << endl;
            return;
        }
        sum += v1[i];
    }
    cout << -1 << endl;
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