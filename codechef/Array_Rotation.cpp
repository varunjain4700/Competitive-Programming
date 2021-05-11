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
    int n, q;
    cin >> n;
    ll x, sum = 0;
    rep(i, n)
    {
        cin >> x;
        sum += x;
    }
    while(sum<0)
        sum+=mod;
    ll ans = sum;
    cin>>q;
    rep(i, q)
    {
        cin >> x;
        ans = (ans % mod + ans % mod) % mod;
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();

    return 0;
}